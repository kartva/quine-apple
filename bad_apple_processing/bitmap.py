from PIL import Image, ImageSequence
import sys

# Configuration
START_FRAME = 0  # Start frame
FRAMES_END = 200  # How many frames to process
SKIP_FACTOR = 2   # Process every Nth frame
WIDTH = 68
HEIGHT = 40

min_char = 35  # '#'
max_char = 125  # '}'

def bit_packed_RLE_encode(data):
    """Run-length encoding with bit packing for binary data.
    Packs run length and value into a single character:
    - 5 bits for count (allowing runs up to 31)
    - 1 bit for binary value
    - Resulting in ((count & 31) << 1 | value) + min_char to stay in 35-125 range
    """
    encoded = []
    count = 1
    for i in range(1, len(data)):
        if data[i] == data[i - 1] and count < 31:  # Max 5-bit value
            count += 1
        else:
            # Pack count and value into a single character
            # Limited to 5 bits for count to ensure we stay in ASCII range
            # count must be in range 0-31 (5 bits)
            packed = ((count & 31) << 1) | (1 if data[i-1] else 0)
            # Add min_char to get into printable ASCII range
            char = chr(packed + min_char)
            
            # Escape special characters
            if char == '\'' or char == '\\':
                encoded.append('\\')
            encoded.append(char)
            count = 1

    # Handle the last run
    packed = ((count & 31) << 1) | (1 if data[-1] else 0)
    char = chr(packed + min_char)
    if char == '\'' or char == '\\':
        encoded.append('\\')
    encoded.append(char)
    
    return ''.join(encoded)

def process_frames(gif_path):
    gif = Image.open(gif_path)
    frames = []
    
    for i, frame in enumerate(ImageSequence.Iterator(gif)):
        if i < START_FRAME:
            continue
        if i >= FRAMES_END:
            break
        if i % SKIP_FACTOR > 0:
            continue
        
        if frame.mode not in ("RGB", "RGBA"):
            continue
            
        # Resize and convert to binary (black and white)
        frame = frame.resize((WIDTH, HEIGHT)).convert("1")
        data = list(frame.getdata())
        data = [0 if pixel == 0 else 1 for pixel in data]
        
        # Encode the frame using bit-packed RLE
        encoded = bit_packed_RLE_encode(data)
        frames.append(encoded)
    
    # Join all frames with a special separator
    return ('~'.join(frames)) + '~'

if __name__ == "__main__":
    output = process_frames("bad_apple.gif")
    print('const char *Q = "' + output + '";')

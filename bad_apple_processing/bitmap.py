from PIL import Image, ImageSequence
import sys

# Configuration
MAX_FRAMES = 100  # How many frames to process
SKIP_FACTOR = 8   # Process every Nth frame
WIDTH = 68
HEIGHT = 40

def RLE_encode(data):
    """Run-length encoding for binary data."""
    encoded = []
    count = 1
    for i in range(1, len(data)):
        if data[i] == data[i - 1] and count < (125 - 31):
            count += 1
        else:
            # ASCII characters from ' ' (32) to '}' (125) for length; '1' or '0' for value
            if chr(31 + count) == '\"':
                encoded.append('\\')
            elif chr(31 + count) == '\\':
                encoded.append('\\')
            encoded.append(chr(31 + count) + ('1' if data[i-1] else '0'))
            count = 1

    if chr(31 + count) == '\"':
        encoded.append('\\')
    elif chr(31 + count) == '\\':
        encoded.append('\\')
    encoded.append(chr(31 + count) + ('1' if data[i-1] else '0'))
    return ''.join(encoded)

def process_frames(gif_path):
    gif = Image.open(gif_path)
    frames = []
    
    for i, frame in enumerate(ImageSequence.Iterator(gif)):
        if i >= MAX_FRAMES:
            break
        if i % SKIP_FACTOR > 0:
            continue
        
        if frame.mode not in ("RGB", "RGBA"):
            continue
            
        # Resize and convert to binary (black and white)
        frame = frame.resize((WIDTH, HEIGHT)).convert("1")
        data = list(frame.getdata())
        data = [0 if pixel == 0 else 1 for pixel in data]
        
        # RLE encode the frame
        encoded = RLE_encode(data)
        frames.append(encoded)
    
    # Join all frames with a special separator (使)
    return ('~'.join(frames)) + '~'

if __name__ == "__main__":
    output = process_frames("bad_apple.gif")
    print('const char *Q = "' + output + '";')

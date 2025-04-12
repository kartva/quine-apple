#!/bin/zsh

# Define the YouTube URL for Bad Apple
YOUTUBE_URL="https://www.youtube.com/watch?v=FtutLA63Cp8"

# Create a working directory
WORK_DIR="bad_apple_processing"
mkdir -p $WORK_DIR
cd $WORK_DIR

echo "Step 1: Downloading video from YouTube..."
# Download the video with yt-dlp, selecting a reasonable resolution
yt-dlp -f "bestvideo[height<=480]+bestaudio/best[height<=480]" \
    --merge-output-format mp4 \
    -o "bad_apple.mp4" \
    $YOUTUBE_URL

echo "Step 2: Converting video to optimized GIF..."
# Extract frames from the video at reduced framerate (10 fps) and resolution (320px width)
ffmpeg -i bad_apple.mp4 \
    -vf "fps=10,scale=320:-1:flags=lanczos,split[s0][s1];[s0]palettegen[p];[s1][p]paletteuse" \
    -loop 0 \
    bad_apple_temp.gif

echo "Step 3: Further optimizing GIF with ImageMagick..."
# Use ImageMagick to further optimize the GIF
convert bad_apple_temp.gif -layers optimize bad_apple.gif

# Optional: Clean up temporary files
rm bad_apple_temp.gif

echo "Done! The GIF has been saved as 'bad_apple.gif'"
echo "Note: The GIF may be quite large. If needed, you can adjust the resolution and framerate in the script."

# Print the GIF file size
du -h bad_apple.gif

cd ..

# Bad Apple Quine

A self-replicating program (quine) that plays the Bad Apple animation in ASCII art. This project combines the concept of a quine with ASCII art animation playback.

## Project Structure

- `quine.c` - The main template source file
- `quine.pack.c` - Generated packed version of the quine 
- `quine_staging.c` - Temporary file generated during animation playback
- `quine.min.c` - Minimized version of the quine
- `generate_quine.hs` - Haskell script to generate the packed quine
- `Makefile` - Build automation
- `quine.sh` - Shell script to run the animation
- `download_BA.sh` - Script to download Bad Apple video
- `encoded_frames.txt` - Contains the ASCII art frames
- `bad_apple_processing/` - Directory containing video processing scripts
  - `bad_apple.gif` - The original Bad Apple animation
  - `bad_apple.mp4` - Video version
  - `bitmap.py` - Python script to process video frames

## How It Works

1. The project uses a self-replicating program (quine) as its base
2. The quine is generated using `generate_quine.hs` which formats and packs the C code
3. The program combines the quine functionality with playback of ASCII art frames
4. Each iteration:
   - The program outputs its own source code
   - Includes the next frame of the animation in the output
   - The output is compiled and run again
   - This creates a continuous animation loop

## Building and Running

```bash
./quine.sh # compiles and runs the quine in a self-feeding loop.
```

1. Generate the packed quine:
```bash
runhaskell generate_quine.hs quine.c 242
```

## Implementation Details

- Uses C for the core quine implementation
- Haskell for code generation and formatting
- Python
- The animation frames are run-length encoded.
- The program maintains a screen buffer (68x40 characters) for the ASCII art.

## Files Description

- `quine.c`: Template file containing the base quine implementation
- `generate_quine.hs`: Handles code formatting, string escaping, and placeholder replacement
- `Makefile`: Automates the build process with proper dependencies
- `quine.sh`: Orchestrates the animation loop, clearing screen and recompiling between frames
- `bitmap.py`: Converts video frames to ASCII art and encodes them efficiently

## Requirements

- GCC compiler
- Haskell with GHC
- Python 3 (for video processing)
- Bash shell
import imageio
import numpy as np
import cv2
from typing import List, Tuple
from pathlib import Path
import argparse
import os
from dataclasses import dataclass

@dataclass
class Primitive:
    type: str  # 'CIRCLE' or 'RECT'
    x: float
    y: float
    w: float  # For CIRCLE, w is radius; for RECT, w is half-width
    h: float  # For RECT, h is half-height; not used for CIRCLE

def fit_primitives_from_frame(frame: np.ndarray, max_primitives: int = 256) -> List[Primitive]:
    """Fit SDF-compatible primitives (circles or rectangles) to white blobs in the binary image."""
    primitives = []
    # Ensure frame is 8-bit single channel
    if len(frame.shape) == 3:
        frame = cv2.cvtColor(frame, cv2.COLOR_RGB2GRAY)
    if frame.dtype != np.uint8:
        frame = frame.astype(np.uint8)

    contours, _ = cv2.findContours(frame, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)

    # Sort contours by area, largest first (optional – you can remove this if you want every contour)
    contours = sorted(contours, key=cv2.contourArea, reverse=True)

    frame_w = frame.shape[1]
    frame_h = frame.shape[0]

    for cnt in contours:
        area = cv2.contourArea(cnt)
        if area < 2:  # Lower threshold for small details
            continue

        # Get minimum enclosing circle
        (cx_circle, cy_circle), radius = cv2.minEnclosingCircle(cnt)
        norm_cx_circle = cx_circle / frame_w
        norm_cy_circle = cy_circle / frame_h
        norm_radius = radius / frame_w  # using width for normalization

        # Get bounding rectangle
        rx, ry, rw, rh = cv2.boundingRect(cnt)
        norm_cx_rect = (rx + rw/2) / frame_w
        norm_cy_rect = (ry + rh/2) / frame_h
        norm_half_w = (rw/2) / frame_w
        norm_half_h = (rh/2) / frame_h

        # Decide which primitive to use based on aspect ratio of bounding rect
        ratio = float(rw) / float(rh) if rh > 0 else 1.0
        if 0.8 <= ratio <= 1.25:
            # Use circle if roughly circular
            primitives.append(Primitive('CIRCLE', norm_cx_circle, norm_cy_circle, norm_radius, 0.0))
        else:
            # Use rectangle if the blob is elongated
            primitives.append(Primitive('RECT', norm_cx_rect, norm_cy_rect, norm_half_w, norm_half_h))

        if len(primitives) >= max_primitives:
            # If you want to capture all details, you can comment this line out.
            break

    return primitives

def process_gif_to_primitives(gif_path: str, max_primitives_per_frame: int = 128, max_frames: int = None) -> List[List[Primitive]]:
    """Convert a GIF to a list of primitive sets per frame with increased resolution for more detail."""
    reader = imageio.get_reader(gif_path)
    all_primitives = []

    # Increase resolution for more detailed ASCII art output
    target_resolution = (128, 96)

    frame_count = 0
    for i, frame in enumerate(reader):
        if max_frames is not None and frame_count >= max_frames:
            print(f"\nReached max_frames limit ({max_frames}). Stopping.")
            break

        gray = cv2.cvtColor(frame, cv2.COLOR_RGB2GRAY)
        _, binary = cv2.threshold(gray, 127, 255, cv2.THRESH_BINARY)
        binary_resized = cv2.resize(binary, target_resolution, interpolation=cv2.INTER_NEAREST)
        primitives = fit_primitives_from_frame(binary_resized, max_primitives_per_frame)
        all_primitives.append(primitives)
        print(f"Processed frame {i+1}", end='\r')
        frame_count += 1

    print("\nFinished processing frames.")
    reader.close()
    return all_primitives

def emit_c_code_for_all_frames(frames: List[List[Primitive]], output_path: Path):
    """Emit C code for all frames into a single file with a main loop to display them."""
    with output_path.open("w") as f:
        f.write("// Combined frames\n")
        f.write("#include <stdio.h>\n#include <math.h>\n#include <unistd.h>\n")  # For usleep
        f.write("#define WIDTH 128\n#define HEIGHT 96\n\n")
        f.write("typedef struct { int type; float x, y, w, h; } Primitive;\n\n")
        f.write("#define CIRCLE 0\n#define RECT 1\n\n")

        # Emit each frame's primitives as an array.
        for idx, frame in enumerate(frames):
            f.write(f"Primitive frame_{idx}[] = {{\n")
            if not frame:
                f.write("    // No primitives for this frame\n")
            else:
                for p in frame:
                    prim_type = "CIRCLE" if p.type == "CIRCLE" else "RECT"
                    f.write(f"    {{{prim_type}, {p.x:.4f}f, {p.y:.4f}f, {p.w:.4f}f, {p.h:.4f}f}},\n")
            f.write("};\n")
        f.write("\n")

        # Create arrays to hold frame pointers and their counts.
        f.write(f"int frame_counts[] = {{ {', '.join(str(len(frame)) for frame in frames)} }};\n")
        f.write("Primitive* all_frames[] = {")
        f.write(", ".join(f"frame_{i}" for i in range(len(frames))))
        f.write("};\n\n")

        # SDF for both circle and rectangle.
        f.write("float eval_sdf(float x, float y, Primitive* prims, int count) {\n")
        f.write("    float d = 1e9;\n")
        f.write("    for (int i = 0; i < count; ++i) {\n")
        f.write("        Primitive p = prims[i];\n")
        f.write("        float dist = 1e9;\n")
        f.write("        if (p.type == CIRCLE) {\n")
        f.write("            float dx = x - p.x, dy = y - p.y;\n")
        f.write("            dist = sqrtf(dx*dx + dy*dy) - p.w;\n")
        f.write("        } else { // RECT\n")
        f.write("            float dx = fabsf(x - p.x) - p.w;\n")
        f.write("            float dy = fabsf(y - p.y) - p.h;\n")
        f.write("            float ax = dx > 0.0f ? dx : 0.0f;\n")
        f.write("            float ay = dy > 0.0f ? dy : 0.0f;\n")
        f.write("            dist = sqrtf(ax*ax + ay*ay);\n")
        f.write("            if(dx <= 0.0f && dy <= 0.0f) dist = fmaxf(dx, dy);\n")
        f.write("        }\n")
        f.write("        d = fminf(d, dist);\n")
        f.write("    }\n")
        f.write("    return d;\n")
        f.write("}\n\n")

        f.write("int main() {\n")
        f.write("    int total_frames = sizeof(all_frames)/sizeof(Primitive*);\n")
        f.write("    while (1) {\n")
        f.write("        for (int f = 0; f < total_frames; ++f) {\n")
        f.write("            Primitive* prims = all_frames[f];\n")
        f.write("            int count = frame_counts[f];\n")
        f.write("            printf(\"\\033[H\"); // Move cursor to top-left\n")
        f.write("            for (int j = 0; j < HEIGHT; ++j) {\n")
        f.write("                for (int i = 0; i < WIDTH; ++i) {\n")
        f.write("                    float x = ((float)i + 0.5f) / WIDTH;\n")
        f.write("                    float y = ((float)j + 0.5f) / HEIGHT;\n")
        f.write("                    float d = eval_sdf(x, y, prims, count);\n")
        f.write("                    putchar(d <= 0.0f ? '#' : ' ');\n")
        f.write("                }\n")
        f.write("                putchar('\\n');\n")
        f.write("            }\n")
        f.write("            fflush(stdout);\n")
        f.write("            usleep(100000); // 100ms delay\n")
        f.write("        }\n")
        f.write("    }\n")
        f.write("    return 0;\n")
        f.write("}\n")

if __name__ == "__main__":
    parser = argparse.ArgumentParser(description="Convert a GIF to C code using SDF primitives for detailed ASCII art.")
    parser.add_argument("gif_path", type=str, help="Path to the input GIF file.")
    parser.add_argument("-o", "--output_dir", type=str, default="ba_c_frames", help="Directory to save the generated C file.")
    parser.add_argument("-p", "--max_primitives", type=int, default=128, help="Maximum primitives per frame.")
    parser.add_argument("-f", "--max_frames", type=int, default=None, help="Maximum number of frames to process from the GIF.")
    args = parser.parse_args()

    gif_path = Path(args.gif_path)
    output_dir = Path(args.output_dir)
    output_dir.mkdir(parents=True, exist_ok=True)

    print(f"Processing GIF: {gif_path}")
    print(f"Output directory: {output_dir}")
    print(f"Max primitives per frame: {args.max_primitives}")
    if args.max_frames is not None:
        print(f"Processing up to {args.max_frames} frames.")

    primitives_by_frame = process_gif_to_primitives(
        str(gif_path),
        max_primitives_per_frame=args.max_primitives,
        max_frames=args.max_frames
    )

    print(f"\nGenerating single C file with {len(primitives_by_frame)} frames...")
    emit_c_code_for_all_frames(primitives_by_frame, output_dir / "bad_apple.c")
    print(f"\nCompleted generation of combined C file at {output_dir / 'bad_apple.c'}")

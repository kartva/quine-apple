import imageio
import numpy as np
import cv2
from typing import List
from pathlib import Path
import argparse
import os
from dataclasses import dataclass

# --- Debug gradient for Python rendering (same as used in the C code) ---
ASCII_GRADIENT = " .:-=+*#%@"
GRADIENT_LEVELS = len(ASCII_GRADIENT) - 1  # highest index

@dataclass
class Primitive:
    type: str  # 'CIRCLE' or 'RECT'
    x: float
    y: float
    w: float  # For CIRCLE: radius; for RECT: half-width
    h: float  # For RECT: half-height; not used for CIRCLE

# --- New helper: Subdivide a large contour ---
def subdivide_contour(contour, binary_frame: np.ndarray, frame_w: int, frame_h: int,
                      grid=(2, 2), min_cell_nonzero_ratio=0.01) -> List[Primitive]:
    """
    Given a large contour and the original binary frame, subdivide its bounding rectangle
    into a grid. For each cell that contains enough "on" pixels (as determined by min_cell_nonzero_ratio),
    run contour detection and generate primitives from that cell.
    The cell primitives are then reprojected into global (normalized) coordinates.
    """
    sub_prims = []
    x, y, w, h = cv2.boundingRect(contour)
    # Create a mask for the contour
    mask = np.zeros(binary_frame.shape, dtype=np.uint8)
    cv2.drawContours(mask, [contour], -1, 255, -1)
    # Crop the bounding box of the contour from the mask
    crop = mask[y:y+h, x:x+w]
    cell_w = w // grid[0]
    cell_h = h // grid[1]
    # For each cell in the grid:
    for i in range(grid[0]):
        for j in range(grid[1]):
            cell_x = i * cell_w
            cell_y = j * cell_h
            # For the last column/row, ensure we cover the full bounding box.
            cw = cell_w if i < grid[0]-1 else w - cell_x
            ch = cell_h if j < grid[1]-1 else h - cell_y
            cell = crop[cell_y:cell_y+ch, cell_x:cell_x+cw]
            # If the cell has very few "on" pixels, skip it.
            if cv2.countNonZero(cell) < (cw * ch * min_cell_nonzero_ratio):
                continue
            # Find contours in the cell
            cell_contours, _ = cv2.findContours(cell, cv2.RETR_LIST, cv2.CHAIN_APPROX_SIMPLE)
            for cnt in cell_contours:
                # Ignore very tiny contours in the cell.
                if cv2.contourArea(cnt) < 0.5:
                    continue
                # Compute local contour properties in the cell.
                epsilon = 0.01 * cv2.arcLength(cnt, True)
                approx = cv2.approxPolyDP(cnt, epsilon, True)
                num_vertices = len(approx)
                (cx_local, cy_local), radius = cv2.minEnclosingCircle(cnt)
                # Adjust the center of the local cell to the global image coordinates:
                global_cx = x + cell_x + cx_local
                global_cy = y + cell_y + cy_local
                norm_cx_circle = global_cx / frame_w
                norm_cy_circle = global_cy / frame_h
                norm_radius = radius / frame_w

                rx, ry, rw_sub, rh_sub = cv2.boundingRect(cnt)
                # Adjust bounding rectangle relative to global frame.
                global_rx = x + cell_x + rx
                global_ry = y + cell_y + ry
                norm_cx_rect = (global_rx + rw_sub / 2) / frame_w
                norm_cy_rect = (global_ry + rh_sub / 2) / frame_h
                norm_half_w = (rw_sub / 2) / frame_w
                norm_half_h = (rh_sub / 2) / frame_h

                ratio = float(rw_sub) / float(rh_sub) if rh_sub > 0 else 1.0
                if (0.8 <= ratio <= 1.25) or (num_vertices > 8):
                    sub_prims.append(Primitive('CIRCLE', norm_cx_circle, norm_cy_circle, norm_radius, 0.0))
                else:
                    sub_prims.append(Primitive('RECT', norm_cx_rect, norm_cy_rect, norm_half_w, norm_half_h))
    return sub_prims


# --- Updated primitive fitting with subdivision ---
def fit_primitives_from_frame(frame: np.ndarray, max_primitives: int = 256,
                              subdivide_threshold_ratio: float = 0.05) -> List[Primitive]:
    """Fit SDF-compatible primitives (circles or rectangles) to white blobs in the binary image.
    
    Uses all contours and, for very large contours (area > subdivide_threshold_ratio of frame area),
    subdivides the area further into smaller primitives.
    """
    primitives = []
    if len(frame.shape) == 3:
        frame = cv2.cvtColor(frame, cv2.COLOR_RGB2GRAY)
    if frame.dtype != np.uint8:
        frame = frame.astype(np.uint8)

    contours, _ = cv2.findContours(frame, cv2.RETR_LIST, cv2.CHAIN_APPROX_SIMPLE)
    frame_h, frame_w = frame.shape
    frame_area = frame_w * frame_h

    for cnt in contours:
        area = cv2.contourArea(cnt)
        # Use even zero-area threshold; we assume noise will be minimal.
        if area < 0.1:
            continue

        if area > subdivide_threshold_ratio * frame_area:
            # For large areas, subdivide further.
            sub_primitives = subdivide_contour(cnt, frame, frame_w, frame_h)
            primitives.extend(sub_primitives)
        else:
            # Compute a polygonal approximation for shape analysis.
            epsilon = 0.01 * cv2.arcLength(cnt, True)
            approx = cv2.approxPolyDP(cnt, epsilon, True)
            num_vertices = len(approx)
            (cx_circle, cy_circle), radius = cv2.minEnclosingCircle(cnt)
            norm_cx_circle = cx_circle / frame_w
            norm_cy_circle = cy_circle / frame_h
            norm_radius = radius / frame_w

            rx, ry, rw, rh = cv2.boundingRect(cnt)
            norm_cx_rect = (rx + rw/2) / frame_w
            norm_cy_rect = (ry + rh/2) / frame_h
            norm_half_w = (rw/2) / frame_w
            norm_half_h = (rh/2) / frame_w

            ratio = float(rw) / float(rh) if rh > 0 else 1.0
            if (0.8 <= ratio <= 1.25) or (num_vertices > 8):
                primitives.append(Primitive('CIRCLE', norm_cx_circle, norm_cy_circle, norm_radius, 0.0))
            else:
                primitives.append(Primitive('RECT', norm_cx_rect, norm_cy_rect, norm_half_w, norm_half_h))
        if len(primitives) >= max_primitives:
            break

    return primitives

# --- SDF evaluation (for Python debug rendering) ---
def eval_sdf_python(x: float, y: float, prims: List[Primitive]) -> float:
    d = 1e9
    for p in prims:
        if p.type == 'CIRCLE':
            dx = x - p.x
            dy = y - p.y
            dist = np.sqrt(dx*dx + dy*dy) - p.w
        else:  # RECT
            dx = abs(x - p.x) - p.w
            dy = abs(y - p.y) - p.h
            ax = dx if dx > 0 else 0
            ay = dy if dy > 0 else 0
            dist = np.sqrt(ax*ax + ay*ay)
            if dx <= 0 and dy <= 0:
                dist = max(dx, dy)
        d = min(d, dist)
    return d

def render_frame_with_primitives(prims: List[Primitive], resolution=(64,48), scale=10.0) -> np.ndarray:
    width, height = resolution
    canvas = np.zeros((height, width), dtype=np.float32)
    for j in range(height):
        for i in range(width):
            x = (i + 0.5) / width
            y = (j + 0.5) / height
            d = eval_sdf_python(x, y, prims)
            # Map the SDF value to intensity via a smooth scaling.
            t = np.clip(1.0 - d * scale, 0.0, 1.0)
            canvas[j, i] = t
    return canvas

def compute_frame_error(prims: List[Primitive], target: np.ndarray, scale=10.0) -> float:
    resolution = (target.shape[1], target.shape[0])
    rendered = render_frame_with_primitives(prims, resolution, scale)
    target_norm = target.astype(np.float32) / 255.0
    error = np.mean(np.abs(rendered - target_norm))
    return error

def process_gif_to_primitives(gif_path: str, max_primitives_per_frame: int = 256,
                              max_frames: int = None) -> List[List[Primitive]]:
    reader = imageio.get_reader(gif_path)
    all_primitives = []
    target_resolution = (64, 48)
    frame_errors = []
    
    for i, frame in enumerate(reader):
        if max_frames is not None and i >= max_frames:
            break

        gray = cv2.cvtColor(frame, cv2.COLOR_RGB2GRAY)
        _, binary = cv2.threshold(gray, 127, 255, cv2.THRESH_BINARY)
        binary_resized = cv2.resize(binary, target_resolution, interpolation=cv2.INTER_NEAREST)
        primitives = fit_primitives_from_frame(binary_resized, max_primitives_per_frame)
        all_primitives.append(primitives)
        
        err = compute_frame_error(primitives, binary_resized)
        frame_errors.append(err)
        print(f"Frame {i+1:03d}: primitives = {len(primitives)}, mean abs error = {err:.3f}", end='\r')

    print("\nFinished processing frames.")
    reader.close()
    if frame_errors:
        print(f"Overall average error: {np.mean(frame_errors):.3f}")
    return all_primitives

def emit_c_code_for_all_frames(frames: List[List[Primitive]], output_path: Path):
    # Combine primitives from all frames.
    combined_primitives = []
    frame_offsets = []
    frame_counts = []
    for frame in frames:
        frame_offsets.append(len(combined_primitives))
        frame_counts.append(len(frame))
        combined_primitives.extend(frame)

    with output_path.open("w") as f:
        f.write("// Combined frames with subdivision\n")
        f.write("#include <stdio.h>\n#include <math.h>\n#include <unistd.h>\n")
        f.write("#define WIDTH 64\n#define HEIGHT 48\n")
        f.write("#define SDF_SCALE 10.0f\n\n")
        f.write("typedef struct { int type; float x, y, w, h; } Primitive;\n\n")
        f.write("#define CIRCLE 0\n#define RECT 1\n\n")
        f.write("Primitive all_primitives[] = {\n")
        for p in combined_primitives:
            prim_type = "CIRCLE" if p.type == "CIRCLE" else "RECT"
            f.write(f"    {{{prim_type}, {p.x:.4f}f, {p.y:.4f}f, {p.w:.4f}f, {p.h:.4f}f}},\n")
        f.write("};\n\n")
        f.write("int frame_offsets[] = { " + ", ".join(str(off) for off in frame_offsets) + " };\n")
        f.write("int frame_counts[] = { " + ", ".join(str(cnt) for cnt in frame_counts) + " };\n")
        f.write(f"int total_frames = {len(frames)};\n\n")
        # SDF and gradient mapping
        f.write("float eval_sdf(float x, float y, Primitive* prims, int count) {\n")
        f.write("    float d = 1e9f;\n")
        f.write("    for (int i = 0; i < count; ++i) {\n")
        f.write("        Primitive p = prims[i];\n")
        f.write("        float dist = 1e9f;\n")
        f.write("        if (p.type == CIRCLE) {\n")
        f.write("            float dx = x - p.x, dy = y - p.y;\n")
        f.write("            dist = sqrtf(dx*dx + dy*dy) - p.w;\n")
        f.write("        } else {\n")
        f.write("            float dx = fabsf(x - p.x) - p.w;\n")
        f.write("            float dy = fabsf(y - p.y) - p.h;\n")
        f.write("            float ax = dx > 0.0f ? dx : 0.0f;\n")
        f.write("            float ay = dy > 0.0f ? dy : 0.0f;\n")
        f.write("            dist = sqrtf(ax*ax + ay*ay);\n")
        f.write("            if (dx <= 0.0f && dy <= 0.0f) dist = fmaxf(dx, dy);\n")
        f.write("        }\n")
        f.write("        if (dist < d) d = dist;\n")
        f.write("    }\n")
        f.write("    return d;\n")
        f.write("}\n\n")
        f.write("char map_to_ascii(float d) {\n")
        f.write("    float t = 1.0f - d * SDF_SCALE;\n")
        f.write("    if (t < 0.0f) t = 0.0f;\n")
        f.write("    if (t > 1.0f) t = 1.0f;\n")
        f.write("    const char* gradient = \" .:-=+*#%@\";\n")
        f.write("    int levels = 9;\n")
        f.write("    int idx = (int)(t * levels);\n")
        f.write("    if (idx < 0) idx = 0;\n")
        f.write("    if (idx > levels) idx = levels;\n")
        f.write("    return gradient[idx];\n")
        f.write("}\n\n")
        f.write("int main() {\n")
        f.write("    while (1) {\n")
        f.write("        for (int f = 0; f < total_frames; ++f) {\n")
        f.write("            int offset = frame_offsets[f];\n")
        f.write("            int count = frame_counts[f];\n")
        f.write("            Primitive* prims = &all_primitives[offset];\n")
        f.write("            printf(\"\\033[H\"); // move cursor to top-left\n")
        f.write("            for (int j = 0; j < HEIGHT; ++j) {\n")
        f.write("                for (int i = 0; i < WIDTH; ++i) {\n")
        f.write("                    float x = ((float)i + 0.5f) / WIDTH;\n")
        f.write("                    float y = ((float)j + 0.5f) / HEIGHT;\n")
        f.write("                    float d = eval_sdf(x, y, prims, count);\n")
        f.write("                    putchar(map_to_ascii(d));\n")
        f.write("                }\n")
        f.write("                putchar('\\n');\n")
        f.write("            }\n")
        f.write("            fflush(stdout);\n")
        f.write("            usleep(100000);\n")
        f.write("        }\n")
        f.write("    }\n")
        f.write("    return 0;\n")
        f.write("}\n")

if __name__ == "__main__":
    parser = argparse.ArgumentParser(
        description="Convert a GIF to C code using SDF primitives with subdivision for improved ASCII art."
    )
    parser.add_argument("gif_path", type=str, help="Path to the input GIF file.")
    parser.add_argument("-o", "--output_dir", type=str, default="ba_c_frames", help="Directory for the generated C file.")
    parser.add_argument("-p", "--max_primitives", type=int, default=256, help="Max primitives per frame.")
    parser.add_argument("-f", "--max_frames", type=int, default=None, help="Max number of frames to process from the GIF.")
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

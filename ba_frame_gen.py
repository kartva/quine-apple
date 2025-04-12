import imageio
import numpy as np
import cv2
from typing import List, Tuple
from pathlib import Path

# Helper dataclass to hold primitives
from dataclasses import dataclass

@dataclass
class Primitive:
    type: str  # 'CIRCLE' or 'RECT'
    x: float
    y: float
    w: float
    h: float = 0.0  # For CIRCLE, h is unused


def fit_primitives_from_frame(frame: np.ndarray, max_primitives: int = 32) -> List[Primitive]:
    """Fit simple SDF-compatible primitives (circles, rectangles) to white blobs in the binary image."""
    primitives = []
    contours, _ = cv2.findContours(frame, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)
    
    # Sort contours by area, largest first
    contours = sorted(contours, key=cv2.contourArea, reverse=True)[:max_primitives]
    
    for cnt in contours:
        area = cv2.contourArea(cnt)
        if area < 5:  # Ignore very small noise
            continue
        
        (x, y), radius = cv2.minEnclosingCircle(cnt)
        x /= frame.shape[1]
        y /= frame.shape[0]
        radius /= frame.shape[1]  # normalize to width
        primitives.append(Primitive('CIRCLE', x, y, radius))

        if len(primitives) >= max_primitives:
            break
    return primitives


def process_gif_to_primitives(gif_path: str, max_frames: int = 1, max_primitives_per_frame: int = 32) -> List[List[Primitive]]:
    """Convert a GIF to a list of primitive sets per frame."""
    reader = imageio.get_reader(gif_path)
    all_primitives = []
    
    for i, frame in enumerate(reader):
        if i >= max_frames:
            break
        gray = cv2.cvtColor(frame, cv2.COLOR_RGB2GRAY)
        _, binary = cv2.threshold(gray, 127, 255, cv2.THRESH_BINARY)
        binary = cv2.resize(binary, (64, 48), interpolation=cv2.INTER_NEAREST)
        primitives = fit_primitives_from_frame(binary, max_primitives_per_frame)
        all_primitives.append(primitives)
    
    return all_primitives


def emit_c_code(primitives_by_frame: List[List[Primitive]], output_path: Path):
    with output_path.open("w") as f:
        f.write('#include <stdio.h>\n#include <math.h>\n\n')
        f.write('#define WIDTH 64\n#define HEIGHT 48\n#define FRAME_IDX 0\n\n')
        f.write('typedef struct { int type; float x, y, w, h; } Primitive;\n\n')
        f.write('#define CIRCLE 0\n#define RECT 1\n\n')

        for idx, primitives in enumerate(primitives_by_frame):
            f.write(f'Primitive frame_{idx}[] = {{\n')
            for p in primitives:
                f.write(f'    {{{"CIRCLE" if p.type == "CIRCLE" else "RECT"}, {p.x:.4f}f, {p.y:.4f}f, {p.w:.4f}f, {p.h:.4f}f}},\n')
            f.write('};\n\n')

        f.write('float eval_sdf(float x, float y, Primitive* prims, int count) {\n')
        f.write('    float d = 1e9;\n')
        f.write('    for (int i = 0; i < count; ++i) {\n')
        f.write('        Primitive p = prims[i];\n')
        f.write('        float dx = x - p.x, dy = y - p.y;\n')
        f.write('        float dist = (p.type == CIRCLE) ? sqrtf(dx*dx + dy*dy) - p.w : 1e9;\n')
        f.write('        d = fminf(d, dist);\n')
        f.write('    }\n')
        f.write('    return d;\n')
        f.write('}\n\n')

        f.write('int main() {\n')
        f.write('    Primitive* prims = frame_0;\n')
        f.write('    int count = sizeof(frame_0)/sizeof(Primitive);\n')
        f.write('    for (int j = 0; j < HEIGHT; ++j) {\n')
        f.write('        for (int i = 0; i < WIDTH; ++i) {\n')
        f.write('            float x = (float)i / WIDTH;\n')
        f.write('            float y = (float)j / HEIGHT;\n')
        f.write('            float d = eval_sdf(x, y, prims, count);\n')
        f.write('            putchar(d < 0 ? \'#\' : \' \');\n')
        f.write('        }\n')
        f.write('        putchar(\'\\n\');\n')
        f.write('    }\n')
        f.write('    return 0;\n')
        f.write('}\n')


# Run for one frame of an example GIF
gif_path = "bad_apple_processing/bad_apple.gif"
output_path = Path("ba_c_frames/bad_apple_frame0.c")

primitives = process_gif_to_primitives(gif_path, max_frames=50)
emit_c_code(primitives, output_path)

output_path.name  # Return filename for download link

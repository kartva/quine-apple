import sys
import os

def escape_c_string(text: str) -> str:
    """Escapes backslashes and double quotes for C string literals."""
    return text.replace('\\', '\\\\').replace('"', '\\"').replace('\n', '\\n')

def create_quine(input_filepath, output_filepath):
    """Generates a C quine file from a template."""
    try:
        with open(input_filepath, 'r') as f_in:
            template_code = f_in.read()

        # Remove // comments
        lines = template_code.splitlines()
        processed_lines_no_comments = []
        for line in lines:
            comment_start = line.find('//')
            if comment_start != -1:
                processed_lines_no_comments.append(line[:comment_start])
            else:
                processed_lines_no_comments.append(line)

        # Process lines for final output structure:
        # - Keep '#' lines stripped + '\n'
        # - Join other lines after replacing '\t' with ''
        output_parts = []
        for line in processed_lines_no_comments:
            stripped_line = line.strip()
            if stripped_line.startswith('#'):
                # Keep preprocessor directives and add a newline
                output_parts.append(stripped_line + '\n')
            else:
                # Replace tabs with spaces, keep other whitespace within the line
                processed_line = line.replace('\t', '')
                output_parts.append(processed_line) # Append the line content, no newline added

        template_for_output = "".join(output_parts) # Join all parts

        # Ensure the placeholder exists
        if '@' not in template_for_output: # Check in the processed template
            print(f"Error: Placeholder '@' not found in processed template from {input_filepath}", file=sys.stderr)
            sys.exit(1)

        # Escape the processed template for the C string literal
        # escape_c_string handles '\' and '"'. Newlines after '#' are already '\n'.
        escaped_code = escape_c_string(template_for_output)

        # Replace the placeholder '@' in the processed template structure
        output_code = template_for_output.replace('@', escaped_code, 1)

        with open(output_filepath, 'w') as f_out:
            f_out.write(output_code)

        print(f"Successfully generated quine: {output_filepath}")

    except FileNotFoundError:
        print(f"Error: Input file not found: {input_filepath}", file=sys.stderr)
        sys.exit(1)
    except Exception as e:
        print(f"An error occurred: {e}", file=sys.stderr)
        sys.exit(1)

if __name__ == "__main__":
    if len(sys.argv) != 2:
        print("Usage: python generate_quine.py <input_c_template_file>")
        print("Example: python generate_quine.py template.c")
        sys.exit(1)

    input_file = sys.argv[1]

    # Ensure the input file exists before proceeding
    if not os.path.exists(input_file):
        print(f"Error: Input file does not exist: {input_file}", file=sys.stderr)
        sys.exit(1)

    # Derive output filename
    input_dir = os.path.dirname(input_file)
    base_name = os.path.splitext(os.path.basename(input_file))[0]
    output_file = os.path.join(input_dir, f"{base_name}.quine.c")

    create_quine(input_file, output_file)

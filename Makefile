HASKELL = runhaskell
SCRIPT = generate_quine.hs
TEMPLATE = quine.c
GENERATED_C = $(basename $(TEMPLATE)).pack.c
EXECUTABLE = quine_executable

CC = gcc
CFLAGS = -Wall -Wextra -std=c11

.PHONY: all clean

# Default target: build the executable
all: $(EXECUTABLE)

# Rule to generate the quine C file from the template using the HASKELL script
# Depends on the template C file and the HASKELL script
$(GENERATED_C): $(TEMPLATE) $(SCRIPT)
	$(HASKELL) $(SCRIPT) $(TEMPLATE) 80

# Rule to compile the generated C file into an executable
# Depends on the generated C file
$(EXECUTABLE): $(GENERATED_C)
	$(CC) $(CFLAGS) -o $@ $<

# Rule to clean up generated files
clean:
	rm -f $(GENERATED_C) $(EXECUTABLE)

# Makefile to compile a single source file using gcc or g++
INPUT := 2020_1-1.c

# Check the source file extension and set the compiler accordingly
ifeq ($(suffix $(INPUT)), .cpp)
    CC := g++
else
    CC := gcc
endif

# Compiler flags
# CFLAGS := -Wall -Werror

# Build directory
BUILD_DIR := build

# Phony targets (targets that are not associated with actual files)
.PHONY: all clean

# Default target to build the executable
all: $(BUILD_DIR)/$(basename $(INPUT))

# Compile the source file into an object file
$(BUILD_DIR)/$(basename $(INPUT)): $(INPUT)
	@mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) $< -o $@

# Clean build directory
clean:
	rm -rf $(BUILD_DIR)


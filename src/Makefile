# Define the source directory
SRC_DIR = .

# Define the build directory
BUILD_DIR = ../build

FILE_NAME = generating_prime

# Define the source file
SRC = $(SRC_DIR)/$(FILE_NAME).c

# Define the binary file
BIN = $(BUILD_DIR)/$(FILE_NAME).bin

# Compiler
CC = gcc

# Compiler flags
CFLAGS = 

# Default target
all: $(BIN)

# Build target
$(BIN): $(SRC)
	@echo "Creating build directory..."
	@mkdir -p $(BUILD_DIR)
	@echo "Compiling source file..."
	$(CC) $(SRC) -o $(BIN)

# Run target
run: $(BIN)
	@echo "Running the binary..."
	./$(BIN)



.PHONY: all clean run

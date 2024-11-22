# Define the compiler and flags
CC = gcc
CFLAGS = -m32 -O0 -fno-stack-protector

# Define the target executable
TARGET = main

# Define the source files
SRC = main.c

# Define the object files
# The default target to build the executable
all: $(TARGET)

# Rule to link object files into the executable
$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

# Rule to clean up generated files
clean:
	rm -f $(TARGET)


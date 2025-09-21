# Compiler
CC = gcc
CFLAGS = -Iinclude -Wall

# Source and Object files
SRCS = $(wildcard src/*.c)
OBJS = $(SRCS:src/%.c=obj/%.o)

# Executable
TARGET = bin/client

# Default target
all: $(TARGET)

# Linking all object files
$(TARGET): $(OBJS)
	@mkdir -p bin
	$(CC) $(OBJS) -o $(TARGET)

# Compile .c -> .o
obj/%.o: src/%.c
	@mkdir -p obj
	$(CC) $(CFLAGS) -c $< -o $@

# Clean
clean:
	rm -rf obj/* $(TARGET)


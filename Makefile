PROJ_NAME=mandelbrot

# compiler
CC=g++

# compiler flags
CCFLAGS=-Wall -Werror -pedantic-errors -Weffc++ -Wextra -Wconversion -Wsign-conversion -std=c++20

OJBS = main.o complex.o

all: $(OBJS)
	$(CC) $(CCFLAGS) main.cpp -o $(PROJ_NAME) $(OBJS)


CC=musl-gcc

FLAGS=-g -O3 -lm

all: histogram 

histogram: histogram.c struct.h
	$(CC) $(FLAGS) histogram.c -o histogram
clean:
	rm histogram

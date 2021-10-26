
CC=gcc
CFLAGS=-Wall -g -I/usr/include/python3.8

all: arith.o

arith.o: arith.c arith.h
	$(CC) $(CFLAGS) -c arith.c

clear:
	rm *.o $(BINS)

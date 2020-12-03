CC=g++
CFLAGS=-g -Wall
#enable all warnings
#CFLAGS=-O2

all: build

build: main.o
	$(CC) $(CFLAGS) -o main.o
main.o: main.cc
	$(CC) -c main.cc -o main.o

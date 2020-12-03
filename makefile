CC=g++
CFLAGS=-g -Wall
#enable all warnings
#CFLAGS=-O2

all: build

check:
	cppcheck --language=c++ main.cc
	valgrind --leak-check=full ./a.out

build: main.o
	$(CC) $(CFLAGS) -o main.o count
main.o: main.cc
	$(CC) -c main.cc -o main.o

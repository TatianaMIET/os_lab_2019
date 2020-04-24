CC=gcc
CFLAGS=-I.


all : mutex

mutex : mutex.o
	$(CC) -o mutex -lpthread mutex.o

mutex.o : 
	$(CC) -o mutex.o -c -std=c99 mutex.c $(CFLAGS)

clean : 
	rm mutex.o mutex
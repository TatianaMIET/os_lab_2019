CC=gcc
CFLAGS=-I.


all : server client

server : server.o
	$(CC) -o server -lpthread server.o

client : client.o
	$(CC) -o client client.o

server.o : 
	$(CC) -o server.o -c -std=c99 server.c $(CFLAGS)

client.o :
	$(CC) -o client.o -c -std=c99 client.c $(CFLAGS)

clean : 
	rm client.o client server.o server
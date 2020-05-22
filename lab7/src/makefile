CC=gcc
CFLAGS=-I.


all : tcpserver tcpclient udpserver udpclient

tcpserver : tcpserver.o
	$(CC) -o tcpserver tcpserver.o

tcpclient : tcpclient.o
	$(CC) -o tcpclient tcpclient.o

tcpserver.o :
	$(CC) -o tcpserver.o -c -std=c99 tcpserver.c $(CFLAGS)

tcpclient.o :
	$(CC) -o tcpclient.o -c -std=c99 tcpclient.c $(CFLAGS)

udpserver : udpserver.o
	$(CC) -o udpserver udpserver.o

udpclient : udpclient.o
	$(CC) -o udpclient udpclient.o

udpserver.o :
	$(CC) -o udpserver.o -c -std=c99 udpserver.c $(CFLAGS)

udpclient.o :
	$(CC) -o udpclient.o -c -std=c99 udpclient.c $(CFLAGS)	

clean : 
	rm tcpclient.o tcpclient tcpserver.o tcpserver udpclient.o udpclient udpserver.o udpserver
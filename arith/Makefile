<<<<<<< HEAD
cc=arm-linux-gnueabi-gcc

all : projbin
projbin : ar1.o main.o sub.o
$(CC) -o projbin ar1.o main.o sub.o

ar1.o : ar1.c
$(CC) -c -o  ar1.o ar1.c

main.o : main.c
$(CC) -c -o  main.o main.c

sub.o : sub.c
$(CC) -c -o  sub.o sub.c

clean:
     rm -rf *.o projbin
=======
CC=gcc

all: projbin

projbin: main.o add.o sub.o
	$(CC) -o projbin main.o add.o sub.o

main.o: main.c
	$(CC) -c -o main.o main.c

add.o: add.c
	$(CC) -c -o add.o add.c

sub.o: sub.c
	$(CC) -c -o sub.o sub.c

clean: 
	rm -rf *.o projbin
>>>>>>> feature

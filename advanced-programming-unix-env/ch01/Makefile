CC=gcc
CFLAGS=-I -Wall 

myls: myls.o error.o
	gcc -o $@ $^ $(CFLAGS)

clean:
	rm -f myls *.o

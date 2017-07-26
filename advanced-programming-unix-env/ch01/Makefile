CC=gcc
CFLAGS=-I -Wall

myls: myls.o error.o
	gcc -o $@ $^ $(CFLAGS)

rw_stdin_stdout: rw_stdin_stdout.o error.o
	gcc -o $@ $^ $(CFLAGS)

lameshell_1_5: lameshell_1_5.o error.o
	gcc -o $@ $^ $(CFLAGS)

clean:
	rm -f myls rw_stdin_stdout lameshell_1_5 *.o

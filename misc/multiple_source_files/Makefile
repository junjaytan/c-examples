CC = gcc
CFLAGS = -Wall
DEPS = myheader.h
OBJ = main.o printstuff.o

%.o: %.c $(DEPS)
	$(CC) $(CFLAGS) -c -o $@ $<

greeting: $(OBJ)
	gcc $(CFLAGS) -o greeting $^

clean:
	rm -f *.o *~ core* greeting main printstuff

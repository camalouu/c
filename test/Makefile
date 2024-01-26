CC = gcc
CFLAGS = -Wall -Wextra

all: myprogram
	./myprogram

myprogram: source.o main.o
	$(CC) $^ -o $@

source.o: example1.c example.h
	$(CC) $(CFLAGS) -c $< -o $@

main.o: main.c example.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f myprogram *.o

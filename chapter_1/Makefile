CC = gcc
CFLAGS = -Wall -Werror
SRC = 1.19.c
EXECUTABLE = app

all: $(EXECUTABLE)
	./$(EXECUTABLE)
	rm -f $(EXECUTABLE)

$(EXECUTABLE): $(SRC)
	$(CC) $(CFLAGS) -o $(EXECUTABLE) $(SRC)

clean:
	rm -f $(EXECUTABLE)
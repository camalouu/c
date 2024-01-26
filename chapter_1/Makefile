CC = gcc
CFLAGS = -Wall -Werror
SRC = test.c
EXECUTABLE = app

all: $(EXECUTABLE)
	./$(EXECUTABLE)
	rm -f $(EXECUTABLE)

$(EXECUTABLE): $(SRC)
	$(CC) $(CFLAGS) -o $(EXECUTABLE) $(SRC)

clean:
	rm -f $(EXECUTABLE)
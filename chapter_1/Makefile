CC = gcc
CFLAGS = -Wall -Werror
SRC = 1.21.c
EXECUTABLE = app
TESTAPP = test

all: $(EXECUTABLE)
	./$(EXECUTABLE)
	rm -f $(EXECUTABLE)

$(EXECUTABLE): $(SRC)
	$(CC) $(CFLAGS) -o $(EXECUTABLE) $(SRC)

clean:
	rm -f $(EXECUTABLE)

$(TESTAPP): test.c 
	$(CC) $(CFLAGS) -o $(TESTAPP) test.c
	./$(TESTAPP)
	rm -f $(TESTAPP)
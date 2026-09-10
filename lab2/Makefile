CC = gcc
CFLAGS = -Wall -Wextra -Werror -std=c11
TARGET = odd_checker
OBJECTS = main.o isOdd.o


all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^

main.o: main.c isOdd.h
	$(CC) $(CFLAGS) -c main.c -o main.o

isOdd.o: isOdd.c isOdd.h
	$(CC) $(CFLAGS) -c isOdd.c -o isOdd.o

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(OBJECTS) $(TARGET)
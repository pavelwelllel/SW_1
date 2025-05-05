CC = g++
CFLAGS = -Wall -Wextra -std=c++11
TARGET = dz1_program

all: $(TARGET)

$(TARGET): main.o dz1.o
	$(CC) $(CFLAGS) -o $(TARGET) main.o dz1.o

main.o: main.cpp dz1.h
	$(CC) $(CFLAGS) -c main.cpp

dz1.o: dz1.cpp dz1.h
	$(CC) $(CFLAGS) -c dz1.cpp

clean:
	rm -f *.o $(TARGET)
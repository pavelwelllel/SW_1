CC = g++
CFLAGS = -Wall -Wextra -std=c++11
TARGET = SW_1_program

all: $(TARGET)

$(TARGET): main.o SW_1.o
	$(CC) $(CFLAGS) -o $(TARGET) main.o SW_1.o

main.o: main.cpp SW_1.h
	$(CC) $(CFLAGS) -c main.cpp

SW_1.o: SW_1.cpp SW_1.h
	$(CC) $(CFLAGS) -c SW_1.cpp

clean:
	rm -f *.o $(TARGET)

CC = g++
FLAGS = -lcurl -std=c++17

TARGET = cotripp

all:
	$(CC) -o $(TARGET) src/*h src/*.cpp deps/*.h deps/*.cpp cotripp.cpp $(FLAGS)

clean:
	rm cotripp
CC = g++
CFLAGS = -c -Wall
DEPS = pet.h
OBJ = main.o pet.o

makePETZ : $(OBJ)
	$(CC) -o main $(OBJ)
	
main.o: main.cpp pet.h
	$(CC) $(CFLAGS) main.cpp
	
pet.o: pet.cpp pet.h
	$(CC) $(CFLAGS) pet.cpp

	
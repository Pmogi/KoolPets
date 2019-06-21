CC = g++
CFLAGS = -c -Wall
DEPS = pet.h
OBJ = main.o pet.o

makePETZ : $(OBJ)
	$(CC) -o main $(OBJ)
	
pet.o: pet.cpp pet.h
	$(CC) $(CFLAGS) pet.cpp

main.o: main.cpp pet.h
	$(CC) $(CFLAGS) main.cpp
	

clean: 
	rm *o main
	
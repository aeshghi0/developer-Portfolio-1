CC = g++ # macros
FLAGS = -std=c++14 -Wall -g
OBJS = cardDeckClass.o

all: hw02

hw02: hw02.cpp cardDeckClass.o # step2 build program
	$(CC) $(FLAGS) hw02.cpp -o hw02 $(OBJS)

cardDeckClass.o: cardDeckClass.cpp cardDeckClass.h # step1 build deck object file
	$(CC) $(FLAGS) -c cardDeckClass.cpp -o cardDeckClass.o

clean:
	rm *.o hw02.scr hwo2.tar

tar:
	tar cf hw02.tar hw02.scr makefile hw02.cpp cardDeckClass.h cardDeckClass.cpp
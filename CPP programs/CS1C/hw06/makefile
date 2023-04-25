CC = g++ # macros
FLAGS = -std=c++14 -Wall -g
#OBJS = hw06.o

all: hw06

hw06: hw06.cpp # step2 build program
	$(CC) $(FLAGS) forLoop.cpp recursion.cpp hw06.cpp -o hw06

#hw05.o: hw05.cpp hw05.h # step1 build deck object file
#	$(CC) $(FLAGS) -c cardDeckClass.cpp -o cardDeckClass.o

clean:
	rm *.o hw06.scr hw06.tar

tar:
	tar cf hw06.tar hw06.scr makefile hw06.cpp hw06.h forLoop.cpp recursion.cpp hw06QA.txt
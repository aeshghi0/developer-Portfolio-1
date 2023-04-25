CC = g++ # macros
FLAGS = -std=c++14 -Wall
OBJS = LinkedList.o Node.o DNode.o DLinkedList.o

all: hw16

hw16: hw16.cpp # step2 build program
	$(CC) $(FLAGS) hw14.cpp -o hw14 $(OBJS)



clean:
	rm *.o hw16.scr hw16.tar

tar:
	tar cf hw16.tar hw16.scr makefile hw16.cpp 
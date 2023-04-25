CC = g++ # macros
FLAGS = -std=c++14 -Wall
OBJS = Queue.o #queueFullException.o queueEmptyException.o Queue.o

all: hw13

hw13: hw13.cpp Queue.o #queueFullException.o queueEmptyException.o Queue.o # step2 build program
	$(CC) $(FLAGS) hw13.cpp -o hw13 $(OBJS)

#queueFullException.o: # step1 build deck object file
#	$(CC) $(FLAGS) -c hw13.cpp -o queueFullException.o

#queueEmptyException.o: # step1 build deck object file
#	$(CC) $(FLAGS) -c hw13.cpp -o queueEmptyException.o
#
#Queue.o: # step1 build deck object file
#	$(CC) $(FLAGS) -c hw13.cpp -o Queue.o

clean:
	rm *.o hw13.scr hw13.tar

tar:
	tar cf hw13.tar hw13.scr makefile hw13.cpp 
CC = g++ # macros
FLAGS = -std=c++14 -Wall -g
OBJS = date.o employeeClass.o programmerClass.o softwareArchitectClass.o

all: hw04

hw04: hw04.cpp date.o employeeClass.o programmerClass.o softwareArchitectClass.o # step2 build program
	$(CC) $(FLAGS) hw04.cpp -o hw04 $(OBJS)

date.o: date.cpp date.h # step 1 build date object file
	$(CC) $(FLAGS) -c date.cpp -o date.o

employeeClass.o: employeeClass.cpp employeeClass.h # step1 build employee object file
	$(CC) $(FLAGS) -c employeeClass.cpp -o employeeClass.o

programmerClass.o: programmerClass.cpp programmerClass.h # step1 build programmer object file
	$(CC) $(FLAGS) -c programmerClass.cpp -o programmerClass.o

softwareArchitectClass.o: softwareArchitectClass.cpp softwareArchitectClass.h # step1 build softwareArchitect object file
	$(CC) $(FLAGS) -c softwareArchitectClass.cpp -o softwareArchitectClass.o

clean:
	rm *.o hw04.scr hwo4.tar

tar:
	tar cf hw04.tar hw04.scr makefile hw04.cpp date.h date.cpp employeeClass.h employeeClass.cpp programmerClass.h programmerClass.cpp softwareArchitectClass.h softwareArchitectClass.cpp
CC = g++ # macros
FLAGS = -std=c++14 -Wall -g
OBJS = employeeClass.o programmerClass.o softwareArchitectClass.o

all: hw03

hw03: hw03.cpp employeeClass.o programmerClass.o softwareArchitectClass.o # step2 build program
	$(CC) $(FLAGS) hw03.cpp -o hw03 $(OBJS)

employeeClass.o: employeeClass.cpp employeeClass.h # step1 build employee object file
	$(CC) $(FLAGS) -c employeeClass.cpp -o employeeClass.o

programmerClass.o: programmerClass.cpp programmerClass.h # step1 build programmer object file
	$(CC) $(FLAGS) -c programmerClass.cpp -o programmerClass.o

softwareArchitectClass.o: softwareArchitectClass.cpp softwareArchitectClass.h # step1 build softwareArchitect object file
	$(CC) $(FLAGS) -c softwareArchitectClass.cpp -o softwareArchitectClass.o

clean:
	rm *.o hw03.scr hwo3.tar

tar:
	tar cf hw03.tar hw03.scr makefile hw03.cpp employeeClass.h employeeClass.cpp programmerClass.h programmerClass.cpp softwareArchitectClass.h softwareArchitectClass.cpp
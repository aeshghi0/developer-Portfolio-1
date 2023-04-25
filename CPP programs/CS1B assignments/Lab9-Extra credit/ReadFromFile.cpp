#include "myHeader.h"

void ReadFromFile()
{
	fstream inFile;


	StudentNode *stdPtr;
	StudentNode *head;

	head = NULL;

	stdPtr = new StudentNode;

	inFile.open("inFile.txt");

	while(inFile && stdPtr != NULL)
	{
		stdPtr -> name;
	}
}



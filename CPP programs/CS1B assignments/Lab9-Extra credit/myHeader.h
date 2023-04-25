

#ifndef MYHEADER_H_
#define MYHEADER_H_

#include <iomanip>
#include <iostream>
#include <string>
#include <limits>
#include <sstream>
#include <fstream>
using namespace std;

struct StudentNode
{
	string 		name;
	int	   		age;
	string 		major;
	float  		gpa;
	StudentNode *next;

};




#endif /* MYHEADER_H_ */

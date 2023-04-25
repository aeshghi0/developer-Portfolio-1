#ifndef EMPLOYEECLASS_H_
#define EMPLOYEECLASS_H_

#include "employeeClass.h"

//class programmer(derived from the class employee):
//for setting and changing the attributes about the programmer
class programmer: protected employee
{
//public parts containing the method functions of the class
public:
	//default constructor
	programmer();

	//non-default constructor
	programmer(int n);

	//destructor
	~programmer();

	//method for setting the department number
	void setDepartmentNum(string depNum);

	//method for setting the supervisor's name
	void setSupName(string supervisor);

	//method for setting the salary increase percentage
	void setPercentage(int percent);

	//method for setting if the person knows c++
	void cppIdentifier(bool cppIdent);

	//method for setting if the person knows java
	void javaIdentifier(bool javaIdent);

	//method for printing the attributes of the class
	void printProgrammer();

//private part of the class; containing the attributes of the class
private:
	string 	depNumber;		//PROCESS - storing the department number
	string 	supName;		//PROCESS - storing the supervisor's name
	float	percSalaryInc;	//PROCESS - storing the salary increase percentage
	bool	cpp;			//PROCESS - storing if the person knows c++
	bool	java;			//PROCESS - storing if the person knows java

};

#endif
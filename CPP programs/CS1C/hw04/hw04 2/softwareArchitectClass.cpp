#include"employeeClass.h"
#include"softwareArchitectClass.h"

/*******************************************************************************
 * Methods for class softArch
 *******************************************************************************/

//non-default constructor
softArch::softArch(int n) 
{
	n = 0;
}

//Default constructor
softArch::softArch()
{
	depNumber.clear();
	supName.clear();

	percSalaryInc = 0;
	experience 	  = 0;
}

//Destructor
softArch::~softArch() {}

//Method for getting the department number from the client and
//store it in depNumber number attribute
void softArch::setDepartmentNum(string departmnet)
{
	depNumber = departmnet;
}

//Method for getting the supervisore's name from the clinet and
//store it in the supName attribute
void softArch::setSupName(string supervisor)
{
	supName = supervisor;
}

//Method for getting the salary increase percentage from the client
//store it in the percSalaryInc attribute
void softArch::setPercentage(float percent)
{
	percSalaryInc = percent;
}

//Method for getting the experience increase percentage from the client
//store it in the experience attribute
void softArch::setExperience(int empYears)
{
	experience = empYears;
}

//method for printing the attributes with the informations stored
//in them from the client to the screen
void softArch::printSoftArch()
{

	cout << left;
	cout << setw(14) << employee::getName()    << setw(18) << depNumber     << setw(18)
		 << supName  << "%"     << setw(16) << percSalaryInc << experience
		 << endl;
}
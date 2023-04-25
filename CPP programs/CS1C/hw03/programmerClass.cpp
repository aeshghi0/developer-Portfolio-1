#include"employeeClass.h"
#include"programmerClass.h"

/*******************************************************************************
 * Methods for class programmer
 *******************************************************************************/

//non-default constructor
programmer::programmer(int n) 
{
	n = 0;
}

//Default constructor
programmer::programmer()
{
	depNumber.clear();
	supName.clear();

	percSalaryInc = 0;

	cpp  = false;
	java = false;
}

//Destructor
programmer::~programmer() {}

//Method for getting the department number from the client and
//store it in depNumber number attribute
void programmer::setDepartmentNum(string depNum)
{
	depNumber = depNum;
}

//Method for getting the supervisore's name from the clinet and
//store it in the supName attribute
void programmer::setSupName(string supervisor)
{
	supName = supervisor;
}

//Method for getting the salary increase percentage from the client
//store it in the percSalaryInc attribute
void programmer::setPercentage(int percent)
{
	percSalaryInc = percent;
}

//Method for getting the C++ identifier true/false result from the
//client and store it in the cpp attribute
void programmer::cppIdentifier(bool cppIdent)
{
	cpp = cppIdent;


}

//Method for getting the Java identifier true/false result from the
//client and store it in the java identifier
void programmer::javaIdentifier(bool javaIdent)
{
	java = javaIdent;

}

//method for printing the attributes with the informations stored
//in them from the client to the screen
void programmer::printProgrammer()
{


	cout << left;
	cout << setw(15) << employee::getName() << setw(15) << depNumber << setw(20)
		 << supName  << "%"  << setw(15) << percSalaryInc;

	if(cpp == true)
	{
		cout << setw(22) << "Yes";
	}

	else
	{
		cout << setw(22) << "No";
	}

	if(java == true)
	{
		cout << "Yes";
	}

	else
	{
		cout << "No";
	}

	cout << endl;
}

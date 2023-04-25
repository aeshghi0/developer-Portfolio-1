
#include "employeeClass.h"

//class softArch(derived from the class employee):
//for setting and changing the attributes about the software Architects
class softArch: private employee
{
//public parts containing the method functions of the class
public:

	//default constructor
	softArch();

	//nondefault constructor
	softArch(int n);

	//destructor
	~softArch();

	//method for setting the department number
	void setDepartmentNum(string departmnet);

	//method for setting the supervisors name
	void setSupName(string supervisor);

	//method for setting the salary increase percentage
	void setPercentage(float percent);

	//method for setting the experience
	void setExperience(int empYears);

	//method for printing the attributes of the class
	void printSoftArch();

//private part of the class; containing the attributes of the class
private:
	string	depNumber;		//PROCESS - storing the department number
	string	supName;		//PROCESS - storing the supervisor's name
	float	percSalaryInc;	//PROCESS - storing the salary increase percentage
	int		experience;		//PROCESS - storing the experience
};

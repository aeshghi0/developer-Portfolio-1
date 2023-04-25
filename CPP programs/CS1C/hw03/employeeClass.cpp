/*******************************************************************************
 * PROGRAMMER : Ali Eshghi
 * STUDENT ID : 1112261
 * CLASS      : CS1C
 * SECTION    : MW 5pm
 * Assign #1  : CS1C corporation
 * DUE DATE   : 29 January 2020
 ******************************************************************************/

#include "employeeClass.h"

/*******************************************************************************
 * Methods for class date
 *******************************************************************************/


//non-Default constructor
date::date()
{
	//INITIALIZATION
	day   = 0;
	month = 0;
	year  = 0;
}

//destruactor
date::~date() {}


/*******************************************************************************
 * Methods for class employee
 *******************************************************************************/

//non-default constructor
employee::employee(int n) 
{
	n = 0;
}

//Default constructor
employee::employee()
{
	//INITIALIZATION
	name.clear();
	id.clear();
	phoneNum.clear();
	jobTitle.clear();

	age    = 0;
	salary = 0;

	gender = ' ';

}

//destructor
employee::~employee() {}

//method for getting the name from the client and store it in name attribute
void employee::changeName(string empName)
{
	name = empName;
}

//method to get the name
string employee::getName()
{
	return name;
}

//methpod for getting the id from the client and store it in id attribute
void employee::changeId(string empId)
{
	id = empId;
}

//method for getting the phone number from the client and store it in
//the phoenNum attribute
void employee::changePhoneNumber(string number)
{
	phoneNum = number;
}

//method for getting the age from the client and store it in
//age attribute
void employee::changeAge(int empAge)
{
	age = empAge;
}
//method for getting the gender from the client and store it
//in gender attribute
void employee::changeGender(char sex)
{
	gender = sex;
}

//method for getting the job title from the client and store
//it in the jobTile attribute
void employee::changeJobTitle(string title)
{
	jobTitle = title;
}

//method for getting the salary from the client and store it
//in salary attribute
void employee::changeSalary(double income)
{
	salary = income;
}

//method for getting the hire date attributes and save the date
//into the attributes of day, month, and year
void employee::changeDate(int startDay, int startMonth, int startYear)
{
	day   = startDay;
	month = startMonth;
	year  = startYear;
}

//method for printing the attributes with the informations stored
//in them from the client to the screen
void employee::print()
{

	cout << left;
	cout << fixed <<setprecision(2);
	cout << setw(15)  << name      << setw(9) << id      << setw(16)
		 << phoneNum  << setw(8)   << age      << setw(7) << gender
		 << setw(15)  << jobTitle  << setw(15) <<salary << month << "/"
		 << day << "/" << year << endl;
}






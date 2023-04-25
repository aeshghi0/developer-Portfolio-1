/*******************************************************************************
 * PROGRAMMER : Ali Eshghi
 * STUDENT ID : 1112261
 * CLASS      : CS1C
 * SECTION    : MTWTH - 3pm
 * HW04		  : CS1C corporation
 * DUE DATE   : 29 January 2020
 ******************************************************************************/
#include"date.h"

#ifndef EMPLOYEECLASS_H
#define EMPLOYEECLASS_H

//forward declaration
class programmer;


//Class employee(derived from the class date):
//For storing information related to employee infromation for CS1C
class employee: private date
{
	//frined function that compares the employee and programmer phone number
	friend bool compareNums(const employee& emp, const employee& prg) ;

	//friend function that compares two employees' phone numbers
	friend bool operator==(employee& emp1, employee& emp2);

	//friend function that increments employee's age by 1
	friend int operator+(employee& emp, int age);

	//frind function that increments the employees age only by 2
	friend int operator+(const int add2, employee& emp);

	//overloads the extraction operator
	friend ostream& operator<<(ostream& tempS, const employee& emp);

	//overloads the incertion operatoer
	friend istream& operator>>(istream& tempS, employee& emp);

//public parts containing the method functions of the class
public:
	//default constructor
	employee();

	//non-default construcgtor
	employee(string initName, string initJob, string initNumber,
			 double initSalary, string initId, int initAge, char initSex);

	//destructor
	~employee(){ };

	//method function for changing the name
	void changeName(string empName);

	//method function that returns the name(Mutator)
	string getName();

	//method function for changing the Id
	void changeId(string empId);

	//method function for changing the phone number
	void changePhoneNumber(string Number);

	//method function for changing the age
	void changeAge(int empAge);

	//method function for changing the gender
	void changeGender(char sex);

	//method function for changing the job title
	void changeJobTitle(string title);

	//method function for changing the salary
	void changeSalary(double income);

	//method function for changing the hire date(DD/MM/YYYY)
	void changeDate(int startDay, int startMonth, int startYear);

	//method function for printing the attributes of the class
	void print();



//private attributes of the class (accessible by derived classes)
private:
	string 	name;		//PROCESS - storing the name
	string 	id;			//PROCESS - storing the id number
	string 	phoneNum;	//PROCESS - storing the phone number
	int		age;		//PROCESS - storing the age
	char	gender;		//PROCESS - storing the gender
	string	jobTitle;	//PROCESS - storing the job title
	double	salary;		//PROCESS - storing the salary
	date	startDate;	//PROCESS - storing the hire date
};


#endif

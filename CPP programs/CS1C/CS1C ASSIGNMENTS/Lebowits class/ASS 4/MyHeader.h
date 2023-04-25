/*******************************************************************************
 * PROGRAMMER : Ali Eshghi
 * STUDENT ID : 1112261
 * CLASS      : CS1C
 * SECTION    : MW 5pm
 * Assign #4  : Enhanced Employee
 * DUE DATE   : 26 Febuary 2020
 ******************************************************************************/
#ifndef MYHEADER_H_
#define MYHEADER_H_

//Preprocessor directives

#include<iostream> //for input and output
#include<iomanip>  //for output style
#include<string>   //for using string

//using the name space standard
using namespace std;


//class date: for defining the date
class date
{
//public parts containing the method functions of the class
public:

	//default constructor
	date();

	//destructor
	~date();

//protected attributes of the class (accessible by derived classes)
protected:
	int month;	//PROCESS - for storing month
	int day;	//PROCESS - for storing day
	int year;	//PROCESS - for storing year
};


//Class employee(derived from the class date):
//for setting and changing the attributes about the employees
class employee: protected date
{
//public parts containing the method functions of the class
public:
	//default constructor
	employee();


	//destructor
	~employee();

	//method function for setting the name
	void setName(string empName);

	string getName();

	//method function for setting the Id
	void setId(string empId);

	//method function for setting the phone number
	void setPhoneNumber(string Number);

	//method function for setting the age
	void setAge(int empAge);

	//method function for setting the gender
	void setGender(char sex);

	//method function for setting the job title
	void setJobTitle(string title);

	//method function for setting the salary
	void setSalary(double income);

	//method function for setting the hire date
	void setDate(int startDay, int startMonth, int startYear);

	//method function for printing the attributes of the class
	void print();

//protected attributes of the class (accessible by derived classes)
protected:
	string 	name;		//PROCESS - storing the name
	string 	id;			//PROCESS - storing the id number
	string 	phoneNum;	//PROCESS - storing the phone number
	int		age;		//PROCESS - storing the age
	char	gender;		//PROCESS - storing the gender
	string	jobTitle;	//PROCESS - storing the job title
	double	salary;		//PROCESS - storing the salary
	date	startDate;	//PROCESS - storing the hire date
};


//class softTester(derived from the class employee):
//for setting and changing the attributes about the programmer

class softTester: public employee
{

//public parts containing the method functions of the class
public:
	//default constructor
	softTester(string defAddress, string defCity, string defState, int defZipCode);

	//copy constructor
	softTester(const softTester &obj);

	//destructor
	~softTester();

	//Method for getting the address,
	//return type: String
	string getAddress(void);

	//Method for getting the City,
	//return type: String
	string getCity(void);

	//Method for getting the State,
	//return type: String
	string getState(void);

	//Method for getting the zip code,
	//return type: integer
	int getZipCode(void);

	//Method for changing the address attribute
	//of the class softTester
	void changeAddress(string newAddress);

	//Method for changing the city attribute
	//of the class softTester
	void changeCity(string newCity);

	//Method for changing the state attribute
	//of the class softTester
	void changeState(string newState);

	//Method for changing the zipCode attribute
	//of the class softTester
	void changeZipCode(int newZipCode);

	//Method for diplayong the attributes
	void softTesterDisplay();

//private part of the class; containing the attributes of the class
private:
	string* address;	//PROCESS - storing the department number
	string* city;		//PROCESS - storing the supervisor's name
	string*	state;		//PROCESS - storing the salary increase percentage
	int* 	zipCode;	//PROCESS - storing if the person knows c++
};




#endif /* MYHEADER_H_ */

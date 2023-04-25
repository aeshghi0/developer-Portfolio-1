
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
//For storing information related to employee infromation for CS1C
class employee: protected date
{
//public parts containing the method functions of the class
public:
	//default constructor
	employee();

	//non-default construcgtor
	employee(int n);

	//destructor
	~employee();

	//method function for changing the name
	void changeName(string empName);

	//method function to get the name
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

	//method function for changing the hire date
	void changeDate(int startDay, int startMonth, int startYear);

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

#endif /* MYHEADER_H_ */



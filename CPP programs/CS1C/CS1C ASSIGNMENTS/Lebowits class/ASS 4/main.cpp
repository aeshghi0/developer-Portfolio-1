/*******************************************************************************
 * PROGRAMMER : Ali Eshghi
 * STUDENT ID : 1112261
 * CLASS      : CS1C
 * SECTION    : MW 5pm
 * Assign #4  : Enhanced Employee
 * DUE DATE   : 26 Febuary 2020
 ******************************************************************************/

#include "MyHeader.h"

/************************************************************
 * CS1C Corporation
 * _________________________________________________________
 * This program prints out the data from the list of the
 * employee of the corporation using the classes method and
 * Inheritance of the classes and passing the data through
 * the method functions of the class
 * _________________________________________________________
 * INPUT: N/A
 *
 * OUTPUT: table of the employees with their information
 * 		   (Name, Id, Phone #, Age, Gender, Job title,
 * 		   Salary, Hire date) and then the programmers
 * 		   information, same as the employees (with the
 * 		   additional information of Department #,
 * 		   supervisor's name, Raise Increase %, C++
 * 		   knowledge, and Java knowledge) and the Software
 * 		   Architect with the same information but
 *
 ************************************************************/

int main()
{
	//Introduction

	cout << "/************************************************************" << endl;
    cout << "* CS1C Corporation" << endl;
	cout <<	"* _________________________________________________________" << endl;
    cout << "* This program prints out the data from the list of the" << endl;
    cout << "* employee of the corporation using the classes method and" << endl;
    cout << "* Inheritance of the classes and passing the data through" << endl;
    cout << "* the method functions of the class" << endl;
    cout << "* _________________________________________________________" << endl;
    cout << "* INPUT: N/A" << endl;
    cout << "*" << endl;
    cout << "* OUTPUT: table of the employees with their information" << endl;
    cout << "* 		   (Name, Id, Phone #, Age, Gender, Job title," << endl;
    cout << "* 		   Salary, Hire date) and then the programmers" << endl;
    cout << "* 		   information, same as the employees (with the" << endl;
    cout << "* 		   additional information of Department #," << endl;
    cout << "* 		   supervisor's name, Raise Increase %, C++" << endl;
    cout << "* 		   knowledge, and Java knowledge) and the Software" << endl;
    cout << "* 		   Architect with the same information but" << endl;
    cout << "*" << endl;
	cout << "************************************************************/" << endl;



	//Variables

	date		date;		//PROCESS - date class type variable
	employee 	employee;	//PROCESS - employee class type variable
	softTester	softTester1(" ", " ", " ", 0); //PROCESS - softTester
											   // class type variable
	softTester  softTester2 = softTester1;  //PROCESS - calling the copy constructor


	cout << "Software testers:" << endl << endl;

	cout << left;
	cout << setw(15)  << "Name"      << setw(9) << "ID"    << setw(15)
		 << "Phone #" << setw(7)     << "Age"    << setw(9) << "Gender"
		 << setw(15)  << "Job title" << setw(15) << "Salary"
		 << setw(15)  << "Hire date" << endl;
	cout << "-------------------------------------------------";
	cout <<	"-------------------------------------------------";
	cout << endl;


	//passing the employees information
	//to the methods to set the data

	employee.setName("Joe Calculus");
	employee.setId("64879");
	employee.setPhoneNumber("949-555-1234");
	employee.setAge(42);
	employee.setGender('M');
	employee.setJobTitle("Math Wiz");
	employee.setSalary(110000);
	employee.setDate(31,8,2017);

	//printing the information
	employee.print();

	//passing the employees information
	//to the methods to set the data

	employee.setName("Mary Algebra");
	employee.setId("76309");
	employee.setPhoneNumber("213-555-5555");
	employee.setAge(22);
	employee.setGender('F');
	employee.setJobTitle("Math Helper");
	employee.setSalary(170123);
	employee.setDate(8,5,2017);

	//printing the information
	employee.print();

	//passing the employees information
	//to the methods to set the data

	employee.setName("Joe Trig");
	employee.setId("10192");
	employee.setPhoneNumber("714-703-1234");
	employee.setAge(29);
	employee.setGender('F');
	employee.setJobTitle("Math Contact");
	employee.setSalary(200000);
	employee.setDate(25,12,2016);

	//printing the information
	employee.print();


	cout << endl << endl;
	cout << left;
	cout << setw(15)  << "Name"      << setw(23) << "Address"    << setw(15)
		 << "City" << setw(7)     << "State"    << setw(9) << "Zip Code"
		 << endl;
	cout << "-------------------------------------------------";
	cout <<	"-------------------------------------------------";
	cout << endl;

	//passing the software Tester information
	//to the employees methods to set the data

	softTester1.setName("Joe calCules");
	softTester1.changeAddress("1234 Main Avenue");
	softTester1.changeCity("Laguna Niguel");
	softTester1.changeState("CA");
	softTester1.changeZipCode(92677);

	//printing the employee informations of the software tester
	softTester1.softTesterDisplay();

	//passing the software Tester information
	//to the employees methods to set the data

	softTester1.setName("Mary Algebra");
	softTester1.changeAddress("3333 Marguerite Pkwy");
	softTester1.changeCity("Mission Viejo");
	softTester1.changeState("CA");
	softTester1.changeZipCode(92646);

	//printing the employee informations of the software tester
	softTester1.softTesterDisplay();

	//passing the software Tester information
	//to the employees methods to set the data

	softTester1.setName("jo Trig");
	softTester1.changeAddress("9876 Elm Street");
	softTester1.changeCity("San Clemente");
	softTester1.changeState("CA");
	softTester1.changeZipCode(92672);

	//printing the employee informations of the software tester
	softTester1.softTesterDisplay();

	//This also calls the copy constructor
	softTester2 = softTester1;

	return 0;
}


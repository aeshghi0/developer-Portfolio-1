/*******************************************************************************
 * PROGRAMMER : Ali Eshghi
 * STUDENT ID : 1112261
 * CLASS      : CS1C
 * SECTION    : MW 5pm
 * Assign #1  : CS1C corporation
 * DUE DATE   : 29 January 2020
 ******************************************************************************/

#include "employeeClass.h"
#include "programmerClass.h"
#include "softwareArchitectClass.h"


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
 *
 ************************************************************/

int main()
{
	//Variables

	date		date;			//PROCESS - date class type variable
	employee 	employee1;		//PROCESS - employee class type variable with defult constructor
	employee	employee2(1);   //PROCESS - employee class type variable with non-defult constructor
	programmer	programmer1; 	//PROCESS - programmer class type variable with defult constructor
	programmer	programmer2(1); //PROCESS - programmer class type variable with non-defult constructor	
	softArch	architect1;  	//PROCESS - softArch class type variable with defult constructor
	softArch	architect2(1);	//PROCESS - softArch class type variable with non-defult constructor



	int n = 0;


	cout << "Printing the client list Before the modification." << endl;
	cout << "Data:" << endl;
	cout << "CS1C Employees" << endl;

	cout << left;
	cout << setw(15)  << "Name"      << setw(9) << "ID"    << setw(15)
		 << "Phone #" << setw(7)     << "Age"    << setw(9) << "Gender"
		 << setw(15)  << "Job title" << setw(15) << "Salary"
		 << setw(15)  << "Hire date" << endl;
	cout << "-------------------------------------------------";
	cout <<	"-------------------------------------------------";
	cout << endl << endl << endl;

	//printing data members of class BEFORE
	employee1.print();
	programmer1.printProgrammer();
	architect1.printSoftArch();

	//calling the non-default constructor

	//printing AFTER
	cout << "Printing the client list After the modification." << endl;
	cout << "Data:" << endl;
	cout << "CS1C Employees" << endl;

	cout << left;
	cout << setw(15)  << "Name"      << setw(9) << "ID"    << setw(15)
		 << "Phone #" << setw(7)     << "Age"    << setw(9) << "Gender"
		 << setw(15)  << "Job title" << setw(15) << "Salary"
		 << setw(15)  << "Hire date" << endl;
	cout << "-------------------------------------------------";
	cout <<	"-------------------------------------------------";
	cout << endl << endl << endl;

	//passing the employees information
	//to the methods to change the data

	employee1.changeName("Jimmy Fallon");
	employee1.changeId("12345");
	employee1.changePhoneNumber("949-555-1234");
	employee1.changeAge(40);
	employee1.changeGender('M');
	employee1.changeJobTitle("Comedian");
	employee1.changeSalary(100000);
	employee1.changeDate(31,8,2014);

	//printing the information
	employee1.print();

	//passing the employee1s information
	//to the methods to change the data

	employee1.changeName("Stephan Colbert");
	employee1.changeId("12346");
	employee1.changePhoneNumber("310-555-5555");
	employee1.changeAge(51);
	employee1.changeGender('M');
	employee1.changeJobTitle("Comedian");
	employee1.changeSalary(70123);
	employee1.changeDate(8,5,2015);

	//printing the information
	employee1.print();

	//passing the employee1s information
	//to the methods to change the data

	employee1.changeName("Games Corden");
	employee1.changeId("87654");
	employee1.changePhoneNumber("703-703-1234");
	employee1.changeAge(37);
	employee1.changeGender('M');
	employee1.changeJobTitle("Talk show Host");
	employee1.changeSalary(900000);
	employee1.changeDate(25,12,2014);

	//printing the information
	employee1.print();

	//passing the employee1s information
	//to the methods to change the data

	employee1.changeName("Katir Couric");
	employee1.changeId("77777");
	employee1.changePhoneNumber("203-555-6789");
	employee1.changeAge(58);
	employee1.changeGender('F');
	employee1.changeJobTitle("News reporter");
	employee1.changeSalary(500500);
	employee1.changeDate(1,3,2005);

	//printing the information
	employee1.print();

	cout << endl << endl;


	cout << "Programmers:" << endl;

	//passing the programmers information
	//to the employees methods to change the data

	employee1.changeName("Sam Software");
	employee1.changeId("54321");
	employee1.changePhoneNumber("819-123-4567");
	employee1.changeAge(21);
	employee1.changeGender('M');
	employee1.changeJobTitle("Programmer");
	employee1.changeSalary(223000);
	employee1.changeDate(24,12,2011);

	//passing the programmers information
	//to the methods to change the data

	//calling the non-default constructor for programmer class

	programmer1.setDepartmentNum("5432122");
	programmer1.setSupName("Joe Boss");
	programmer1.setPercentage(4);
	programmer1.cppIdentifier(true);
	programmer1.javaIdentifier(false);

	cout << left;
	cout << setw(15)  << "Name"      << setw(9) << "ID"    << setw(15)
		 << "Phone #" << setw(7)     << "Age"    << setw(9) << "Gender"
		 << setw(15)  << "Job title" << setw(15) << "Salary"
		 << setw(15)  << "Hire date" << endl;
	cout << "-------------------------------------------------";
	cout <<	"-------------------------------------------------";
	cout << endl;

	//printing the employee informations of the programmer
	employee1.print();

	//passing the programmers information
	//to the employees methods to set the data

	employee1.changeName("Mary Coder");
	employee1.changeId("65432");
	employee1.changePhoneNumber("310-555-5555");
	employee1.changeAge(28);
	employee1.changeGender('F');
	employee1.changeJobTitle("Programmer");
	employee1.changeSalary(770123);
	employee1.changeDate(8,2,2010);

	//printing the employee1 informations of the programmer
	employee1.print();

	cout << endl << endl;

	cout << left;
	cout << setw(14)  << "Name"      << setw(14) << "Department"    << setw(22)
		 << "Supervisor's Name" << setw(12)     << "Raise %"    << setw(19) << "C++ Knowledge"
		 << "Java Knowledge" << endl;
	cout << "-------------------------------------------------";
	cout <<	"-------------------------------------------------";
	cout << endl;

	//printing programmers information
	employee1.changeName("Sam Software");
	programmer1.printProgrammer();

	//passing the programmers information
	//to the methods to set the data

	programmer1.setDepartmentNum("6543222");
	programmer1.setSupName("Mary Leader");
	programmer1.setPercentage(7);
	programmer1.cppIdentifier(true);
	programmer1.javaIdentifier(true);


	//printing programmers information
	employee1.changeName("Mary Coder");
	programmer1.printProgrammer();

	cout << endl << endl;


	cout << "Software Architects:" << endl;

	//passing the Software Architect information
	//to the employee1s methods to change the data

	employee1.changeName("Alex Arch");
	employee1.changeId("88888");
	employee1.changePhoneNumber("819-123-4444");
	employee1.changeAge(31);
	employee1.changeGender('M');
	employee1.changeJobTitle("Architect");
	employee1.changeSalary(323000);
	employee1.changeDate(24,12,2018);

	//passing the Software Architect information
	//to the methods to set the data

	architect1.setDepartmentNum("5434222");
	architect1.setSupName("Big Boss");
	architect1.setPercentage(5);
	architect1.setExperience(4);

	cout << left;
	cout << setw(15)  << "Name"      << setw(9) << "ID"    << setw(15)
		 << "Phone #" << setw(7)     << "Age"    << setw(9) << "Gender"
		 << setw(15)  << "Job title" << setw(15) << "Salary"
		 << setw(15)  << "Hire date" << endl;
	cout << "-------------------------------------------------";
	cout <<	"-------------------------------------------------";
	cout << endl;

	//printing the employee1 informations of the software Architect
	employee1.print();

	//passing the Software Architect information
	//to the employee1s methods to set the data

	employee1.changeName("Sally Designer");
	employee1.changeId("87878");
	employee1.changePhoneNumber("310-555-8888");
	employee1.changeAge(38);
	employee1.changeGender('F');
	employee1.changeJobTitle("Architect");
	employee1.changeSalary(870123);
	employee1.changeDate(8,2,2013);

	//printing the employee1 informations of the software Architect
	employee1.print();

	cout << endl << endl;

	cout << left;
	cout << setw(13)  << "Name"   << setw(15)    << "Department" << setw(22)
		 << "Supervisor's Name"   << setw(12)     << "Raise %"
		 << "Years of experience" << endl;
	cout << "-------------------------------------------------";
	cout <<	"-------------------------------------------------";
	cout << endl;

	//printing programmers information
	employee1.changeName("Alex Arch");
	architect1.printSoftArch();

	//passing the Software Architect information
	//to the methods to set the data

	architect1.setDepartmentNum("6543422");
	architect1.setSupName("Big Boss");
	architect1.setPercentage(8);
	architect1.setExperience(11);

	//printing programmers information
	employee1.changeName("Sally Designer");
	architect1.printSoftArch();




	return 0;
}




/*******************************************************************************
 * PROGRAMMER : Ali Eshghi
 * STUDENT ID : 1112261
 * CLASS      : CS1C
 * SECTION    : MW 5pm
 * Assign #1  : CS1C corporation
 * DUE DATE   : 29 January 2020
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
 *
 ************************************************************/

int main()
{
	//Variables

	date		date;		//PROCESS - date class type variable
	employee 	employee;	//PROCESS - employee class type variable
	programmer	programmer; //PROCESS - programmer class type variable
	softArch	architect;  //PROCESS - softArch class type variable



	cout << "Data:" << endl;
	cout << "CS1C Employees" << endl;

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

	employee.setName("Tom Brady");
	employee.setId("12345");
	employee.setPhoneNumber("949-555-1234");
	employee.setAge(42);
	employee.setGender('M');
	employee.setJobTitle("Quarterback");
	employee.setSalary(8000000);
	employee.setDate(31,8,2018);

	//printing the information
	employee.print();

	//passing the employees information
	//to the methods to set the data

	employee.setName("Aaron Rodgers");
	employee.setId("12346");
	employee.setPhoneNumber("310-555-5555");
	employee.setAge(36);
	employee.setGender('M');
	employee.setJobTitle("Quarterback");
	employee.setSalary(770123);
	employee.setDate(8,5,2019);

	//printing the information
	employee.print();

	//passing the employees information
	//to the methods to set the data

	employee.setName("Oprah Winfrey");
	employee.setId("98765");
	employee.setPhoneNumber("703-703-1234");
	employee.setAge(64);
	employee.setGender('F');
	employee.setJobTitle("Talk show Host");
	employee.setSalary(9900000);
	employee.setDate(25,12,2017);

	//printing the information
	employee.print();

	//passing the employees information
	//to the methods to set the data

	employee.setName("Jay Leno");
	employee.setId("77777");
	employee.setPhoneNumber("203-555-6789");
	employee.setAge(69);
	employee.setGender('M');
	employee.setJobTitle("Comedian");
	employee.setSalary(500500);
	employee.setDate(1,3,2012);

	//printing the information
	employee.print();

	cout << endl << endl;


	cout << "Programmers:" << endl;

	//passing the programmers information
	//to the employees methods to set the data

	employee.setName("Sam Software");
	employee.setId("54321");
	employee.setPhoneNumber("819-123-4567");
	employee.setAge(21);
	employee.setGender('M');
	employee.setJobTitle("Programmer");
	employee.setSalary(223000);
	employee.setDate(24,12,2017);

	//passing the programmers information
	//to the methods to set the data

	programmer.setDepartmentNum("5432122");
	programmer.setSupName("Joe Boss");
	programmer.setPercentage(4);
	programmer.cppIdentifier(true);
	programmer.javaIdentifier(false);

	cout << left;
	cout << setw(15)  << "Name"      << setw(9) << "ID"    << setw(15)
		 << "Phone #" << setw(7)     << "Age"    << setw(9) << "Gender"
		 << setw(15)  << "Job title" << setw(15) << "Salary"
		 << setw(15)  << "Hire date" << endl;
	cout << "-------------------------------------------------";
	cout <<	"-------------------------------------------------";
	cout << endl;

	//printing the employee informations of the programmer
	employee.print();

	//passing the programmers information
	//to the employees methods to set the data

	employee.setName("Mary Coder");
	employee.setId("65432");
	employee.setPhoneNumber("310-555-5555");
	employee.setAge(28);
	employee.setGender('F');
	employee.setJobTitle("Programmer");
	employee.setSalary(770123);
	employee.setDate(8,2,2019);

	//printing the employee informations of the programmer
	employee.print();

	cout << endl << endl;

	cout << left;
	cout << setw(14)  << "Name"      << setw(14) << "Department"    << setw(22)
		 << "Supervisor's Name" << setw(12)     << "Raise %"    << setw(19) << "C++ Knowledge"
		 << "Java Knowledge" << endl;
	cout << "-------------------------------------------------";
	cout <<	"-------------------------------------------------";
	cout << endl;

	//printing programmers information
	employee.setName("Sam Software");
	programmer.printProgrammer();

	//passing the programmers information
	//to the methods to set the data

	programmer.setDepartmentNum("6543222");
	programmer.setSupName("Mary Leader");
	programmer.setPercentage(7);
	programmer.cppIdentifier(true);
	programmer.javaIdentifier(true);


	//printing programmers information
	employee.setName("Mary Coder");
	programmer.printProgrammer();

	cout << endl << endl;


	cout << "Software Architects:" << endl;

	//passing the Software Architect information
	//to the employees methods to set the data

	employee.setName("Alex Arch");
	employee.setId("88888");
	employee.setPhoneNumber("819-123-4444");
	employee.setAge(31);
	employee.setGender('M');
	employee.setJobTitle("Architect");
	employee.setSalary(323000);
	employee.setDate(24,12,2018);

	//passing the Software Architect information
	//to the methods to set the data

	architect.setDepartmentNum("5434222");
	architect.setSupName("Big Boss");
	architect.setPercentage(5);
	architect.setExperience(4);

	cout << left;
	cout << setw(15)  << "Name"      << setw(9) << "ID"    << setw(15)
		 << "Phone #" << setw(7)     << "Age"    << setw(9) << "Gender"
		 << setw(15)  << "Job title" << setw(15) << "Salary"
		 << setw(15)  << "Hire date" << endl;
	cout << "-------------------------------------------------";
	cout <<	"-------------------------------------------------";
	cout << endl;

	//printing the employee informations of the software Architect
	employee.print();

	//passing the Software Architect information
	//to the employees methods to set the data

	employee.setName("Sally Designer");
	employee.setId("87878");
	employee.setPhoneNumber("310-555-8888");
	employee.setAge(38);
	employee.setGender('F');
	employee.setJobTitle("Architect");
	employee.setSalary(870123);
	employee.setDate(8,2,2013);

	//printing the employee informations of the software Architect
	employee.print();

	cout << endl << endl;

	cout << left;
	cout << setw(13)  << "Name"   << setw(15)    << "Department" << setw(22)
		 << "Supervisor's Name"   << setw(12)     << "Raise %"
		 << "Years of experience" << endl;
	cout << "-------------------------------------------------";
	cout <<	"-------------------------------------------------";
	cout << endl;

	//printing programmers information
	employee.setName("Alex Arch");
	architect.printSoftArch();

	//passing the Software Architect information
	//to the methods to set the data

	architect.setDepartmentNum("6543422");
	architect.setSupName("Big Boss");
	architect.setPercentage(8);
	architect.setExperience(11);

	//printing programmers information
	employee.setName("Sally Designer");
	architect.printSoftArch();




	return 0;
}




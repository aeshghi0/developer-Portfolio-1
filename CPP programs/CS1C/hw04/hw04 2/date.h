/*******************************************************************************
 * PROGRAMMER : Ali Eshghi
 * STUDENT ID : 1112261
 * CLASS      : CS1C
 * SECTION    : MTWTH - 3pm
 * HW04		  : CS1C corporation
 * DUE DATE   : 29 January 2020
 ******************************************************************************/

#ifndef DATE_H
#define DATE_H

//Preprocessor directives
#include<iostream>			//for input and output
#include<iomanip>  			//for output style
#include<string>   			//for using string

using namespace std;		//using the name space standard


//class date: for defining the date
class date
{
//public parts containing the method functions of the class
public:

	//default constructor
	date();

    date(int initDay, int initMonth, int initYear);

    void changeDate(int d, int m, int y);

    void printDate();

	//destructor
	~date();

//private attributes of the class (accessible by derived classes)
private:
	int month;	//PROCESS - for storing month
	int day;	//PROCESS - for storing day
	int year;	//PROCESS - for storing year
};


#endif
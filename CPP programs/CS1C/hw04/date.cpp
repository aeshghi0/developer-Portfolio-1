/*******************************************************************************
 * PROGRAMMER : Ali Eshghi
 * STUDENT ID : 1112261
 * CLASS      : CS1C
 * SECTION    : MTWTH - 3pm
 * HW04		  : CS1C corporation
 * DUE DATE   : 29 January 2020
 ******************************************************************************/

#include "date.h"

/*******************************************************************************
 * Methods for class date
 *******************************************************************************/


//Default constructor
date::date():
    month(0), day(0), year(0){}

//Non-default constructor(initializing the variables)
date::date(int initDay,int initMonth,int initYear):
    month(initMonth), day(initDay), year(initYear){}


//destruactor
date::~date() {}

//function that changes the date attributes
void date::changeDate(int d, int m, int y)
{
    day = d;
    month = m;
    year = y;
}

//fucntion to print the attributes of date
void date::printDate()
{
    cout << day << "/" << month << "/" << year;
}

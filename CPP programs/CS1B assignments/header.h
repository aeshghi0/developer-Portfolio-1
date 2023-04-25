
#ifndef HEADER_H_
#define HEADER_H_

//PPD

#include<iostream>
#include<iomanip>
#include<string>
#include<fstream>
#include<limits>
#include<ios>
#include<sstream>
using namespace std;

//ENUM - STRUCTS

enum MenuOption
{
	EXIT,
	DISPLAY,
	TITLE,
	GENRE,
	ACTOR,
	YEAR,
	RATE
};

struct MovieList
{
	string		title;
	string		leadActor;
	string		supportActor;
	string		genre;
	string		altGenre;
	string		synopsis;

	int			year;
	int			rate;

	MovieList  *next;
	MovieList  *prev;
};

//FUNCTIONS

/******************************************************************************
 * Function - PrintHeader
 * ----------------------------------------------------------------------------
 * This function will output the class heading into the console and output file.
 * ----------------------------------------------------------------------------
 * return type - void
 ******************************************************************************/

void PrintHeader (string     asName,             // In - assignment Name
				  int        asNum);             // In - assignment number


/******************************************************************************
 * Function - PrintMenu
 * ----------------------------------------------------------------------------
 * This function will output menu to the console, also it will check the user
 *  input for range, and its type.
 * ----------------------------------------------------------------------------
 * return type - int
 ******************************************************************************/

int PrintMenu();


/******************************************************************************
 * Function - InputData
 * ----------------------------------------------------------------------------
 * This function will input the data from the input file and input it into the
 *  movie list.
 * ----------------------------------------------------------------------------
 * return type - void
 ******************************************************************************/

void InputData(MovieList *&head);


/******************************************************************************
 * Function - DisplayData
 * ----------------------------------------------------------------------------
 * This function will output the content of each node in the list into the
 *  output file.
 * ----------------------------------------------------------------------------
 * return type - void
 ******************************************************************************/

void DisplayData(MovieList *head, ofstream &oFile);


/******************************************************************************
 * Function - SearchTitle
 * ----------------------------------------------------------------------------
 * This function will get the target title from user, and search for it through
 *  the MovieList. If found output the info, else it will output the false
 *  message.
 * ----------------------------------------------------------------------------
 * return type - void
 ******************************************************************************/

void SearchTitle(MovieList *head, ofstream &oFile);


/******************************************************************************
 * Function - SearchGenre
 * ----------------------------------------------------------------------------
 * This function will get the target genre from user, and search for it through
 *  the MovieList. If found output the info, else it will output the false
 *  message.
 * ----------------------------------------------------------------------------
 * return type - void
 ******************************************************************************/

void SearchGenre(MovieList *head, ofstream &oFile);


/******************************************************************************
 * Function - SearchActor
 * ----------------------------------------------------------------------------
 * This function will get the target genre from user, and search for it through
 *  the MovieList. If found output the info, else it will output the false
 *  message.
 * ----------------------------------------------------------------------------
 * return type - void
 ******************************************************************************/

void SearchActor(MovieList *head, ofstream &oFile);


/******************************************************************************
 * Function - SearchYear
 * ----------------------------------------------------------------------------
 * This function will get the target year from user, and search for it through
 *  the MovieList. If found output the info, else it will output the false
 *  message.
 * ----------------------------------------------------------------------------
 * return type - void
 ******************************************************************************/

void SearchYear(MovieList *head, ofstream &oFile);


/******************************************************************************
 * Function - SearchRate
 * ----------------------------------------------------------------------------
 * This function will get the target rate from user, and search for it through
 *  the MovieList. If found output the info, else it will output the false
 *  message.
 * ----------------------------------------------------------------------------
 * return type - void
 ******************************************************************************/

void SearchRate(MovieList *head, ofstream &oFile);


#endif /* HEADER_H_ */

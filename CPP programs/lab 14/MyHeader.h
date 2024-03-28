/*******************************************************************************
 * PROGRAMMER : Ali Eshghi & Julian Lasting
 * STUDENT ID : 1112261 & 1097778
 * CLASS      : CS1B
 * SECTION    : MW 7:30pm
 * LAB 14	  : Farmer's Pete livestock(inheritence class)
 * DUE DATE   : 13 December 2019
 ******************************************************************************/

#ifndef MYHEADER_H_
#define MYHEADER_H_

#include<iostream>
#include<iomanip>
#include<string>
#include<fstream>
#include<limits>
#include<sstream>
#include "ClassHeader.h"
using namespace std;


enum Menu
{
	InitAnimal,
	InitSheep,
	InitPig,
	ChangeAge,
	Display,
	Exit
};


/********************************************************
* CONSTANTS
* ----------------------------------------------------
* USED FOR CLASS HEADING – ALL WILL BE OUTPUT
* ----------------------------------------------------
* Type	   : Program Type
* LAB_NUM  : Lab Number (specific to this lab)
* LAB_NAME : Title of the Lab
*********************************************************/

const string NAME = "LAB 13 - Using inheritence classes";
const char   TYPE    = 'L';
const int    NUM     = 14 ;
const string CLASS   = "CS1B";
const string SECTION = "MW: 7:30p - 9:50p";

/************************************************************
 * Function - PrintHeaderFile
 * ----------------------------------------------------------
 * This function will output the class heading to the screen.
 *
 * return type - nothing
 * 				 the function is void type
 ************************************************************/
void PrintHeader();

/*******************************************************************************
 * FirstMenu
 *    This function gets the user choice for the first menu that has been run
 *
 *    RETURNS: integer
 ******************************************************************************/
Menu FirstMenu();

/*******************************************************************************
 * Menu
 * 		This function will outputs the menu and prompts the user
 * 		to choose an option from the menu
 *
 * 		RETURN - integer
 * 				 the function is int type
 ******************************************************************************/
int MainMenu();

/*******************************************************************************
 * InitializeSheep
 *    This function gets the data from the input file for sheeps and then
 *    initializes the parrallel arrays with the information of sheeps
 *
 *
 *    RETURNS: nothing
 *    		   void type function
 ******************************************************************************/
void InitializeSheep(Animal &animal, Sheep &sheep);

/*******************************************************************************
 * InitializeSheep
 *    This function gets the data from the input file for pigs and then
 *    initializes the parrallel arrays with the information of pigs
 *
 *
 *    RETURNS: nothing
 *    		   void type function
 ******************************************************************************/
void InitializePig(Animal &animal, Pig &pig);

#endif /* MYHEADER_H_ */
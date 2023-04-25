/*******************************************************************************
 * PROGRAMMER : Ali Eshghi & Julian Lasting
 * STUDENT ID : 1112261 & 1097778
 * CLASS      : CS1B
 * SECTION    : MW 7:30pm
 * LAB 14	  : Farmer's Pete livestock(inheritence class)
 * DUE DATE   : 13 December 2019
 ******************************************************************************/

#ifndef CLASSHEADER_H_
#define CLASSHEADER_H_

#include<iostream>
#include<iomanip>
#include<string>
#include<fstream>
#include<limits>
#include<sstream>
using namespace std;

const int AR_SIZE = 3;



enum WoolType
{
	LONG,
	MEDIUM,
	FINE,
	CARPET
};


enum TailType
{
	STRAIGHT,
	CORKSCREW,
	CURL_UP,
	CURL_RIGHT,
	CURL_LEFT
};





class Animal
{
	//public part of the class that is available for outside of the class
	public:
		//constructor
		Animal();

		//destructor
		~Animal();

		//Method for adding a new animal's name.
		void GetName(string name);

		//Method for adding a new animal's age.
		void GetAge(string age);

		//method for changing the age
		void changeAge();

		//method for changing the name
		void changeName();

		//method(overload)for changing the name and age
		void changeAgeName();

		//method that returns the animal's name
		string setName() const;

		//method that returns the animal's age
		int setAge() const;

		//method  for outputting the objects
		void Display() const;

		//method to get the list size of the animals in the list
		int GetAnimalCount() const;



	//private part only available for this class(in this case the attributes
	//											can be used in derived classes)
	private:
		string 	nameAr[AR_SIZE];
		string  ageAr[AR_SIZE];
		int	   	animalCount;
};


class Sheep: public Animal	//derived class
{
	//public part of the class that is available for outside of the class
	public:
		//constructor
		Sheep();

		//decosntructor
		~Sheep();

		//method to get the name of the sheep from the file and put in array
		void SetSheepName(string name);

		//method to get the age of the sheep from the file and put in array
		void SetSheepAge(string age);

		//method to set the wool type
		void SetWool(WoolType wool);

		//method to set the wool color
		void SetWoolColor(string color);

		//method to change the age for the sheeps
		void ChangeSheepAge(string name);

		//method to show the header for the diplay
		void DisplayHeaderSheep() const;

		//method to display the sheep
		void DisplaySheep();

		//method to get the wool type
		WoolType GetWool() const;

		//method that returns the size of the list of the sheeps
		int GetSheepCount() const;


	//private part only available for this class(in this case the attributes
	//											can be used in derived classes)
	private:
		string 		nameAr[AR_SIZE] = {" "};
		string    	ageAr[AR_SIZE] = {" "};
		WoolType	woolAr[AR_SIZE] = {LONG};
		string		colorAr[AR_SIZE] = {" "};
		int	   		sheepCount;


};




class Pig: public Animal
{
	//public part of the class that is available for outside of the class
	public:
		//constructor
		Pig();

		//decosntructor
		~Pig();

		//method to get the name of the pig from the file and put it in array
		void SetPigName(string name);

		//method to get the age of the pig from the file and put it in array
		void SetPigAge(string age);

		//method to set the tail Type
		void SetTail(TailType tail);

		//method to show header for the display
		void DisplayHeaderPig() const;

		//method to display pig
		void DisplayPig() const;

		//method to get the tail type
		TailType GetTail() const;

		//method to change the age for pig
		void ChangePigAge(string name);

		//method that returns the size of the list of the sheeps
		int GetPigCount() const;

		//method for finding the Pig in the list
		void FindPig(string) const;


	//private part only available for the class
	private:
		string 		nameAr[AR_SIZE] = {"p"};
		string  	ageAr[AR_SIZE] = {"0"};
		TailType 	tailAr[AR_SIZE] = {STRAIGHT};
		int	    	pigCount;


};



#endif /* CLASSHEADER_H_ */

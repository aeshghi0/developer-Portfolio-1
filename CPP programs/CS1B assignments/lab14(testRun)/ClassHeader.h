/************************************************************
* AUTHOR	    : Ali Eshghi
* STUDENT ID    : 1112261
* LAB #13		: LAB 13 - ARRAYS AND LINKED LIST (OOP)
* CLASS	        : CS 1B
* SECTION	    : MW - 7:30 pm - 9:50 pm
* DUE DATE	    : 12/3/2019
*************************************************************/

#ifndef CLASSHEADER_H_
#define CLASSHEADER_H_

#include<iostream> // Used for cin and cout
#include<iomanip>  // Used for formatting with setw and set-precision
#include<string>   // Used for strings
#include<fstream>  // Used for files
#include<limits>   // Used for numeric_limits, which determines max size of
				   // input buffer
#include<ios>     // Used for stream-size, which represents size of
				  // I/O buffer
#include<sstream> // Used for ostringstream
using namespace std;

const int AR_SIZE = 50; 	// Used for array size


// Enum Used for sheep's wool

enum WoolType
{
	LONG,
	MEDIUM,
	FINE,
	CARPET
};

// Enum Used for pig's tail

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
		void GetAge(int age);

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
		string 	nameAr[AR_SIZE];		// OUT - animal names
		int    	ageAr[AR_SIZE]; 		// OUT - animal ages
		int	   	animalCount;			// CALC - animal counter
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
		void SetSheepAge(int age);

		//method to set the wool type
		void SetWool(WoolType wool);

		//method to set the wool color
		void SetWoolColor(string color);

		//method to change the age for the sheeps
		void ChangeSheepAge(string name);

		//method to show the header for the diplay
		void DisplayHeaderSheep() const;

		//method to display the sheep
		void DisplaySheep() const;

		//method to get the wool type
		WoolType GetWool() const;

		//method that returns the size of the list of the sheeps
		int GetSheepCount() const;


	//private part only available for this class(in this case the attributes
	//											can be used in derived classes)
	private:
		string 		nameAr[AR_SIZE]; 	// OUT - sheep names
		int    		ageAr[AR_SIZE]; 	// OUT - sheep ages
		WoolType	woolAr[AR_SIZE];	// OUT - wool-type for sheep
		string		colorAr[AR_SIZE]; 	// OUT - wool color for sheep
		int	   		sheepCount; 		// CALC - sheep counter

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
		void SetPigAge(int age);

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

		//method that returns the size of the list of the sheep's
		int GetPigCount() const;

		//method for finding the Pig in the list
		void FindPig(string) const;


	//private part only available for the class
	private:
		string 		nameAr[AR_SIZE]; 	// OUT - pig names
		int    		ageAr[AR_SIZE];		// OUT - pig ages
		TailType 	tailAr[AR_SIZE];    // OUT - pig tails
		int	    	pigCount; 			// CALC - pig counter


};


/******* The Sample class****************************************
 *
 *
const int AR_SIZE = 50;


class Animal
{
	//public part of the class that is available for outside of the class
	public:
		//constructor
		Animal();

		//decosntructor
		~Animal();

		//method for adding a new sheep and its age to parallel arrays
		void AddSheep(string name, int age);

		//method for adding a new sheep to a linked list
		void AddSheepLinkedList(string name, int age);

		//method for showing the first sheep from the list
		void DisplayFirstSheep();

		//method that returns the size of the list of the sheeps
		int ListSize() const;

		//method  for outputting the objects
		void Display() const;

		//method for finding the sheep in the list
		void FindSheep(string) const;


	//private part only available for the class
	private:
		string nameAr[AR_SIZE];
		int    ageAr[AR_SIZE];
		string name;
		int    age;
		int	   listSize;

		struct SheepNode
		{
			string	   sheepName;
			int		   sheepAge;
			SheepNode  *next;
		};
		SheepNode *head;

};

 *
 *
 ******************************************************************/





#endif /* CLASSHEADER_H_ */

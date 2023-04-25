/************************************************************
* AUTHOR		 : Amirarsalan Valipour
* STUDENT ID 	 : 1103126
* Assignment #5	 : DVD Movie ListIntro to OOP
* CLASS		     : CS 1B
* SECTION	     : MW - 7:30 pm - 9:50 pm
* DUE DATE	     : 12/16/2019
*************************************************************/

#include "MovieList.h"

				/********************************
				 *   CONSTRUCTOR / DESTRUCTOR   *
				 ********************************/

/****************************************************************
 * MovieList ();
 * Constructor; Initialize class attributes
 * Parameters: none
 * Return: none
 ****************************************************************/

MovieList :: MovieList()
{

}


/****************************************************************
 * ~MovieList ();
 * Destructor; does not perform any specific function
 * Parameters: none
 * Return: none
 ****************************************************************/

MovieList :: ~MovieList()
{

}


						/******************
						 *    MUTATORS    *
						 ******************/

/********************************************************************
 * void CreateList (string inputFileName);
 *
 * Mutator; This method will create a movie list using the input file
 * 			 data
 * ------------------------------------------------------------------
 * Parameter: inFileName (string)
 * ------------------------------------------------------------------
 * Return: none
 ********************************************************************/

void MovieList :: CreateList(string iFileName)
{
	ifstream inFile;	//CALC & OUT - OSTREAM FOR INPUT FILE

	DVDNode inputPtr;	//CALC - POINTER FOR EACH INPUT VARIABLE


	//CHECKS FOR DEFAULT FILE NAME

	if(iFileName == "d")
	{
		inFile.open("InputFile.txt");
	}

	else
	{
		inFile.open(iFileName);
    }


	//INPUT LINE BY LINE

	while(inFile)
	{
		getline(inFile, inputPtr.title);

		getline(inFile, inputPtr.leadingActor);

		getline(inFile, inputPtr.supportingActor);

		getline(inFile, inputPtr.genre);

		getline(inFile, inputPtr.alternateGenre);

		inFile >> inputPtr.year;

		inFile >> inputPtr.rating;

		inFile.ignore(1000, '\n');

		getline(inFile, inputPtr.synopsis);

		inFile.ignore(1000, '\n');

		StackList :: Push(inputPtr);
    }

	//CLOSE FILE

	inFile.close();
}


						/*******************
						 *    ACCESSORS    *
						 *******************/

/*****************************************************************
 * void OutputList (string oFileName) const;
 *
 * Accessor; This method will output the list into the output file
 * ---------------------------------------------------------------
 * Parameters: oFileName (string)
 * ---------------------------------------------------------------
 * Return: none
 *****************************************************************/

void MovieList :: OutputList(string oFileName) const
{
	ofstream oFile;			//CALC & OUT - OSTREAM FOR OUTPUT FILE
	int 	 i;				//CALC       - LCV
	string 	 outPlot;		//CALC & OUT - ADJUSTED PLOT
	DVDNode  *mvPtr;		//CALC       _ POMITER FOR OUTPUT


	//CHECKS FOR DEFAULT FILE NAME

	if (oFileName == "d")
	{
		oFile.open("OutputFile.txt");
	}

	else
	{
		oFile.open(oFileName);
	}


	//INITIALIZING

	i = 0;

	mvPtr = NULL;

	mvPtr = head;


	//OUTPUT HEADER

	PrintHeader(oFile, "DVD Movie ListIntro to OOP", 5, 'A');


	//PROCESSING

	while(mvPtr != NULL)
	{
	    i++;

	    //ADJUST AND ALTER EACH OUTPUT

	    mvPtr -> title = StringAdj(mvPtr -> title, 47);

	    mvPtr -> genre = StringAdj(mvPtr -> genre, 25);

	    mvPtr -> alternateGenre =
	    		  StringAdj(mvPtr -> alternateGenre, 25);

	    mvPtr -> leadingActor =
	    		  StringAdj(mvPtr -> leadingActor, 17);

	    mvPtr -> supportingActor=
	    		  StringAdj(mvPtr -> supportingActor,17);


	    //OUTPUT INTO THE FILE

	    oFile << left;

	    oFile << "*************************************"
	    		 "**************************************\n";

	    oFile << "MOVIE #: " << setw(9) << i
	    	  << "Title: " << mvPtr -> title << endl;

	    oFile << "-------------------------------------"
	    		 "--------------------------------------\n";

	    oFile << "Year: " << setw(12) << mvPtr -> year
	    	  << "Rating: " << mvPtr -> rating << endl;

	    oFile << "-------------------------------------"
	    		 "-----------------------------------\n";

	    oFile << setw(18) << "Leading actor: " << setw(26)
	    	  << mvPtr -> leadingActor << "Genre 1: " << mvPtr -> genre << endl;

	    oFile << setw(18) << "Supporting actor: " << setw(26)
	    	  << mvPtr -> supportingActor << "Genre 2: "
			  << mvPtr -> alternateGenre << endl;

	    oFile << "--------------------------------------"
	    		 "-------------------------------------\n";

	    oFile << "PLOT:" << endl;

	    outPlot = WordAdj(mvPtr -> synopsis);

	    oFile << outPlot;

	    oFile << "**************************************"
	    		 "*************************************\n";

	    oFile << endl << endl;

	    oFile << right;

	    mvPtr = mvPtr -> next;

	}

	//CLOSE OUTPUT FILE

	oFile.close();

}


/****************************************************************
* string WordAdj (string plot) const;
*
* Accessor; This method adjusts the string and the size of the words
* --------------------------------------------------------------
* Parameters: plot (string)
* --------------------------------------------------------------
* Return: returnStr (string)
*****************************************************************/

string MovieList :: WordAdj (string plot) const
{
	int i;						//CALC - LCV

	int size;					//CALC - LCV

	const int maxLength = 75;	//CALC - LCV

	string alteredStr;			//CALC & OUT - ALTERED STRING
	string tempLine;			//CALC - TEMPORARY LINE
	string tempWord;			//CALC - TEMPORARY WORD


	//INITIALIZING

	size = plot.length();

	alteredStr = "";

	tempLine = "";

	tempWord = "";


	//PROCESSING

	for (i = 0; i < size; i++)
	{
		if (plot[i] != ' ')
		{
			tempWord = tempWord + plot[i];
		}

		else
		{
			if (tempLine.length() + tempWord.length() > maxLength)
			{
				alteredStr = alteredStr + tempLine + '\n';

				tempLine.clear();
			}

			tempLine = tempLine + tempWord + " ";

			tempWord.clear();
		}

	}

	if(tempLine != "")
	{
		alteredStr = alteredStr + tempLine + tempWord + '\n';
	}

	return alteredStr;
}


/**************************************************************
 * FUNCTION PrintHeader
 *_________________________________________________________
 * This function receives an assignment name, type
 *   and number then outFiles the appropriate header -
 *   returns nothing.
 *_________________________________________________________
 * PRE-CONDITIONS
 *
 * 		outFile: Ostream variable
 * 		asName : Assignment Name has to be previously defined
 * 		asType : Assignment Type has to be previously defined
 * 		asNum  : Assignment Number has to be previously defined
 *
 * POST-CONDITIONS
 *
 *      This function will output the class heading.
 **************************************************************/

void MovieList :: PrintHeader(ostream &outFile,
							  string  asName,
							  int     asNum,
							  char    asType) const
{
	const int  PROMPT = 14;

	const char PROGRAMMER[25] = "Amirarsalan Valipour";
	const char CLASS[5]		  = "CS1B";
	const char SECTION[25]	  = "MW: 7:30p - 9:50p";

	outFile << left;
	outFile << endl;
	outFile << "********************************************************";
	outFile << "\n* PROGRAMMED BY : " << PROGRAMMER;
	outFile << "\n* " << setw(PROMPT) << "CLASS"   << ": " << CLASS;
	outFile << "\n* " << setw(PROMPT) << "SECTION" << ": " << SECTION;
	outFile << "\n* ";

	if (toupper(asType) == 'L')
	{
		outFile << "LAB #" << setw(8);
	}

	else
	{
		outFile << "ASSIGNMENT #" << setw(1);
	}

	outFile << asNum << " : " << asName;
	outFile << "\n******************************************************";
	outFile << "**\n\n";
	outFile << right;

}


/******************************************************************************
 * FUNCTION StringAdj
 * ----------------------------------------------------------------------------
 * This function will setup the length for the movie plot.
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS
 *
 * 		 string prompt : original string
 * 		 int maxLength : maximum length
 *
 * POST-CONDITIONS
 *
 * 		Returns new adjusted string to fit the length
 ******************************************************************************/

string MovieList :: StringAdj(string plot,int maxLength) const
{
	int i;				//CALC - LCV

	string plotStr;		//CALC & OUT - ADJUSTED STRING

	bool maxed;			//CALC - LCV

	i = 0;

	//INITIALIZE

	plotStr = "";

	maxed = false;

	//PROCESSING

	while (((unsigned) i < plot.length()) && !maxed)
	{
		if (plotStr.length() <= (unsigned) maxLength)
		{
			plotStr = plotStr + plot[i];
		}

		else
		{
				maxed = true;
				plotStr = plotStr.substr(0, maxLength - 3) + "...";
		}

		i++;
	}

	//RETURN

	return plotStr;
}


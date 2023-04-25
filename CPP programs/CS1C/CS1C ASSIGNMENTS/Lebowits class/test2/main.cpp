#include<iostream>
#include<string>
using namespace std;

class MovieStar
{
public:
	MovieStar();
	MovieStar(string MovieStarName, int MovieStarAge);
	MovieStar(const MovieStar& anotherMovieStar);
	~MovieStar();
	void print();
	void changeAge(int newAge);

private:
	string nameOfMovieStar;
	int ageOfMovieStar;
};

MovieStar::MovieStar()
{
	cout << "Default constructor is called" << endl;
	nameOfMovieStar = "Brad Pitt";
	ageOfMovieStar = 65;
}

MovieStar::MovieStar(string MovieStarName, int MovieStarAge)
{
	cout << "2-argument constructor is called" << endl;
	nameOfMovieStar = MovieStarName;
	ageOfMovieStar = MovieStarAge;
}

MovieStar::MovieStar(const MovieStar& anotherMovieStar)
{
	cout << "Copy constructor is called" << endl;
	nameOfMovieStar = anotherMovieStar.nameOfMovieStar;
	ageOfMovieStar = anotherMovieStar.ageOfMovieStar;
}

MovieStar::~MovieStar()
{
	cout << "Destructor is called" << endl;
}

void MovieStar::print()
{
	cout << "name of Movie Star is " << nameOfMovieStar << endl;
	cout << "Age of Movie Star is " << ageOfMovieStar << endl;
}

void MovieStar::changeAge(int newAge)
{
	cout << "Change age is called" << endl;
	ageOfMovieStar = ageOfMovieStar + newAge;
}

MovieStar firstFunction(MovieStar &anotherMovieStar1);
void secondFunction(MovieStar anotherMovieStar);


int main(void)
{
	cout << "Part a" << endl;
	MovieStar MaleMovieStar;
	MaleMovieStar.print();


	cout << "part b" << endl;
	MovieStar FemaleMovieStar("Renee Zellweger",50);
	FemaleMovieStar.print();


	cout << "part c" << endl;
	MovieStar leadingMovieStar = FemaleMovieStar;
	leadingMovieStar.print();


	cout << "part d" << endl;
	MovieStar stillLeadingMovieStar;
	stillLeadingMovieStar = MaleMovieStar;
	stillLeadingMovieStar.print();

	cout << "part e" << endl;
	stillLeadingMovieStar = firstFunction(MaleMovieStar);
	stillLeadingMovieStar.print();

	cout << "part f" << endl;
	secondFunction(FemaleMovieStar);


	cout << "part g" << endl;
	cout << "Program terminating" << endl;


	return 0;
}

MovieStar firstFunction(MovieStar& anotherMovieStar)
{
	cout <<"fistFunction is called" << endl;
	anotherMovieStar.changeAge(4);
	return anotherMovieStar;
}

void secondFunction(MovieStar anotherMovieStar)
{
	cout << "secondFunction is called" << endl;
	anotherMovieStar.print();
}








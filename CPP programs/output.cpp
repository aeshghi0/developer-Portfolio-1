#include <iostream>
#include <iomanip>
using namespace std;



const int COL_WIDTH = 13;
double val1, val2 ;
float val3, val4, val5;


int main()
{
    val1 = 1234.56789101;
    val2 = 123.4567;
    val3 = 12345;
    val4 = 12.34;
    val5 = 12;

    cout << setprecision(3) << fixed;
    cout << setw(COL_WIDTH) << val1 << endl;
    cout << setw(COL_WIDTH) << val2 << endl;
    cout << setw(COL_WIDTH) << val3 << endl;
    cout << setw(COL_WIDTH) << val4 << endl;
    cout << setw(COL_WIDTH) << val5 << endl;

    
}

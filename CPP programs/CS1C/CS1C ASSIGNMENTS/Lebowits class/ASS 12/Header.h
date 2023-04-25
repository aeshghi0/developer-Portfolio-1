
#ifndef HEADER_H_
#define HEADER_H_

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>

using namespace std;

const int AR_SIZE = 14;

void readFromFile(string date_AR,
				  string userID_AR,
				  string itemSold_AR,
				  float  price_AR,
				  int    quantity_AR);

#endif /* HEADER_H_ */

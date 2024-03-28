

#ifndef HEADER_H_
#define HEADER_H_

#include <iostream>
#include <iomanip>
#include <string>
#include <stdlib.h>
#include <time.h>

using namespace std;

void GetName(string &n1, char &g1);
bool FlipCoin();
float Average(int numHeads, int totalFlips);
void Output(int totalFlips, int numHeads, float perc);


#endif /* HEADER_H_ */
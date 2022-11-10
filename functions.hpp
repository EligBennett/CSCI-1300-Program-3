//
//  functions.hpp
//  CSCI-1300-Program-3
//
//  Created by Eli bennett on 11/8/22.
//

#ifndef functions_hpp
#define functions_hpp
#include <iostream>
#include <stdio.h>
using namespace std;



const int INVEST = 5;

void getParanormalData(int EVP[], string investNames[], string days[]);

void getStats(int numEVP[], int &total, float &average, int &indexMostRecords);

#endif /* functions_hpp */

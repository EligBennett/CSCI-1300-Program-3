//
//  functions.cpp
//  CSCI-1300-Program-3
//
//  Created by Eli bennett on 11/8/22.
//

#include "functions.hpp"
using namespace std;
#include <iostream>

void getParanormalData(int EVP[INVEST], string investNames[], string days[]) {
    
    for(int i = 1; i < 5; i++) {
        cout << "Enter the investigators name: ";
        cin >> investNames[i];
        cout << "Enter the day of their investigation: ";
        cin >> days[i];
        cout << "Enter the number of EVP's recorded: ";
        cin >> EVP[i];
        
    }
    
}

//when using &, whatever variables we put into those parameters when using them in main, CHANGES ,the variables since we are passing by reference and not making a copy while using pass by value

void getStats(int numEVP[INVEST], int &total, float &average, int &indexMostRecords) {
    
    
    for(int i; i < INVEST; i++) {
        total += numEVP[i];
    }
    average = total / 5;
    
    for(int i; i < 5; i++) {
        
        if (numEVP[i] > indexMostRecords) {
            indexMostRecords = numEVP[i];
            indexMostRecords = i;
        }
    }
}

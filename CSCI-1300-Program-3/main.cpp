//
//  main.cpp
//  CSCI-1300-Program-3
//
//  Created by Eli bennett on 11/8/22.
//
#include "functions.hpp"
#include <iostream>
using namespace std;



int main() {
    int totalRecordings;
    float averageRecordings;
    int index;
    string hauntedLoc = "";
    int numRecordings[INVEST] = {};
    string names[INVEST] = {};
    string investDates[INVEST] = {};
    
// making you use a char array for what location youre investigating is by far the dumbest thing ive ever heard even tho its only for practice so tell ur teach to f off with this one
    
    cout << "What haunted location are you investigating?" << endl;
    cin >> hauntedLoc;
    cout << hauntedLoc << endl;
    
    
    
    
    getParanormalData(numRecordings, names, investDates);
    getStats(numRecordings, totalRecordings, averageRecordings, index);
    
    for(int i = 1; i < 6; i++) {
        cout << "INVESTIGATOR " << i << endl;
        cout << "        NAME - " << names[i] << endl;
        cout << "        DAY - " << investDates << endl;
        cout << "        NUMBER OF EVPs - " << numRecordings << endl;
    }
    cout << "The total amount of EVPs recorded by all 5 investigators at " << hauntedLoc << " is " << totalRecordings <<  " recordings." << endl;
    cout << "The average amount of EVPs at " << hauntedLoc << " is " << averageRecordings << "." << endl;
    cout << endl;
    cout << "The investigator who recorded the most " << "(" << numRecordings[index] << ") " << "is " << names[index] << " on " << investDates[index] << endl;;
    
    
    
    return 0;
}

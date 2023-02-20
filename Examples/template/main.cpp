#include<iostream>

#include "maximum.h"

using namespace std;

int main(){

    int int1, int2, int3;

    cout << "Input three integer value: ";
    cin >> int1 >> int2 >> int3;

    cout << "Maximum integer value is " << maximum(int1, int2, int3) << endl;

    double double1, double2, double3;

    cout << "Input three double value: ";
    cin >> double1 >> double2 >> double3;

    cout << "Maximum double value is: " << maximum(double1, double2, double3) << endl;

    char char1, char2, char3;

    cout << "Input three char value: ";
    cin >> char1 >> char2 >> char2;

    cout << "Maximum char value is: " << maximum(char1, char2, char3) << endl; 


    return 0;
}
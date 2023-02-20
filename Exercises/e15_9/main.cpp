#include<iostream>

#include "maximum.h"

using namespace std;

int main(){

    int int1, int2;

    cout << "Input two integer values: ";
    cin >> int1 >> int2;

    cout << "Maximum value is " << maximum(int1, int2);

    char char1, char2;
    cout << "\nInput two char values: ";
    cin >> char1 >> char2;

    cout << "Maximum value is " << maximum(char1, char2);  

    double double1, double2;

    cout << "\nInput two double values: ";
    cin >> double1 >> double2;

    cout << "Maximum value is " << maximum(double1, double2);


    return 0;
}
#include<iostream>
#include<string.h>
#include "GradeBook.h"
using namespace std;

GradeBook::GradeBook(string name){

    setCourseName(name);
}

void GradeBook::setCourseName(string name){

    if(name.length() <= 25)
        courseName = name;
    
    if(name.length() > 25){
        courseName = name.substr(0, 25);

        cout << "Name \"" << name << "\" exceeds maximum length (25).\n" << "Limiting courseName to first 25 characters. \n" << endl;
    }

}

string GradeBook::getCourseName(){

    return courseName;

}

void GradeBook::displayMessage(){

    cout << "Welcome to the grade book for " << getCourseName() << " !" << endl;

}
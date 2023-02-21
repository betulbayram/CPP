#include<iostream>
#include<string.h>
#include "GradeBook.cpp"

using namespace std;

int main(){

    string nameOfCourse;
    GradeBook gradeBook1("Data Structures");
    GradeBook gradeBook2("Software Engineering");


    cout << "Initial course name is: " << gradeBook1.getCourseName() << endl;
    cout << "Initial course name is: " << gradeBook2.getCourseName() << endl;

    cout << "Please enter the course name: ";
    getline(cin, nameOfCourse);
    cout << endl;

    gradeBook1.setCourseName(nameOfCourse);

    gradeBook1.displayMessage();

    return 0;
}
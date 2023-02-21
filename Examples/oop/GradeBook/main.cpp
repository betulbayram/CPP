#include<iostream>
#include<string.h>
using namespace std;

class GradeBook{

    public:
        void displayMessage(string courseName){

            cout << "Welcome to the Grade Book for " << courseName << endl;

        }

};


int main(){

    string nameOfCourse;
    GradeBook myGradeBook;

    cout << "Please enter the course name: ";
    getline(cin, nameOfCourse);
    cout << endl;

    myGradeBook.displayMessage(nameOfCourse);

    return 0;
}
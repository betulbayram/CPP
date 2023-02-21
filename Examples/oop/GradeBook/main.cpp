#include<iostream>
#include<string.h>
using namespace std;

class GradeBook{

    public:

        void setCourseName(string name){

            courseName = name;

        }

        string getCourseName(){

            return courseName;

        }


        void displayMessage(){

            cout << "Welcome to the Grade Book for " << getCourseName() << endl;

        }

    private:
        string courseName;

};


int main(){

    string nameOfCourse;
    GradeBook myGradeBook;

    cout << "Initial course name is: " << myGradeBook.getCourseName() << endl;

    cout << "Please enter the course name: ";
    getline(cin, nameOfCourse);
    cout << endl;

    myGradeBook.setCourseName(nameOfCourse);

    myGradeBook.displayMessage();

    return 0;
}
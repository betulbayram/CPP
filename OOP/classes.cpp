#include<iostream>

using namespace std;

class Student{

public:
    string name;

};

int main(){


    Student student1;
    student1.name = "Betul";

    Student student2;
    student2.name = "Bayram";

    cout << "Student 1: " << student1.name << endl;
    cout << "Student 2: " << student2.name << endl;

    return 0;
}
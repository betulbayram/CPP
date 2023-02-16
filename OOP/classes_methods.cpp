#include<iostream>

using namespace std;

class Student{

    public:
        string name;

    void sayName(){
        
        cout << "My name is " << name << endl;

    }

};

int main(){


    Student student1;
    student1.name = "Betul";

    Student student2;
    student2.name = "Bayram";

    cout << "Student 1: " << student1.name << endl;
    cout << "Student 2: " << student2.name << endl;

    student1.sayName();
    student2.sayName();

    return 0;
}
#include "Employee.h"

void Employee::showInfos(){

    cout << "Id: " << Employee::id << endl;
    cout << "Name: " << Employee::name << endl;
    cout << "Salary: " << Employee::salary << endl;

}

void Employee::setName(string name){

    Employee::name = name;

}

string Employee::getName(){

    return Employee::name;
}
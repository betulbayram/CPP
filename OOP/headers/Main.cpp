#include<iostream>
#include "Employee.cpp"

int main(){

    Employee employee;

    employee.setName("Betul");
    cout << "Name: " << employee.getName() << endl;

    return 0;
}
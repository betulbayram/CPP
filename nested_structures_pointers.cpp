#include<iostream>

using namespace std;

struct Address{

    string cityName;
    int No;

};

struct Employee{

    int id;
    string name;
    string department;
    Address* address;
};

int main(){

    Employee employee;
    
    employee.id = 8;
    employee.name = "Betul Bayram";
    employee.department = "CE";

    Address address = {"Bursa", 16};

    employee.address = &address;

    cout << employee.id << endl;
    cout << employee.name << endl;
    cout << employee.department << endl;
    cout << employee.address->cityName << endl;
    cout << employee.address->No << endl;


    Employee *employeePtr = &employee;
    
    cout << employeePtr->address->cityName << endl;


    return 0;
}
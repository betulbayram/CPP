#include<iostream>

using namespace std;

struct Employee{

    int id;
    string name;
    string department;

};

void showEmployee(Employee e){

    cout << "ID: " << e.id << endl;
    cout << "NAME: " << e.name << endl;
    cout << "DEPARTMENT: " << e.department << endl;

}

void showEmployeePtr(Employee *e){

    cout << "ID: " << e->id << endl;
    cout << "NAME: " << e->name << endl;
    cout << "DEPARTMENT: " << e->department << endl;


}

int main(){

    Employee employee1 = {8, "Betul Bayram", "CE"};

    showEmployee(employee1);

    showEmployeePtr(&employee1);
   
    return 0;
}
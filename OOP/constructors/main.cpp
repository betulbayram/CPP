#include<iostream>

using namespace std;

class Employee
{
private:
    string name;
    int salary;
public:
    Employee(string name, int salary){
        this->name = name;
        this->salary = salary;
    }
    // ~Employee();
    void setSalary(int salary){
        this->salary = salary;
    }
    int getSalary(){
        return salary;
    }

    void setName(string name){
        this->name = name;
    }
    string getName(){
        return name;
    }

    void showInfos(){

        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }

};

int main(){

    Employee employee("Betul Bayram", 8);
    employee.showInfos();
    return 0;
}
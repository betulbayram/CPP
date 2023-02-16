#include<iostream>

using namespace std;

struct Employee{

    int id;
    string name;
    string department;

};

int main(){

    Employee employee1 = {8, "Betul Bayram", "CE"};

    cout << employee1.name << endl;

    return 0;
}
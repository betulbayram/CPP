#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

#include<iostream>
using namespace std;

class Employee
{
    private:
        string name;
        int id;
        int salary;

    public:
        void showInfos();

        void setName(string name);

        string getName();
};

#endif
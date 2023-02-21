#include<iostream>
#include<string.h>
using namespace std;

class Account{
    public:
        Account(int);
        int getBalance();
        void depositMoney(int);
        void withdrawMoney(int);

    private:
        int balance;
};
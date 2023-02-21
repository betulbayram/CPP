#include<iostream>
#include<string.h>
#include "Account.cpp"
using namespace std;

int main(){

    Account account1 = {1000};
    account1.depositMoney(10);
    account1.withdrawMoney(2000);
    account1.withdrawMoney(20);
    account1.getBalance();


    return 0;
}
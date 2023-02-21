#include<iostream>
#include<string.h>
#include "Account.h"

Account::Account(int b){
    if(b >= 0){
        balance = b;
    }
    else{
        cout << "Wrong Balance Amount !!!" << endl;
        balance = 0;
    }
}

int Account::getBalance(){

    return balance;

}

void Account::depositMoney(int m){

    if(m > 0){
        balance = balance + m;
        cout << "Succesfull Process" << endl;
        cout << "Amount Deposit: " << m << endl;
        cout << "Current Money: " << balance << endl;
    }
    else
        cout << "Wrong Deposit Money";

}

void Account::withdrawMoney(int m){

    if(getBalance() >= m){
        balance = balance - m;
        cout << "Succesfull Process" << endl;
        cout << "Amount Withdraw: " << m << endl;
        cout << "Current Money: " << balance << endl;

    }
    else{
        cout << "Insufficient Balance !!!" << endl;
        cout << "Current Money: " << balance << endl;
    }

}
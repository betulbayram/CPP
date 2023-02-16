#include<iostream>

using namespace std;

int main(){

    int *ptr = nullptr;

    ptr = new int;

    *ptr = 10;

    delete ptr; //dangling reference

    return 0;
}
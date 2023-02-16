#include <iostream>

using namespace std;

int main(){

    int a = 5;

    int *ptr = &a;

    cout << "Variable adress: " << &a << endl;
    cout << "Variable adress: " << ptr << endl;
   
    cout << "Variable value: " << a << endl;
    cout << "Variable value: " << *ptr << endl;

    *ptr = 6;

    cout << "Variable value: " << a << endl;
    cout << "Variable value: " << *ptr << endl;

    return 0;
}
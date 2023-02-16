#include <iostream>

using namespace std;


void changeValue(int &ref){

    ref = 20;

}

int main(){

    int a = 10;

    int &ref = a;

    ref++;

    cout << "a: " << a << endl;
    cout << "ref: " << ref << endl;
    cout << "&a: " << &a << endl;
    cout << "&ref: " << &ref << endl;

    changeValue(a);

    cout << "after function a: " << a << endl;
    cout << "after function ref: " << ref << endl;
    cout << "after function  &a: " << &a << endl;
    cout << "after function &ref: " << &ref << endl;
    

    return 0;
}

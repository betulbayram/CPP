#include <iostream>

using namespace std;

void changeValue(int *ptr){

    *ptr = 20;
    cout << "In function value: " << *ptr << endl;

}

int main(){

    int a = 10;
    cout << "a value: " << a << endl;
    changeValue(&a);
    cout << "After function a value: " << a << endl;

    return 0;
}
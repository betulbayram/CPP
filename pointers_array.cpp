#include <iostream>

using namespace std;

int main(){

    int array[] = {1,2,3,4};

    cout << array << endl;
    cout << array + 1 << endl;
    cout << array + 2 << endl;


    int *ptr = array;

    cout << ptr << endl;
    cout << ptr + 1 << endl;
    cout << ptr + 2 << endl;
    cout << *ptr << endl;
    cout << *(ptr + 1) << endl;


    return 0;
}
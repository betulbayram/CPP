#include<iostream>

using namespace std;

int main(){

    int *ptr;
    int size;

    cout << "Size: ";
    cin >> size;

    ptr = new int[size];

    for (size_t i = 0; i < size; i++)
    {
        cout << "Value: ";
        cin >> ptr[i];
    }
    
    for (size_t i = 0; i < size; i++)
    {
        cout << "Value: " << ptr[i] << endl;
    }
    
    delete [] ptr;

    return 0;
}
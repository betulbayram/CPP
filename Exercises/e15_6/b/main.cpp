#include<iostream>

using namespace std;

void tripleByReference(int *value){

    *value = *value * 3;

}


int main(){

    int count;

    cout << "Input integer value: ";
    cin >> count;
    tripleByReference(&count);
    cout << "After triple: " << count;

    return 0;
}
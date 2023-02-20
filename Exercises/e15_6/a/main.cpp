#include<iostream>

using namespace std;

int tripleByValue(int count){

    return count * 3;

}

int main(){

    int count;
    cout << "Input integer value: ";
    cin >> count;

    cout << "Triple: " << tripleByValue(count);

    return 0;
}
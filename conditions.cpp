#include <iostream>

using namespace std;

int main(){

    string password = "abcdfgh";

    string input;
    cout << "Please Enter Password: ";
    cin >> input;


    if (password == input){
        cout << "Correct Password";
    }
    else {
        cout << "Wrong Password";
    }

    return 0;
}
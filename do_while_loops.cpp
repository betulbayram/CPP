#include <iostream>

using namespace std;

int main(){

    string password = "123456";

    string input;
    
    do
    {
        cout << "Enter Password: ";
        cin >> input;
    } while (password != input);
    
    cout << "Correct Password" << endl;

    return 0;
}
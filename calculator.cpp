#include <iostream>

using namespace std;

int main(){

    int a, b;

    string islem;

    cout << "Welcome to the calculator programme" << endl;
    cout << "Select the process: | + | - | / | * |" << endl;
    cin >> islem;

    cout << "Enter the first number: ";
    cin >> a;

    cout << "Enter the second number: ";
    cin >> b;

    if (islem == "+"){
        cout << "Result: " << a + b << endl;
    }
    else if (islem == "-"){
        cout << "Result: " << a - b << endl;
    }
    else if (islem == "/"){
        if(b == 0){
            cout << "Zero Division Error";
        }
        else{
        cout << "Result: " << a / b << endl;
        }
    }
    else if (islem == "*"){
        cout << "Result: " << a * b << endl;
    }

    return 0;
}
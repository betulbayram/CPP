#include<iostream>

using namespace std;

void say_hello();
void say_name(string name);
int factorial(int number);
int main(){

    say_hello();
    say_name("Betul");
    int a = factorial(5);

    cout << "factorial is: " << a << endl;
    return 0;
}

void say_hello(){

    cout << "HELLO" << endl;

}

void say_name(string name){

    cout << "Your Name is" << name << endl;

}

int factorial(int number){

    int result = 1;

    for (size_t i = 1; i < number + 1; i++)
    {
        result = result * i;
    }
    
    return result;
}
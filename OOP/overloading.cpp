#include<iostream>

using namespace std;

void sayHello(){

    cout << "Hello" << endl;

}

void sayHello(string name){

    cout << "Hello " << name << endl;
}


int main(){

    sayHello();
    sayHello("betul");

    return 0;
}
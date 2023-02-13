#include <iostream>

using namespace std;

int main(){

    string sys_username = "betul_bayram";
    string sys_password = "123456";

    string username;
    string password;

    cout << "Enter Username: ";
    cin >> username;

    cout << "Enter Password: ";
    cin >> password;

    if(sys_username == username && sys_password == password){
        cout << "WELCOME !!!" << endl;
    }
    else if (sys_username != username && sys_password == password){
        cout << "Wrong username";
    }
    else if (sys_username == username && sys_password != password){
        cout << "Wrong password";
    }
    else{
        cout << "Wrong username and password";
    }
    return 0;
}
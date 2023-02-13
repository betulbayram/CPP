#include <iostream>

using namespace std;

int main(){

    string str1 = "This is String";
    string str2 = "Also this is String";

    cout << "String 1: " << str1 << endl;
    cout << "String 2: " << str2 << endl;

    string merged_str  = str1 + str2;

    cout << "merged string: " << merged_str<< endl;


    return 0;
}
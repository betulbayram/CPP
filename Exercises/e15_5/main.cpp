#include<iostream>
#define PI 3.14

using namespace std;

template<class T>

inline void circleArea(T value){

    cout << "area is: " << PI * value * value << endl;

}

int main(){

    int r;
    cout << "Input r value:";
    cin >> r;

    circleArea(r);

    return 0;
}

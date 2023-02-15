#include <iostream>

using namespace std;

int main(){

    int process;

    cout << "Enter Process: ";
    cin >> process;

    switch (process)
    {
    case 1:
        cout << "Selected Process --> 1" << endl;
        break;
    case 2:
        cout << "Selected Process --> 2" << endl;
        break;
    case 3:
        cout << "Selected Process --> 3" << endl;
        break;
    case 4:
        cout << "Selected Process --> 4" << endl;
        break;
    default:
        cout << "Wrong Process !!!";
        break;
    }

    return 0;
}
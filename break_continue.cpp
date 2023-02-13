#include <iostream>

using namespace std;

int main(){

    int i = 0;

    while(i < 10){

        if(i == 5){
            break;
        }
        cout << "i: " << i << endl;
        i++;
    }

    for (size_t j = 0; j < 10; j++)
    {
        if(j == 3 || j == 5){
            continue;
        }
        cout << "j: " << j << endl;
    }
    
    return 0;
}
#include <iostream>

using namespace std;

int main(){


    int md_array[3][3] = {{1,2,3}, {4,5,6},{7,8,9}};


    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            cout << md_array[i][j] << endl;
        }
        
    }
    


    return 0;
}
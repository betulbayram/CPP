#include <iostream>

using namespace std;

int main(){

    int array[3];

    array[0] = 10;
    array[1] = 20;
    array[2] = 30;

    for (size_t i = 0; i < 3; i++)
    {
        cout << i << ". index: " << array[i] << endl;
    }
     
    int array1[] = {10, 20, 30, 40};
    
    double array2[] = {1.2, 3.5, 4.6};


    string array3[4];

    for (size_t i = 0; i < 4; i++)
    {
        cout << "Enter String  for " << i << ". index: ";
        cin >> array3[i];
    }
    
    for (size_t i = 0; i < 4; i++)
    {
        cout << i << ". index: " << array3[i] << endl;
    }
    

    return 0;
}
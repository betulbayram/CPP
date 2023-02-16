#include<iostream>

using namespace std;

void printArray(const int *ptr1, const int *ptr2){

    for (; ptr1 != ptr2; ptr1++)
    {
        cout << "Value: " << *ptr1 << endl;
    }
    

}


int main(){

    int array[] = {1,2,3,4,5,6,7,8,9,10};

    printArray(array + 2, array + 7);

    return 0;
}
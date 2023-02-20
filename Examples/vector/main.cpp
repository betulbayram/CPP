#include<iostream>
#include<iomanip>
#include<vector>

using namespace std;

void outputVector(const vector<int> &array);
void inputVector(vector<int> &array);


int main(){

    vector <int> integers1(7);
    vector <int> integers2(10);

    cout << "Size of vector integers1 is: " << integers1.size() << "\nvector after initialization: " << endl;
    outputVector(integers1);

    cout << "Size of vector integers2 is: " << integers2.size() << "\nvector after initialization: " << endl;
    outputVector(integers2);

    cout << "Input 17 integers: " << endl;
    inputVector(integers1);
    inputVector(integers2);

    cout << "\nAfter input, the vectors contain:\n" << "integers1: " << endl;
    outputVector(integers1);
    cout << "\nAfter input, the vectors contain:\n" << "integers2: " << endl;
    outputVector(integers2);


    cout << "\nEvaluating: integers1 != integers2 " << endl;
    if(integers1 != integers2){
        cout << "integers1 and integers2 are not equal" << endl;
    }

    vector<int> integers3(integers1); //copy

    cout << "\nSize of vector integers3 is" << integers3.size() << "\nvector after initialization: " << endl;
    outputVector(integers3);

    cout << "\nAssigning integers2 to integers1: " << endl;
    integers1 = integers2;

    cout << "integers1: " << endl;
    outputVector(integers1);
  
    cout << "integers2: " << endl;
    outputVector(integers2);


    cout << "\nEvaluating: integers1 == integers2" << endl;
    if(integers1 == integers2){
        cout << "integers1 and integers2 are equal";
    }

    cout << "\nintegers1[5] is " << integers1[5];

    cout << "\n\nAssigning 1000 to integers1[5]" << endl;
    integers1[5] = 1000;

    cout << "integers1:" << endl;
    outputVector(integers1);


    //error handling


    try
    {
        cout << "\nAttempt to display integers.at(15)" << endl;
        cout << integers1.at(15) << endl;
    }
    catch(out_of_range &ex)
    {
        cout << "An exception occured: " << ex.what() << endl;
    }
    


    return 0;
}


void outputVector(const vector<int> &array){

    for (size_t i = 0; i < array.size(); i++)
    {
        cout << setw(12) << array[i];

        if((i + 1) % 4 == 0){
            cout << endl;
        }

        if (i % 4 != 0){
            cout << endl;
        }
    }
}


void inputVector(vector<int> &array){

    for (size_t i = 0; i < array.size(); i++)
    {
        cin >> array[i];
    }
    
}


#include <iostream>
using namespace std;


int main(){

    string myArray[10] = {"Abhay","Daswat","Giri"};

    //As the address of the first element is stored in the declared variable
    //printing myArray will give the base address instead of "Abhay"
    cout << myArray << endl;
    //OR
    cout << &myArray[0] << endl;
    //OR
    cout << &myArray <<  endl;

    cout << myArray + 2 << endl;

    //Printing the 1 index in array i.e "Daswat"
    cout << myArray[1] << endl;

    //Adding two more address spaces to the base and dereference
    cout << *(myArray + 2) << endl;

    for(int i = 0; i <= 8; i++){
        cout << *(myArray + i) << "\t";
    }

    return 0;
}

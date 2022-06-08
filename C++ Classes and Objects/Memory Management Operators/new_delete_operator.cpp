#include<iostream>
using namespace std;

int main(){
    //Creating a pointer variable of integer type
    int *ptr;
    //Allocating memory dynamically using "new" operator
    ptr = new int;
    //Assigning value to ptr
    *ptr = 137;
    cout << ptr << endl;
    cout << *ptr << endl;
    //Deleting the memory
    delete ptr;
    cout << ptr << endl;
    cout << *ptr;
    //137 is deleted and garbage value is shown

    return 0;
}
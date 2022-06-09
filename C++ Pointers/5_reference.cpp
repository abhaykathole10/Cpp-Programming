#include <iostream>
using namespace std;

int main(){
    int a = 10;

    //Creating an alias of 'a' called "ref"
    int &ref = a;

    cout << "Value of a is: " << a << endl;
    cout << "Value of ref is: " << ref << endl;

    //Both value of a and ref changes as ref is nothing nut another name for a
    ref = 15;

    cout << "Value of a is: " << a << endl;
    cout << "Value of ref is: " << ref << endl;

    return 0;
}

/*Differnce between Pointers and Reference
1. Declaration
    Pointers  : int* ptr = &a;
    Reference : int &ref = a;
2.Reassignment
    pointers: possible
        ptr = 15
    refernece: impossible
3.Arithmetic operations
    pointers: possible
    reference : imposssible
4.Indirection
    pointers: possible
        int* ptr1 = &a;
        int* ptr2 = &ptr1;
    reference: impossible
        &ref1 = a;
        &ref2 = &ref1; error
5. Memory Address
    pointers: independent(different)
    refernce: same as variable
6.Null value
    pointers: possible
    refereence: impossible*/
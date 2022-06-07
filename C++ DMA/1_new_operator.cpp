#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int* ptr1 = &a;
    cout  << "Value of a is: "<< a << endl;
    cout  << "Value of ptr1 is: "<< ptr1 << endl;
    cout  << "Value of *(ptr1) is: "<< *(ptr1) << endl;

    //Using new keyword/operator
    int* ptr2 = new int(100);
    cout  << "Value of ptr2 is: "<< ptr2 << endl;
    cout  << "Value of *(ptr2) is: "<< *(ptr2) << endl;

    return 0;
}
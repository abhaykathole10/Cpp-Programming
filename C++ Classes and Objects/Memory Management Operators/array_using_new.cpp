#include <iostream>
using namespace std;

int main(){
    int *p;
    //We have declared a dynamic array with size=3
    p = new int[3];

    //Here we are taking elements
    for(int i=0; i<5; i++){
        cout << "Enter value: ";
        cin >> *(p+i);
    }
    //The first 3 elements get the contiguous memory
    //The last 2 gets random memory in the stack
    for(int i=0; i<5; i++){
        cout << endl << i << " " << (p+i) << "-> " << *(p+i);
    }

    //releasing the memory for future use
    delete []p;

    return 0;
}
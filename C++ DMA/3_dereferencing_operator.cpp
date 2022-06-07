#include <iostream>
using namespace std;

//Accessing array elements using dereferencing operator (*)
int main(){
    int arr[5];
    // int ptr = &arr;

    for(int i=0; i < 5; i++){
        cout << "Enter item " << i+1 << ": ";
        cin >> *(arr+i) ;
    }
    cout << "Array : ";
    for(int i=0; i < 5; i++){
        cout << *(arr+i) << " " ;
    }
    return 0;
}
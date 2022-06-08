#include <iostream>
using namespace std;

int main(){
    int* arr = new int[5];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;

    //*(arr+3) = *(base + 3*(sizeof(int))) = *(base(arr) + 3*4) = *(2046+12) = *(2058)
    *(arr+3) = 40;
    *(arr+4) = 50;

    //Contiguous
    cout  << "Address of arr[0] is: "<< arr << endl;
    cout  << "Address of arr[1] is: "<< &arr[1] << endl;
    cout  << "Address of arr[2] is: "<< &arr[2] << endl;

    //Different because it is array of pointers
    //Array contains the address of elements it may not be continuos memory
    //This is the best use of DMA using pointer
    //arr[3] and arr[4] are pointing towards different memory locations
    //because we declared them exclusively
    cout  << "Address of arr[3] is: "<< &arr[3] << endl;
    cout  << "Address of arr[4] is: "<< &arr[4] << endl;

    cout  << "Value of arr[0] or *(arr) is: "<< *(arr) << endl;
    cout  << "Value of arr[1] is: "<< arr[1] << endl;
    cout  << "Value of arr[2] is: "<< arr[2] << endl;
    cout  << "Value of arr[3] is: "<< arr[3] << endl;
    cout  << "Value of arr[4] is: "<< arr[4] << endl;

    cout << "The array is: " << endl;
    for(int i = 0; i < 5; i++){
        cout << &arr[i] << ": " << arr[i] << "\n";
    }

    delete arr;
    cout << arr[0];

    return 0;
}
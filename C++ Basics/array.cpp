#include<iostream>
using namespace std;

int main(){
    int arr[3];

    for(int i=0; i<5; i++){
        cout << "Enter value: ";
        cin >> arr[i];
    }
    //After 1,2,3 garbage value gets inserted in 4th and 5th location
    for(int i=0; i<5; i++){
        cout << endl << i << "  " << (arr+i) << "->  " << arr[i];
    }
    return 0;
}
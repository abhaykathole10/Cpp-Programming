#include <iostream>
using namespace std;

int main(){
    int rows=3 ,cols=3;
    int arr[rows][cols];

    cout << "Enter 3*3 matrix elements" << endl;

    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout << "Enter Value: ";
            cin >> arr[i][j];
        }
    }

    cout<< "The matrix is: " << endl;

    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
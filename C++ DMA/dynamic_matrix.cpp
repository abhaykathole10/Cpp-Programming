#include <iostream>
using namespace std;

int main(){
    int rows,cols;
    cout<< "Rows: ";
    cin >> rows;
    cout<< "Columns: ";
    cin >> cols;

    // int** table = new int*[rows];
    // for(int i=0; i<rows; i++){
    //     table[i] = new int[cols];
    // }
    int table[rows][cols];

    cout << "Enter elements" <<endl;

    for(int i=0; i<rows; i++){
        for(int j=0; i<cols; j++){
            cout<<"Enter Value: ";
            cin >> table[i][j];
        }
    }

    cout << "The matrix is :" << endl;
    for(int i=0; i<rows; i++){
        for(int j=0; i<cols; j++){
            cout << table[i][j] << " ";
        }
        cout << endl;
    }

    // for(int i=0 ; i<rows; i++){
    //     delete[] table[i];
    // }

    // delete[] table;

    return 0;
}

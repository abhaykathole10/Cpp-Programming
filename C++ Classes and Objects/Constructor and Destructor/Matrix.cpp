#include <iostream>
using namespace std;

class matrix{
    //Pointer to pointer variable "p"
    int** p;
    int d1, d2;
    public:
        matrix(int, int);
        void enterVal(int x, int y, int v){
            p[x][y] = v;
        }
        void display(){
            for(int i=0; i<d1; i++){
                for(int j=0; j<d2; j++){
                    cout << p[i][j] << " ";
                }
                cout << "\n";
            }
        }
};

matrix :: matrix(int rows, int cols){
    d1 = rows;
    d2 = cols;
    //Integer "pointer" array of size "rows" is alloted
    p = new int *[d1];

    for(int i=0; i<d1; i++){
        //Each pointer is pointing to the newly created array of size "cols"
        p[i] = new int [d2];
    }
}

int main(){
    int r, c, v;
    cout << "Enter rows and columns: ";
    cin >> r >> c;

    matrix A(r, c);

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout << "Enter value: ";
            cin >> v;
            A.enterVal(i, j, v);
        }
    }

    A.display();

    return 0;
}
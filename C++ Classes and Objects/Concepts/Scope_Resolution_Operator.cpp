#include <iostream>
using namespace std;

int m = 10;         //m is 10 globally
int main(){

    int m = 20;     //m is 20 for main block

    {
        int k = m;  //m is 20 here
        int m = 30; //m is redelared 30 locally

        cout << "\nLocal block\n";
        cout << "m = " << m;
        cout << "\nk = " << k;
        //Scope Resolution Operator returns the global value of the variable
        cout << "\n::m = " << ::m ;
    }

    cout << "\nMain block\n";
    cout << "m = " << m;
    cout << "\n::m = " << ::m ;
}
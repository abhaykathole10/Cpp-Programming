#include<iostream>
#include<vector>
using namespace std;

//COPYING ONE VECTOR ELEMENTS TO OTHER
int main(){
    vector<int> v = {1,2,3,4,5};

    cout << "Vector v: ";
    for(int i: v){
        cout<< i << "\t";
    }

    cout << "\n\n";

    vector<int> l(v);   //COPYING VECTOR V INTO L

    l.push_back(6);     //ADDING NEW ELEMENTS TO L

    cout << "Vector l: ";
    for(int i: l){
        cout<< i << "\t";
    }
}
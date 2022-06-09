#include<iostream>
#include<vector>
using namespace std;

//CREATING AN ITERATOR AND USING IT TO ITERATE THROUGH VECTOR
int main(){
    vector<int> v = {1,2,3,4,5};

    //Creating a iterartor
    vector<int> :: iterator itr;

    //Assigning it first value of vector
    itr = v.begin();
    cout << *itr << "\n\n";

    //Using same iterator to iterate through vector
    for(itr; itr != v.end() ;itr++){
        cout << *itr << "\t";
    }
    return 0;
}
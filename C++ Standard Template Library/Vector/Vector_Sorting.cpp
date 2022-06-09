#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> v = {6,4,2,7,5,9,1};

    //Sorting a vector
    cout << "Before Sorting\n";
    for(int i: v){
        cout<< i << " ";
    }
    sort(v.begin(),v.end());

    cout << "\nAfter Sorting\n";
    for(int i: v){
        cout<< i << " ";
    }

    return 0;
}
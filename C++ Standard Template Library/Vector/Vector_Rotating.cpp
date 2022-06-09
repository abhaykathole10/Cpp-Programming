#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> v = {1,2,3,4,5};

    cout << "Before Rotate: ";
    for(int i: v){
        cout << i << " ";
    }

    //First Rotate
    rotate(v.begin(),v.begin() + 1, v.end());

    cout << "\nAfter Rotate 'v.begin(),v.begin() + 1, v.end()': ";
    for(int i: v){
        cout << i << " ";
    }

    //Second Rotate
    rotate(v.begin(),v.begin() + 2, v.end());

    cout << "\nAfter Rotate 'v.begin(),v.begin() + 2, v.end()': ";
    for(int i: v){
        cout << i << " ";
    }

    return 0;
}
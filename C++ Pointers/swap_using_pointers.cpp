#include <iostream>
using namespace std;

//There is no need to return value while using pointers
//As the value is changing in real time
//Also we can return mulriple values using pointers
void swapNums(int &x, int &y){
    int t = x;
    x = y;
    y = t;
}

int main(){
    int a=10, b=20;
    cout <<"a is: "<< a << endl;
    cout <<"b is: "<< b << endl;

    swapNums(a,b);

    cout <<"\na is: "<< a << endl;
    cout <<"b is: "<< b << endl;
    return 0;
}
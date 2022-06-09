#include<iostream>
using namespace std;

//We have created a reference to the argument as a parameter to the function
//i.e int & x = m;
void fun(int& x){
    x = x + 50;
    //No need of return in case of call by reference
}

void swap(int & x, int & y){
    int t = x;
    x = y;
    y = t;
    //We would need 2 returns to return 2 values
    //But they are getting swapped by reference i.e no copy element is passed
    //The real elements are passed and swapped in real time
}

int main(){
    //Updating an element using Call by refernce
    int m = 20;
    cout << "m is " << m;

    //Passing 'm' as an argument
    fun(m);

    cout << "\nm is " << m << endl;

    //Swapping two elements using Call by reference
    int a = 10;
    int b = 20;
    cout << "\nSwapping using Call by reference";

    //Before
    cout << "\na is " << a;
    cout << "\nb is " << b << endl;

    //Passing 'a' and 'b' as an argument
    swap(a , b);

    //After
    cout << "\na is " << a;
    cout << "\nb is " << b << endl;
}
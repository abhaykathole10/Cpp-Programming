#include <iostream>
using namespace std;

class myClass{
    public:
    //Method declared inside the class
    void myMethod();
};
//Method is declared outside the class using scope resolution operator(::)
void myClass :: myMethod(){
    cout << "Function Declared outside the class\n";
}

int main(){
    myClass myObj;
    myObj.myMethod();

    return 0;
}
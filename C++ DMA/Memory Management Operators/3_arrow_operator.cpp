#include <iostream>
using namespace std;

class MyClass{
    public:
        int a = 10 , b = 20;

        void FuncOne(){
            cout << "Value of a is: " << a << endl;
        }
        void FuncTwo(){
            cout << "Value of b is: " << b << endl;
        }

};

int main(){
    MyClass* abc = new MyClass;

    abc -> FuncOne();
    abc -> FuncTwo();

    return 0;
}
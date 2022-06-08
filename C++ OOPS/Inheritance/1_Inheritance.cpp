#include <iostream>
using namespace std;

class grandFather{
    public:
        void grandpaFunc(){
            cout << "Hello Grandpa!!!\n";
        }
};

//Single Inheritance
//class myFather : public grandFather

class myFather{
    public:
        void dadFunc(){
                cout << "Hello Dad!!!\n";
        }
};

//Multiple Inheritance
class meMyself : public grandFather, public myFather{
    public:
        void myFunc(){
            cout << "I inherited them both!!!\n";
        }
};

int main(){
    //Only creating an object of meMyself and having access of all the member functions
    meMyself obj;
    obj.grandpaFunc();
    obj.dadFunc();
    obj.myFunc();
    return 0;
}
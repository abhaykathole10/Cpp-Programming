#include<iostream>
using namespace std;

class myClass{
    int a;
    static int count;
    public:
        void display(){
            cout << count << endl;
        }
        void fun(){
            count++;
        }
};

//Type and Scope of Static variables need to declared outside class
int myClass :: count;

int main(){
    myClass o1,o2,o3;

    o1.display();
    o1.fun();
    o1.display();
    o2.fun();
    o1.display();
    o3.fun();
    o1.display();

    return 0;
}
/*
Same variable is shared among all the obj
Even though the function calls are independent, count is same for all
So count gets incremented 3 times
*/
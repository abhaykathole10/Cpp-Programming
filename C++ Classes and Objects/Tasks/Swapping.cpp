#include<iostream>
using namespace std;

class two;
class one{
    int data1;
    public:
    //Setting the value of the private members of the class
    void inData(int x){
        data1 = x;
    }
    void display(){
        cout << "\nData 1: " << data1;
    }
    //Decalring friend function
    friend void swapFun(one &, two &);
};
class two{
    int data2;
    public:
    //Setting the value of the private members of the class
    void inData(int y){
        data2 = y;
    }
    void display(){
        cout << "\nData 2: " << data2;
    }
    //Decalring friend function
    friend void swapFun(one &, two &);
};

//Defining friend function
//Taking address of the object with type "class" as an argument
//We know call by reference int &x = a; i.e one &t = a;
void swapFun(one & t, two & r){
    int temp = t.data1;
    t.data1 = r.data2;
    r.data2 = temp;
}

int main(){
    one a;
    two b;

    a.inData(10);
    b.inData(20);

    a.display();
    b.display();

    swapFun(a, b);

    a.display();
    b.display();

    return 0;
}
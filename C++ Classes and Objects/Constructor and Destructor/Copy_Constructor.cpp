#include<iostream>
using namespace std;

class item{
    int val;
    public:
        item(){};
        //Constructor with int parameter
        item(int x);
        //Constructor with "object" parameter
        item(item &);

        void display();
};

item :: item(int x){
    val = x;
}

item :: item(item & y){
    val = y.val;
}

void item :: display(){
    cout << val;
}

int main(){
    //Creating an object and initializing construtor with 'int' argument
    item A(5);

    //Copy constructor forming methods
    item B(A);
    item C = A;

    cout << "\nA's val: "; A.display();
    cout << "\nB's val: "; B.display();
    cout << "\nC's val: "; C.display();

    return 0;
}

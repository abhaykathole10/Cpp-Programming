#include <iostream>
using namespace std;

//FUNCTION OVERLOADING
class shape{
    int a;
    public:
    //When only one parameter is present
    int area(int x){
        return x*x;
    }
    //When two parameters are present
    int area(int p, int q){
        return p*q;
    }
};

int main(){
    //Object of class "shape"
    shape t;

    //Calling same function "area" but with different arguments list
    cout << "\nArea of Square: " << t.area(5);
    cout << "\nArea of Rectangle: "<< t.area(2, 3);

    return 0;
}
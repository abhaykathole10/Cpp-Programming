#include <iostream>
using namespace std;

class myClass{

    //The private(default) members of the class
    //Attributes or Data Members
    int var1;
    int var2;

    //Explicitily making public
    public:

    //func() can be accessed my the object
    //Methods or Member function
    void func(){
        cout << "Class and Object";
    }
};

int main(){

    //Creating an object of class "myClass"
    myClass myObj;

    // myObj.var1 = 10; is not possible because var1 is private
    //Calling func() which is public
    myObj.func();

    return 0;
}
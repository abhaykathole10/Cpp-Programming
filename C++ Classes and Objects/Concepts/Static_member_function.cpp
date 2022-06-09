#include <iostream>
using namespace std;

class item{
    static int count;
    int code;
    public:
        void setCode(){
            code = ++count;
        }
        void showCode(){
            cout << "\nObject number: " << code;
        }
        //Static func only has access to static variables of same class
        static void showCount(){
            cout << "\nCount: " << count;
        }
};

//Type and Scope of Static variables need to declared outside class
int item :: count;

int main(){
    item a, b;
    a.setCode();
    b.setCode();

    //Static functions can be called directly using class name without creating object
    item :: showCount();

    item c;
    c.setCode();

    item :: showCount();

    a.showCode();
    b.showCode();
    c.showCode();

    return 0;
}
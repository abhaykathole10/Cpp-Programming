#include <iostream>
using namespace std;

class student{
    int roll;
    char name[10];
    public:
    void getData(){
        cout << "\nEnter roll: ";
        cin >> roll;
        cout << "Enter name: ";
        cin >> name;
    }
    //friend function declaration
    friend void display(student);
};

//friend function definition
//It takes object as a parameter
//Friend function has access to all the private members
void display(student x){
        cout << "\n" << x.roll << " is " << x.name;
    }

int main(){
    student a, b, c;

    //Calling a member function
    a.getData();
    b.getData();
    c.getData();

    //Passing object as an argument to the friend function
    display(a);
    display(b);
    display(c);

    return 0;
}

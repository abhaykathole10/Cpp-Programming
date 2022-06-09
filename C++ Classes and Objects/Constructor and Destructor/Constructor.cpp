#include<iostream>
using namespace std;

class student{
    //Private members
    string name;
    int rollno;
    //Public members
    public:
        //Constructor doesn't have return type
        //Constructor has same name as class
        student(string a, int b);
};

student :: student(string n, int r){
        name = n;
        rollno = r;
        cout << name << "'s roll no is " << rollno << endl;
    }

int main(){
    //Constructor calling methods
    //1. Calling constructor implicitly (Constructor gets automatically called)
    student first("Abhay", 901);
    student second("Dikshant", 905);
    student third("Rushikesh", 921);

    //2. Calling constructor explicitly (Passing arguments to the function 'student')
    student fourth = student("Cristiano", 925);
    student fifth = student("Lionel", 933);
    student sixth = student("Karim", 947);

    return 0;
}
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
    student(string n, int r){
        name = n;
        rollno = r;
        cout << "\n" << name << "'s roll no is " << rollno;
    }
};

int main(){
    //Constructor gets automatically called
    student first("Abhay", 901);
    student second("Dikshant", 905);
    student third("Rushikesh", 921);

    return 0;
}
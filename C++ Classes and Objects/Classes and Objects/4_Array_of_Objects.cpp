#include <iostream>
using namespace std;

class employee{
    char name[10];
    int age;

    public:
        //Function declaration
        void getdata();
        void display();
};

//Function definition
void employee :: getdata(){
    cout << "Enter name: ";
    cin >> name;
    cout <<"Enter age: ";
    cin >> age;
}

void employee :: display(){
    cout << name << " is " << age << " years old\n";
}

int SIZE = 3;
int main(){
    //Creating Object Array of "employee" class
    employee manager[SIZE];

    //obj.func() == manager[i].getData()

    //Accessing ith object
    for(int i=0; i<SIZE; i++){
        manager[i].getdata();
    }

    //Displaying ith object
    for(int i=0; i<SIZE; i++){
        manager[i].display();
    }

    return 0;
}
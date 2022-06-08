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
    friend void display(student);
};
void display(student x){
        cout << x.roll << " is " << x.name;
    }
int main(){
    student a, b, c;

    a.getData();
    display(a);

    return 0;
}

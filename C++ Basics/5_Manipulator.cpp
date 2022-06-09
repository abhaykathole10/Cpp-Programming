#include<iostream>
#include <iomanip>  //for setw (set width)
using namespace std;

int main(){
    int roll = 901;
    char name[10] = "Abhay";
    float percent = 94.76;

    //Making text right justified
    cout << setw(10) << "Roll no " << setw(10) << roll << endl
        << setw(10) << "Name " << setw(10) << name << endl
        << setw(10) << "Percent " << setw(10) << percent;

    return 0;
}
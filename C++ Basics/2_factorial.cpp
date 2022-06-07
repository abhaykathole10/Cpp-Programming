#include <iostream>
using namespace std;

int fact(int x){
    if(x == 0)
    return 1;

    else
    x = x * fact(x-1);

    return x;
}

int main(){
    while(true){
        int num;
        cout << "Enter a positive number: ";
        cin >> num;
        int z = fact(num);
        cout << "The factorial of "<< num << " is: " << z << "\n\n";
    }
    return 0;
}
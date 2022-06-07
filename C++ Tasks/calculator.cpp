#include <iostream>
#include <iomanip>
#include <ios>

using namespace std;

int add(int x, int y){
    return (x + y);
}
int sub(int x, int y){
    return (x - y);
}
int mul(int x, int y){
    return (x * y);
}
float division(float x, float y){
    return (x / y);
}

int main(){
        while (true){
            float num1, num2, res;
            int op;
            cout << "Enter 1st number: ";
            cin >> num1 ;
            cout << "Enter 2nd number: ";
            cin >> num2 ;

            cout << "Enter operation: 1.add 2.sub 3.mul 4.div: ";
            cin >> op;

            switch(op){
                case 1: res = add(num1, num2);
                        cout << "Addition is " << res << endl;
                break;
                case 2: res = sub(num1, num2);
                        cout << "Substraction is " << res << endl;
                break;
                case 3: res = mul(num1, num2);
                        cout << "Multiplication is " << res << endl;
                break;
                case 4: res = division(num1, num2);
                        cout << "Division is " << fixed << setprecision(2) << res << endl;
                break;
                default:
                    cout << "Invalid input\n";
            }
        }
    return 0;
}

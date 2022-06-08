#include <iostream>
using namespace std;

class temp{
    float fah, celcius;
    public:
    float convert(float fah);
};

float temp :: convert(float f){
    float celcius;
    celcius = ((f-32)/9)*5;
    return celcius;
}

int main(){
    float tFah;
    cout << "\nEnter temperture in Fahrenhite: ";
    cin >> tFah;

    temp myObj;
    cout << "The temperature in Celcius is ";
    cout << myObj.convert(tFah) << " *C";

    return 0;
}
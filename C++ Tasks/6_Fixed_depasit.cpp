//USING CONSTRUCTOR OVERLOADING
#include <iostream>
using namespace std;

class fixDep{
        long int principle;
        int years;
        float rate;
        float retValue;
    public:
        fixDep(){}  //Default constructor
        fixDep(int p, int y, int r);         //Declaring constructor where 'rate' parameter is 'int'
        fixDep(int p, int y, float R=0.12);  //Declaring constructor where 'rate' parameter is 'float'
        void display();
};

//If the rate is in percent(ex. 18%)
fixDep :: fixDep(int p, int y, int r){
    principle = p;
    years = y;
    rate = r;
    retValue = principle;
    for(int i=0; i<years; i++){
        retValue = retValue*(1.0 + float(r)/100);
    }
}

//If the rate is in decimal(ex. 0.18)
fixDep :: fixDep(int p, int y, float R){
    principle = p;
    years = y;
    rate = R;
    retValue = principle;
    for(int i=0; i<years; i++){
        retValue = retValue*(1 + rate);
    }
}

void fixDep :: display(){
    cout << "Return value is " << retValue;
}

int main(){
    long int p;
    int y;
    int r;   //rate in percent(18%)
    float R; //rate in decimal(0.18)

    //Creating three objects of fixDep type
    fixDep A, B, C;

    //Passing the 'rate' argument as 'int'
    cout << "Enter Principle, year, rate(in percent): ";
    cin >> p >> y >> r;

    A = fixDep(p, y, r);

    A.display();

    //Passing the 'rate' argument as 'float'
    cout << "\nEnter Principle, year, rate(in decimal): ";
    cin >> p >> y >> R;

    B = fixDep(p, y, R);

    B.display();

    //Here we are not passing 'rate' argument
    //So the default value of 'rate' i.e '0.12' is passed
    cout << "\nEnter Principle, year: ";
    cin >> p >> y;

    C = fixDep(p, y);

    C.display();

    return 0;
}
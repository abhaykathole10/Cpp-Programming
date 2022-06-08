#include <iostream>
using namespace std;

class Store{
    //These variables are private
    int quantity;
    float price;

    //Below methods are set to public
    //They have acccess to above private data members
    public:
    void setData(int a, float b){
        quantity = a;
        price = b;
    }
    void getData(){
        cout << "The quantity of the item is: " << quantity << endl;
        cout << "The price of the item is: " << price << endl;
    }

};

int main(){
    int i,x;
    float y;
    int size;

    cout << "Enter size of items you want: ";
    cin >> size;

    //Creating size number of objects and storing the addr of first obj in ptr
    Store* ptr = new Store[size];
    Store* temp = ptr;

    for(i=0; i<size; i++){
        cout<< "Enter quantity and price of item number " << i+1 << endl;

        cout<<"Quantity: "<<" ";
        cin >> x;
        cout<<"Price: ";
        cin >> y;

        ptr -> setData(x,y);
        ptr++;
    }
    //In above loop the ptr points to next addr of the array at the end "ptr++"
    //In last iteration the ptr will point to outside array location
    //So when we use ptr in below loop it will be pointing to that outside loaction
    //That's why we first declared temp which is equal to ptr i.e pointing to same location

    for(i=0; i<size; i++){
        cout<<"\n\n"<< "Data for item "<< i+1 << endl;
        temp -> getData();
        temp++;
    }
    //First, temp will point to same loc as ptr i.e 1st location
    //But this time the values of that locations are altered with "setData" method
    //So iterating through same path with temp we can get altered values using "getData" method

    return 0;
}
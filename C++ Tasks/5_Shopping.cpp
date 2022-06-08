#include <iostream>
using namespace std;

const int m = 50;
class items{
    int itemCode[m];
    float itemPrice[m];
    int count;
    public:
        void CNT(){             //Initializing count to 0
            count = 0;
        }
        void getItem();         //Declaring member functions
        void displaySum();
        void removeItem();
        void displayItems();
};

void items :: getItem(){        //Defining member functions
    cout << "Enter Item id: ";
    cin >> itemCode[count];
    cout << "Enter item price: ";
    cin >> itemPrice[count];
    count ++;
}
void items ::  displaySum(){
    float sum = 0;
    for(int i = 0; i < count; i ++){
        sum = sum + itemPrice[i];
    }
    cout << "Total Value of cart is " << sum;
    cout << "\n\n";
}
void items ::  removeItem(){
    int a;
    cout << "Enter item code: ";
    cin >> a;
    for(int i=0; i < count; i++){
        if(itemCode[i] == a){
            itemPrice[i] = 0;
        }
    }
    cout << "Item " << a << " deleted successfully!\n";
}
void items ::  displayItems(){
    cout << "\nItem id\tPrice";
    for(int i = 0; i < count ; i++){
        cout << "\n" << itemCode[i] << "\t" << itemPrice[i];
    }
    cout << "\n";
}
int main(){
    int ch;
    items order;    //Creating object(order) of class items
    order.CNT();    //Calling CNT function of class items using object and dot operator(.)

    cout << "Welcome to the shop\n";
    cout << "What would you like\n";

    do{
        cout << "\n1.Add item \n2.Display Sum \n3.Remove item \n4.Display items \n5.Quit";
        cout << "\nEnter your choice: ";
        cin >> ch;
        cout << "\n";
        switch(ch){
            case 1: order.getItem();
            break;
            case 2: order.displaySum();
            break;
            case 3: order.removeItem();
            break;
            case 4: order.displayItems();
            break;
            case 5: cout << "Thank You";
            break;
            default:
                cout << "Inavlid input\n";
        }
    }while(ch != 5);

    return 0;
}
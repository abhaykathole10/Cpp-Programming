#include<iostream>
#include<array>
using namespace std;

int main(){
    //Declaring Array<type,size> = {...elements...}
    array<int,10> myArray = {1,2,3,4,5,6,7,8,9,10};

    //size() function
    cout << "myArray can store upto max_Size() items: " << myArray.max_size();
    cout << "\n";

    //at(i) method
    cout << "myArray.at(i): ";
    for(int i=0; i<10; i++){
        cout << myArray.at(i) << " -> ";
    }
    cout << "\n";

    //We can also use operator[]
    cout << "myArray.at(2): " << myArray.at(2) << endl;      //or myArray[2];
    cout << "\n";

    //front() and back() method
    cout << "myArray.front(): " << myArray.front() << endl;  //1st element
    cout << "myArray.back(): " << myArray.back() << endl;    //last element
    cout << "\n";

    //empty() method
    cout << "Is array empty: " << myArray.empty() << endl;   //0 is false 1 is true
    cout << "\n";

    //data() method
    cout << "myArray.data() returns the address of first element: "<< myArray.data() << " -> " << *(myArray.data()) <<endl;
    cout << "\n";

    //Second Array
    array<int,5> newArray;

    cout << "newArray can store upto max_Size() items: " << newArray.max_size();
    cout << "\n";

    //fill() function
    newArray.fill(4);
    cout << "newArray.fill(4): ";
    for(int i=0; i<5; i++){
        cout << newArray.at(i) << " -> ";
    }
    cout << "\n";

    //********************************************************************//

    //Third Array

    //Array using begin() and end() functions
    array<int,3> thirdArray;

    cout << "We have created a thirdArray\n";

    for(auto it = thirdArray.begin(); it != thirdArray.end(); it++ ){
        cout << "Enter element: ";
        cin >> *it;
    }

    cout << "thirdArray is: ";
    for(auto it = thirdArray.begin(); it != thirdArray.end(); it++ ){
        cout << " " << *it;
    }
    cout << "\n\n";

    //********************************************************************//

    //Fourth Array
    //cbegin() and cend() functions
    //It returns constant_iterator i.e the values of the pointed objects cannot be changed
    array<int,5> fourthArray = {99, 66 ,33, 11, 88};

    cout << "We have created a fourthArray: ";
    for(auto it = fourthArray.cbegin(); it != fourthArray.cend(); it++ ){
        cout<< *it  << " " ;
    }
    cout << "\n\n";

    //Fifth array
    //Sixth array

    array<int,10> fifthArray = {1,2,3,4,5,6,7,8,9,10};
    array<int,6> sixthArray = {88,89,90,91,92,93};

    //using crbegin() and crend() functions
    cout << "Using crbegin() and crend() functions\n";
    cout << "The fifth array in reverse order is: ";
    for(auto it = fifthArray.crbegin(); it != fifthArray.crend(); it++){
        cout << *it << " " ;
    }
    cout << "\n\n";

    //using rbegin() and rend() functions
    cout << "Another method using rbegin() and rend() functions\n";
    cout << "The sixth array in reverse order is: ";
    for(auto it = sixthArray.rbegin(); it != sixthArray.rend(); it++){
        cout << *it << " " ;
    }
    cout << "\n\n";

    //Array seven
    //Array eight
    //Swap() method

    array<int,3> sevenArray = {1,2,3};
    array<int,3> eightArray = {11,22,33};

    cout << "Before Swapping\n";
    cout << "Array seven is: ";
    for(int i=0; i<3; i++){
        cout << sevenArray.at(i) << " -> ";
    }
    cout << "\n";
    cout << "Array eight is: ";
    for(int i=0; i<3; i++){
        cout << eightArray.at(i) << " -> ";
    }
    cout << "\n\n";

    eightArray.swap(sevenArray);

    cout << "After Swapping - eightArray.swap(sevenArray)\n";
    cout << "Array seven is: ";
    for(int i=0; i<3; i++){
        cout << sevenArray.at(i) << " -> ";
    }
    cout << "\n";
    cout << "Array eight is: ";
    for(int i=0; i<3; i++){
        cout << eightArray.at(i) << " -> ";
    }
    cout << "\n\n";
    return 0;
}
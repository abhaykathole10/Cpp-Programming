#include<iostream>
#include<vector>
using namespace std;

//OPERATIONS ON VECTORS ADD<REMOVE<DISPLAY
int main(){
    vector<int> v = {1,2,3};

    // 1. ADDING ELEMENTS

        cout << "\nInitial vector: ";
        for(const int& i : v){
            cout << i << "\t";
        }
        cout << "\n";

        //Using push_back() method      //Othee methods: insert() emplace()
        v.push_back(4);
        v.push_back(5);

        cout << "After Adding 4 and 5 by push_back() method\n";
        cout << "Updated vector: ";
        for(const int& i : v){
            cout << i << "\t";
        }
        cout << "\n\n\n";

    // 2. ACCESSING ELEMENTS

        //Using at() method
        cout << "Accesing elements using at(i)\n";
        cout << v.at(0) << "\t" << v.at(1) << "\t" << v.at(2) << "\t" << v.at(3) << "\t" << v.at(4) << "\n";

        //Using [] operator
        cout << "Accesing elements using operator[]\n";
        cout << v[0] << "\t" << v[1] << "\t" << v[2] << "\t" << v[3] << "\t" << v[4] << "\n\n\n";

    // 3. CHANGE/ UPDATE ELEMENTS

        cout << "Altering/ Changing/ Updating elements using at(i) method\n";
        cout << "Initial vector: ";
        for(const int& i : v){
            cout << i << "\t";
        }
        cout << "\n";

        v.at(0) = 11;
        v.at(1) = 12;
        v.at(2) = 13;
        // v.at(6) = 22; Error as it is out of range

        cout << "Updated vector: ";
        for(const int& i : v){
            cout << i << "\t";
        }
        cout << "\n\n\n";

    // 4. DELETING/ REMOVING ELEMENTS

        cout << "Deleting/ Removing the last element using pop_back() method\n\n";

            cout << "Initial vector: ";
            for(const int& i : v){
                cout << i << "\t";
            }
            cout << "\n";
                //CHECKING THE SIZE AND CAPACITY BEFORE DELETION
                //SIZE      //CAPACITY
                cout << "Vector Size: " << v.size() << "\tVector Capacity: " <<v.capacity() << "\n";
                cout << "\n";

            v.pop_back();

            cout << "Updated vector: ";
            for(const int& i : v){
                cout << i << "\t";
            }
            cout << "\n";
                //AFTER DELETING THE ELEMENT THE SIZE OF VECTOR CHANGES BUT THE CAPACITY REMAINS THE SAME
                //SIZE      //CAPACITY
                cout << "Vector Size: " << v.size() << "\tVector Capacity: " <<v.capacity() << "\n";
            cout << "\n\n";

        /*
        v.pop_back();
        v.pop_back();

        cout << "After 2 pop_back's\n";
        cout << "Updated vector: ";
        for(const int& i : v){
            cout << i << "\t";
        }
        cout << "\n\n";
        */

    // 5. VECTOR FUNCTIONS

        v.push_back(5);     //Getting the original vector
        cout << "Our vector: ";
        for(const int& i : v){
            cout << "\t" << i ;
        }
        cout << "\n\n";
        cout << "functions on vector\n";

        //SIZE
        cout << "Vector Size: " <<v.size() <<"\n";

        //CAPACITY
        cout << "Vector Capacity: " <<v.capacity() <<"\n";

        //FRONT
        cout << "Vector Front: " <<v.front() <<"\n";

        //BACK
        cout << "Vector Back: " <<v.back() <<"\n";

        //EMPTY
        cout << "Vector Empty: " <<v.empty() <<"\n\n";

        //CLEAR
            cout << "Vector Clear()\n";
            v.clear();

            cout << "Our vector: ";
            for(const int& i : v){
                cout << "\t" << i ;
            }
            cout << "\nAll elements are deleted";
            cout << "\n\n";

    return 0;
}
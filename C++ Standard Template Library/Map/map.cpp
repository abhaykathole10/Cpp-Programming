#include <iostream>
#include <map>
using namespace std;

int main(){
    //Creating a map with int as key and string as value
    map<int,string> m;

    //Adding elements
    m[1] = "Abhay";
    m[5] = "Dikshant";
    m[2] = "Ayur";
    m[18] = "Rushikesh";

    //Adding element using "insert" method
    m.insert({25, "Yash"});

    //Traversing
    for(auto i: m){
        cout << i.first << " " << i.second << endl;
    }

    //Deleting "value" using "key" - "erase" method
    m.erase(2);

    cout << "\nAfter m.erase(2)\n";
    for(auto i: m){
        cout << i.first << " " << i.second << endl;
    }

    //Travesing using a defined iterator
    cout << "\nTraversing using auto it = m.find(18)\n";
    auto it = m.find(18);
    for(auto i = it; i != m.end(); i++){
        cout << (*i).first << " " << (*i).second << endl;
    }
    return 0;
}
//One key should have only one value
//One value can have multiple keys
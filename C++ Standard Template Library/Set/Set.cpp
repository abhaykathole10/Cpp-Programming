#include <iostream>
#include <set>
using namespace std;

int main(){
    set <int> s;

    s.insert(1);
    s.insert(4);
    s.insert(2);
    s.insert(9);
    s.insert(5);
    s.insert(7);
    s.insert(23);

    for(auto i : s){
    cout << i << "  ";
    }cout << "\n\n";

    cout << "Is 23 present: " << s.count(23) << "\n";

    //Erasing the element directly
    cout<<"s.erase(23)\n";
    s.erase(23);

    for(auto i : s){
        cout << i << "  ";
    }cout << "\n";

    cout << "Is 23 present: " << s.count(23) << "\n";

    //Creating a iterator which initially points to 1st element
    set<int> :: iterator it = s.begin();

    it++;
    cout << "\nDeleting element using s.erase(it) where it=1\n";
    //erasing the element using iterator
    s.erase(it);

    for(auto i : s){
        cout << i << "  ";
    }

    //count() method is used to now if an element is present or not
    //TRUE = 1 ************** FALSE = 0
    cout << "\nIs 4 present: " << s.count(4) << "\n\n";

    //find() method is used to point the pointer to the specific index element
    cout << "Traversing using find(5) method\n";
    set<int> :: iterator itr = s.find(5);

    for(it=itr; it!=s.end();it++){
        cout << *it << "  ";
    }

    return 0;
}
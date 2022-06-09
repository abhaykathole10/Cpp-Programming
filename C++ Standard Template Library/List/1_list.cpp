#include <iostream>
#include <list>
using namespace std;

void showMe(list<int> g){
    //Creating an iterator "itr" to iterate through list
    list<int> :: iterator itr;

    cout << "List -> ";
    for(itr = g.begin(); itr != g.end(); itr++){    //BEGIN() AND END()
        cout << *itr << " ";
    }cout << endl;
}

int main(){
    //CREATING A LIST OF 'INT' TYPE NAME "L"
    list<int> l;

    //PUSH_BACK
    cout << "\npush_back()\n";
    l.push_back(1);
    showMe(l);
    l.push_back(2);
    showMe(l);
    l.push_back(3);
    showMe(l);

    //PUSH FRONT
    cout << "\npush_front()\n";
    l.push_front(4);
    showMe(l);
    l.push_front(5);
    showMe(l);

    cout << "\nl.front(): " << l.front() << endl;
    cout << "l.back(): " << l.back() << endl;

    //REVERSING THE LIST
    cout << "\nReversing the list\n";
    l.reverse();
    showMe(l);

    //SIZE OF THE LIST
    cout << "\nSize of List: ";
    cout << l.size() << endl;

    //POP FRONT
    cout << "\npop_front()\n";
    l.pop_front();
    showMe(l);

    //SIZE OF THE LIST
    cout << "\nSize of List: ";
    cout << l.size() << endl;

    //POP BACK
    cout << "\npop_back()\n";
    l.pop_back();
    showMe(l);

    //SIZE OF THE LIST
    cout << "\nSize of List: ";
    cout << l.size() << endl;

    cout << "\nAfter erasing the list\n";
    l.erase(l.begin(), l.end());
    showMe(l);

    //SIZE OF THE LIST
    cout << "\nSize of List: ";
    cout << l.size() << endl;

    cout << "\nAll List elements are deleted\n\n";

    return 0;
}
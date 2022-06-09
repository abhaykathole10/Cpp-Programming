//Double ended Queue - Insertion and Deletion possible from both the ends
#include <iostream>
#include <deque>
using namespace std;

void showMe(deque<int> g){
    deque<int> :: iterator itr;
    for(itr = g.begin(); itr != g.end(); itr++){
        cout << *itr << "\t";
    }
    cout << "\n";
}

int main(){
    deque<int> d;

    //ADDING ELEMENTS TO THE BACK
    cout << "push_back(1)\n";
    d.push_back(1);
    showMe(d);

    cout << "push_back(2)\n";
    d.push_back(2);
    showMe(d);

    cout << "push_back(3)\n";
    d.push_back(3);
    showMe(d);

    //ADDING ELEMENTS TO THE FRONT
    cout << "push_front(4)\n";
    d.push_front(4);
    showMe(d);

    cout << "push_front(5)\n";
    d.push_front(5);
    showMe(d);

    cout << "\nDeque Size: " << d.size() << "\n";
    cout << "Deque front: " << d.front() << "\n";
    cout << "Deque back: " << d.back() << "\n";
    cout << "Deque max_size: " << d.max_size() << "\n\n";

    showMe(d);

    //DELETING ELEMENTS TO THE BACK
    cout << "pop_back()\n";
    d.pop_back();
    showMe(d);

    //DELETING ELEMENTS TO THE FRONT
    cout << "pop_front()\n";
    d.pop_front();
    showMe(d);

    cout << "\nDeque Size: " << d.size() << "\n";
    cout << "Deque front: " << d.front() << "\n";
    cout << "Deque back: " << d.back() << "\n";
    cout << "Deque max_size: " << d.max_size() << "\n\n";

    //DELETING ALL ELEMENTS
    cout << "Applying d.clear(): ";
    d.clear();
    cout << "\nThe deque is: ";
    showMe(d);
    cout<< "\nIt's deleted\n\n";

    return 0;
}
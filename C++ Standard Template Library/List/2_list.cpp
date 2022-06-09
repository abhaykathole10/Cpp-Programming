#include <iostream>
#include <list>
using namespace std;

void showMe(list<int> g){
    list<int> :: iterator itr;
    for(itr = g.begin(); itr != g.end(); itr++){    //BEGIN() AND END()
        cout << *itr << "\t";
    }cout << endl;
}

int main(){
    list<int> l = {1,2,3,4,5};
    list<int> m = {11,22,33,44,55};

    cout << "List l: ";
    showMe(l);
    cout << "List m: ";
    showMe(m);

    //MERGE() METHOD
    cout << "\nl.merge(m)\n";
    l.merge(m);
    showMe(l);

    //ITERATOR
    list<int> :: iterator it;
    it = l.begin();   // it = 1
    ++it;               // it = 2

    //SPLICE() METHOD

    cout << "\nl.splice(it,m) it=2\n";
    l.splice(it,m);

    cout << "List l: ";
    showMe(l);
    cout << "List m: ";
    showMe(m);

    cout << "\nm.splice(m.begin(), l, it) it=2\n";
    m.splice(m.begin(), l, it);

    cout << "List l: ";
    showMe(l);
    cout << "List m: ";
    showMe(m);

    return 0;

}
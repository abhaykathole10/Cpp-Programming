#include <iostream>
#include <queue>
using namespace std;

void showQueue(queue<int> a){

    if(a.empty()){
        return;
    }
    else{
        int x = a.front();
        cout << a.front() << "  ";
        a.pop();
        showQueue(a);
        a.push(x);
    }
}

int main(){
    //CREATION OF A QUEUE
    queue<int> q;

    //PUSH() METHOD
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    showQueue(q);

    cout << "\nFront of queue is " << q.front() << endl;
    cout << "back of queue is " << q.back() << endl;

    //SIZE() METHOD
    cout << "The size of queue is " << q.size() <<"\n\n";

    //POP() METHOD
    q.pop();

    showQueue(q);

    cout << "\nFront of queue is " << q.front() << endl;
    cout << "back of queue is " << q.back() << endl;

    //SIZE() METHOD
    cout << "The size of queue is " << q.size() <<"\n\n";

    //POP() METHOD
    q.pop();

    showQueue(q);

    cout << "\nFront of queue is " << q.front() << endl;
    cout << "back of queue is " << q.back() << endl;

    return 0;
}
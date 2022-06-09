#include <iostream>
#include <queue>
using namespace std;

//MAX HEAP PRIORITY QUEUE
void showMyQueue(priority_queue<int> g){
    cout << "Priority Queue(max heap):   ";
    while(!g.empty()){
        cout<< g.top() << "  " ;
        g.pop();
    }cout << "\n";

}

int main(){
    //CREATION OF MAX HEAP P QUEUE
    priority_queue<int> p;

    //PUSH() METHOD
    p.push(2);
    p.push(4);
    p.push(1);
    p.push(3);
    p.push(5);

    //SIZE() METHOD
    showMyQueue(p);
    cout << "The size of p queue is " << p.size();

    //POP() METHOD
    p.pop();

    cout << "\n\nAfter p.pop()";
    showMyQueue(p);

    //SIZE() METHOD
    cout << "The size of p queue is " << p.size();

    //EMPTY() METHOD
    cout << "\n\nIs the queue empty?? Ans: " << p.empty();

    return 0;

}
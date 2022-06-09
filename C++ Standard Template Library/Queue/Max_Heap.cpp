#include <iostream>
#include <queue>
using namespace std;

//MAX HEAP PRIORITY QUEUE
void showMyQueue(priority_queue<int> g){
    cout << "Priority Queue(max heap):   ";
    while(!g.empty()){
        cout<< g.top() << "    " ;
        g.pop();
    }cout << "\n";

}
int main(){
    priority_queue<int> maxH;

    cout<< "\nInsertion operations using push() method\n";

    maxH.push(3);
    showMyQueue(maxH);
    maxH.push(5);
    showMyQueue(maxH);
    maxH.push(2);
    showMyQueue(maxH);
    maxH.push(7);
    showMyQueue(maxH);
    maxH.push(9);
    showMyQueue(maxH);

    cout<<"\nisEmpty(): " << maxH.empty();

    cout<< "\nDeletion operations using pop() method\n";

    maxH.pop();
    showMyQueue(maxH);
    maxH.pop();
    showMyQueue(maxH);
    maxH.pop();
    showMyQueue(maxH);
    maxH.pop();
    showMyQueue(maxH);
    maxH.pop();
    showMyQueue(maxH);

    cout<<"\nisEmpty(): " << maxH.empty();

    return 0;
}
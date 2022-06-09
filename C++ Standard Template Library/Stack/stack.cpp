#include <iostream>
#include <stack>
using namespace std;

void printStack(stack<int> g){
    if (g.empty()){             //EMPTY() METHOD
        return;
    }else{
        int x = g.top();
        cout << x << "\n";
        g.pop();
        printStack(g);
        g.push(x);
    }
}

int main(){
    //CREATION OF STACK
    stack<int> s;

    //PUSH()
    s.push(1);
    cout << "\ns.push(1)\n";
    cout << "The Stack is\n";
    printStack(s);

    s.push(2);
    cout << "\ns.push(2)\n";
    cout << "The Stack is\n";
    printStack(s);

    s.push(3);
    cout << "\ns.push(3)\n";
    cout << "The Stack is\n";
    printStack(s);

    s.push(4);
    cout << "\ns.push(4)\n";
    cout << "The Stack is\n";
    printStack(s);

    s.push(5);
    cout << "\ns.push(5)\n";
    cout << "The Stack is\n";
    printStack(s);

    //SIZE()
    cout << "\nThe size of stack is: " << s.size();

    //TOP()
    cout << "\nThe top element is: " << s.top();

    //POP()
    s.pop();
    cout << "\n\ns.pop()\n";
    cout << "The Stack is\n";
    printStack(s);

    s.pop();
    cout << "\ns.pop()\n";
    cout << "The Stack is\n";
    printStack(s);

    //SIZE()
    cout << "\nThe size of stack is: " << s.size();

    //TOP()
    cout << "\nThe top element is: " << s.top();

    return 0;
}
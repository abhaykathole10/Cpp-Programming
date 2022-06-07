#include <iostream>
using namespace std;

//void/ Genric pointer accepts any kind of pointer
void print(void* ptr, char type){
    switch(type){
        case 'i':
            //first typecasting and then dereferencing
            //void to int
            cout << *(int*)ptr << endl;
            break;
        case 'c':
            //void to char
            cout << *(char*)ptr << endl;
            break;
    };
}

int main(){
    int num = 5;
    char wor = 'f';

    int* ptr1 = &num;
    char* ptr2 = &wor;

    print(ptr1, 'i');
    print(ptr2, 'c');

    return 0;
}

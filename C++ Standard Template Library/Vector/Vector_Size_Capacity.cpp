#include<iostream>
#include<array>
#include<vector>
using namespace std;

//Understanding the size and capacity changes in vector as we add elements
//CAPACITY : HOW MUCH MEMORY IS ASSIGNED TO THE VECTOR
//SIZE : HOW MANY ELEMENTS ARE THERE IN THE VECTOR

int main(){
    // array<int, 2> a = {1,2,3,4};   //capacity is overflowed so it will show error
    // cout << "Size: " << a.size();

    vector<float> v;
    cout << "Capacity: " << v.capacity() << " Size: " << v.size() << endl;

    cout << "After pushing an element\n";

    v.push_back(1);

    cout << "Capacity: " << v.capacity() << endl;
    cout << "Size: " << v.size() << endl;

    cout << "After pushing an element\n";

    v.push_back(2);

    cout << "Capacity: " << v.capacity() << endl;
    cout << "Size: " << v.size() << endl;

    cout << "After pushing an element\n";

    v.push_back(3);

    cout << "Capacity: " << v.capacity() << endl;
    cout << "Size: " << v.size() << endl;

    cout << "After pushing an element\n";

    v.push_back(4);

    cout << "Capacity: " << v.capacity() << endl;
    cout << "Size: " << v.size() << endl;

    cout << "After pushing an element\n";

    v.push_back(5);

    cout << "Capacity: " << v.capacity() << endl;
    cout << "Size: " << v.size() << endl;
//*********************************************************************************************************

    //Size and Capacity changes

    vector<float> vec;

    for(int i=0; i<10; i++){
        vec.push_back(i);
        cout << "Size: " << vec.size() << " Capcaity: " << vec.capacity() <<"\n";
    }

    return 0;
}
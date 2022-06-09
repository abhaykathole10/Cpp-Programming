#include<iostream>
#include<vector>
using namespace std;

//INITIALIZATION OF VECTORS- DIFFERENT WAYS
int main(){
    //Vector 1
        //Declaration type 1
        vector<int> v1;

        v1.push_back(11);
        v1.push_back(12);
        v1.push_back(13);
        v1.push_back(14);
        v1.push_back(15);
        v1.push_back(16);

        //printing vector
        cout << "\nVector 1(v1): ";
        for(const int& i : v1){
            cout << i <<" -> ";
        }
        cout << "\n";

        //front() and back() methods like in array
        cout << "v1.front(): " << v1.front() <<endl;
        cout << "v1.back(): " << v1.back() <<endl;
        cout << "\n\n";

    //********************************************************************************//

    //Vector 2
        //Declaration type 2
        vector<int> v2 = {1,2,3};

        cout << "Vector 2(v2): ";
        for(const int& i : v2){
            cout << i <<" -> ";
        }
        cout << "\n\n";

    //********************************************************************************//

    //Vector 3
        //Declaration type 3
        vector<int> v3{5,6,7};

        cout << "Vector 3(v3): ";
        for(const int& i : v3){
            cout << i <<" -> ";
        }
        cout << "\n\n";

    //********************************************************************************//

    //Vector 4
        //Declaration type 4
        vector<int> v4(5,3);

        cout << "Vector 4(v4): ";
        for(const int& i : v4){
            cout << i <<" -> ";
        }
        cout << "\n\n";

    return 0;
}
#include<iostream>
#include<cstring>   //To use "strlen" "strcpy" "strcat" methods
using namespace std;

class String{
    //"name" is pointer to a 'char' variable
    char *name;
    int length;
    public:

        //Default Constructor
        String(){
            length = 0;
            name = new char[length + 1];
        }

        String(const char* x){

            //Tell me the length of the string
            length = strlen(x);

            //Allot memory with size "length + 1" to store "x" + "\0"
            //And return the pointer to "name"
            name = new char[length + 1];

            //Copy the contents of "x" to "name"
            strcpy(name, x);
        }

        //Declaring "join" function that takes "String" objects as parameters
        void join(String &, String &);

        void display(){
            cout << name << "\n";
        }
};

void String :: join(String &j, String &k){

    //Tell me the total length required
    length = j.length + k.length;

    //First delete the old name
    delete name;

    //Alloting a memory of given length
    name = new char[length + 1];

    //Copy the contents of "j.name" to "name"
    strcpy(name, j.name);

    //Concatenate "name" with "k.name"
    strcat(name, k.name);
}

int main(){
    const char *p = "Abhay ";

    String A(p), B("Deepak "), C("Kathole"), D, E;

    D.join(A , B);
    E.join(D , C);

    A.display();
    B.display();
    D.display();
    E.display();

    return 0;
}
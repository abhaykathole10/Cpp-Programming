#include <iostream>
#include <list>
#include <string>

using namespace std;

class footballPlayer{

    private:                //Private members cannot be acceseed from outside class
        int Age;            //These properties should always be kept private
        string Position;
        list<string> Teams;

    protected:              //Protected members can be accessed by the derived class
        string Name;        //We want "Name" in our cricketPlayer class in the marriedTo method

    //In order to manipulate the private members we have to create public methods which will change the data
    public:
        footballPlayer(string name, int age, string position){
            Name = name;
            Age = age;
            Position = position;
        }

        void addTeam(string club){
            Teams.push_back(club);
        }

        void getInfo(){
            cout << Name << " is " << Age << " years old, and plays as a "
            << Position << endl << "He has played for: " << endl;
            for(string teams : Teams){
                cout <<"\t" << teams << endl;
            }
        }
};

//Inheriting from the footballPlayer class
class cricketPlayer : public footballPlayer{

    // Inheriting the already declared constructor of footballPlayer class to use in cricketPlayer class
    // as the base class constructor knows how to invoke and initialize the parametres passed
    public:
        cricketPlayer(string name, int age, string position) : footballPlayer(name, age, position){

        }

    //Adding a new independent method to our new class
        void marriedTo(string wife){
            cout << Name << " is married to " << wife << "\n"; //Here "Name" is protected that's why accessible, if private than not accessible
        }
};

int main(){
    //Creating object of class footballPlayer class
    footballPlayer p1("Ronaldo", 37, "Striker");

    //Adding items to our list
    p1.addTeam("Sporting Lisbon");
    p1.addTeam("Manchester United");
    p1.addTeam("Real Madrid");
    p1.addTeam("Juventus");

    //Calling the getInfo method
    p1.getInfo();

    //Creating another object of footballPlayer class
    footballPlayer p2("Messi", 35, "False 9");

    p2.addTeam("Barcelona");
    p2.addTeam("Paris Saint Germain");

    p2.getInfo();

    //Creating a object of cricketPlayer class
    cricketPlayer c1("Kohli", 32 , "Batsman");
    c1.addTeam("India");
    c1.addTeam("Royal Challengers Bangalore");

    //Calling a method declared in footballPlayer, but derived in cricketPlayer through inheritance
    c1.getInfo();

    //Calling a method declared in cricketPalyer class, which is inaccesible to footballPLayer class
    c1.marriedTo("Anushka Sharma");

    return 0;
}
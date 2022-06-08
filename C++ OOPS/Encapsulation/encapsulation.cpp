#include <iostream>
#include <list>
#include <string>

using namespace std;

class footballPlayer{

private:                //As it is private it cannot be acceseed from outside class
    string Name;        //These properties shpuld always be kept private
    int Age;
    string Position;
    list<string> Teams;

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

int main(){
    footballPlayer p1("Ronaldo", 37, "Striker");

    p1.addTeam("Sporting Lisbon");
    p1.addTeam("Manchester United");
    p1.addTeam("Real Madrid");
    p1.addTeam("Juventus");

    p1.getInfo();

    footballPlayer p2("Messi", 35, "False 9");

    p2.addTeam("Barcelona");
    p2.addTeam("Paris Saint Germain");

    p2.getInfo();

    return 0;
}
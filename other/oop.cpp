#include<bits/stdc++.h>
using namespace std;

class Player{
    
    //attributes that are private by default
    int id;
    string name;
    string team;

    public:
    //public functions for setting attributes
    void setId(int ID);
    void setName(string n);
    void setTeam(string t);

    //public functions for getting attributes
    int getId();
    string getName();
    string getTeam();

    //constructor declaration 
    Player(int id, string name, string team);


};

//constructor body 
Player::Player(int id, string name, string team){
    this->id = id;
    this->name = name;
    this->team = team;
}

//function body 
int Player::getId(){
   return this->id; 
}

string Player::getName(){
    return this->name;
}

string Player::getTeam(){
    return this->team;
}

void Player::setId(int ID){
    this->id = ID;
}

void Player::setName(string n){
    this->name = n;
}

void Player::setTeam(string t){
    this->team = t;
}


int main(int argc, char const *argv[])
{
    Player* player1 = new Player(1,"Ibrahim","BlueHawks");
    player1->setTeam("WhiteTigers");
    cout<<"ID: "<<player1->getId()<<endl;
    cout<<"Name: "<<player1->getName()<<endl;
    cout<<"Team: "<<player1->getTeam()<<endl;
    delete player1;
    return 0;
}


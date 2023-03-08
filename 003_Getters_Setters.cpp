#include<iostream>
using namespace std;

class Hero{

private:
    // properties (variables)
    int health;

public:
    char level;

    // behavior (functions)
    // getters

    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    // setters
    
    void setHealth(int h){
        health = h;
    }

    void setLevel(char l){
        level = l;
    }
};

int main(){

    // Object creation
    Hero h1;

    // h1.health = 90; // private member (not directly accessible)
    // using getters and setters
    h1.setHealth(90);
    cout << "Health : " << h1.getHealth() << endl;
    
    h1.level = 'A'; // public member (directly accessible)

    cout << "Level : " << h1.getLevel();


    return 0;
}
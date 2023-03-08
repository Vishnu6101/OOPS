#include<iostream>
using namespace std;

class Hero{

private:
    // properties (variables)
    int health;

public:
    char level;
    
    // Constructor
    Hero(){
        cout << "Constructor is called" << endl;
    }

    // Parameterized Constructor and this keyword
    Hero(int health){
        // health = health; // stores health in itself
        this->health = health; // stores health in the class variable
    }
    
    Hero(int health, char level){
        // health = health; // stores health in itself
        this->health = health; // stores health in the class variable
        this->level = level;
    }

    // Copy constructor
    Hero(Hero& obj){
        cout << "Copy constructor called" << endl;
        this->health = obj.health;
        this->level = obj.level;
    }

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

    // static memory allocation
    Hero h1;
    h1.setHealth(100);
    h1.setLevel('B');

    cout << "Health : " << h1.getHealth() << endl;
    cout << "Level : " << h1.getLevel() << endl;

    Hero h3(40);
    h3.setLevel('C');

    cout << "Health : " << h3.getHealth() << endl;
    cout << "Level : " << h3.getLevel() << endl;

    // Dynamic memory Allocation
    Hero *h2 = new Hero(50);
    h2->setLevel('A');

    // using arrow operator
    cout << "Health : " << h2->getHealth() << endl;
    cout << "Level : " << h2->getLevel() << endl;

    // default copy constructor
    Hero h4(h1);
    cout << "Health : " << h4.getHealth() << endl;
    cout << "Level : " << h4.getLevel() << endl;
    
    
    return 0;
}
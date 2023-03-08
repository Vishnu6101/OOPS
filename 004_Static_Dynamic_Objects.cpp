#include<iostream>
using namespace std;

class Hero{

private:
    // properties (variables)
    int health;

public:
    char level;
    
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

    // Dynamic memory Allocation
    Hero *h2 = new Hero;
    h2->setHealth(50);
    h2->setLevel('A');

    // using dereferene operator
    cout << "Health : " << (*h2).getHealth() << endl;
    cout << "Level : " << (*h2).getLevel() << endl;

    // using arrow operator
    cout << "Health : " << h2->getHealth() << endl;
    cout << "Level : " << h2->getLevel() << endl;
    
    return 0;
}
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

    ~Hero(){
        cout << "Destructor is called" << endl;
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
    Hero h1; // destructor is automatically called

    // Dynamic
    Hero *h2 = new Hero();

    // for dynamic memory allocation destructor has to be called manually
    delete h2;

    return 0;
}
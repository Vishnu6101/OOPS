#include<iostream>
using namespace std;

class Hero{

private:
    // properties (variables)
    int health;

public:
    char level;
    char *name;
    static int timeToComplete; // static member
    // belongs to the class not the object so 
    
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

    // static function 
    // can only access static members
    static int random(){
        cout << "Static Function" << endl;
        return timeToComplete;
    }
};

// static member initialization

int Hero::timeToComplete = 5;

int main(){

    cout << Hero::timeToComplete << endl;
    cout << Hero::random() << endl;

    Hero a;
    cout << a.timeToComplete << endl; // not recommended but works fine
    // as static member does not belongs to an object it belongs to that class

    Hero b;
    b.timeToComplete = 10;

    cout << Hero::timeToComplete << endl; // 10
    cout << a.timeToComplete << endl; // 10
    cout << b.timeToComplete << endl; // 10

    return 0;
}
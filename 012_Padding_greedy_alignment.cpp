#include<iostream>
using namespace std;

#pragma pack(1)

class Hero{

private:
    int health;

public:
    char level;

    Hero(){
        cout << "Constructor is called" << endl;
    }

    Hero(int health, char l){
        this->health = health;
        this->level = l;
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

    Hero h1(70, 'A');
    cout << "Size of the class : " << sizeof(h1) << endl; // 8 because of padding
    // padding is done so that the CPU can read the data smoothly

    // greedy alignment -- removes padding (not recommended)
    // use preprocessor #pragma pack(1)
}
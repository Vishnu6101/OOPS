#include<iostream>
using namespace std;

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

    void print(){
        cout << endl;
        cout << "Health : " << this->health << ", ";
        cout << "Level : " << this->level << endl;
        cout << endl;
    }

    // const member function
    void print() const{
        cout << endl;
        cout << "Health : " << this->health << ", ";
        cout << "Level : " << this->level << endl;
        cout << endl;
    }
};

int main(){

    Hero h1(70, 'A');
    h1.print(); // normal print function is called

    // const object creation 
    const Hero h2(100, 'C');
    // const objects can only call const functions
    h2.print(); // const print() is called here

    return 0;
}
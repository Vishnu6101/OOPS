#include<iostream>
#include<string.h>
using namespace std;

class Hero{

private:
    // properties (variables)
    int health;

public:
    char level;
    char *name;
    // char name[100]; -- don't do it is not a good practice

    Hero(){
        cout << "Constructor Called" << endl;
        name = new char[100]; // heap memory allocation (dynamic)
    }

    // Copy constructor
    Hero(Hero& obj){

        char *ch = new char[strlen(obj.name)];
        strcpy(ch, obj.name);
        this->name = ch;

        cout << "Copy constructor called" << endl;
        this->health = obj.health;
        this->level = obj.level;
    }

    void print(){
        cout << endl;
        cout << "Name : " << this->name << ", ";
        cout << "Health : " << this->health << ", ";
        cout << "Level : " << this->level << endl;
        cout << endl;
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

    void setName(char name[]){
        strcpy(this->name, name);
    }
};

int main(){

    Hero h1;
    h1.setHealth(16);
    h1.setLevel('A');
    char name[10] = "Vishnu";
    h1.setName(name);

    h1.print();

    // use defined copy constructor -- deep copy
    Hero h2(h1);
    // Hero h2 = h1;
    h2.print();

    h1.name[0] = 'A';
    h1.print();

    h2.print();

    // deep copy -- different memory


    // Copy Assignment Operator
    h1 = h2; // if you have two objects use can copy it
    h1.print();
    h2.print();

    return 0;
}
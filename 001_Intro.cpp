#include<iostream>
using namespace std;

class Hero{

public:
    // properties (variables)
    int health;

    // behavior (functions)
};


int main(){

    // Object creation
    Hero h1;

    // size is the size of all the properties
    cout << "size : " << sizeof(h1) << endl;
    // for empty class, size is 1 byte

    // garbage value
    cout << h1.health;

    return 0;
}
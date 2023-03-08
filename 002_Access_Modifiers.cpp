#include<iostream>
using namespace std;

// class Hero{

// public:
//     // properties (variables)
//     int health;

// private:
//     char level;

// public: // if this is private then print() cannot be accessed from main()
//     void print(){
//         cout << level << endl;
//     }
//     // behavior (functions)
// };

class Hero{
public:
    int health;
    char level;

    void print(){
        cout << "Health : " << health << endl;
        cout << "Level : " << level << endl;
    }
};


int main(){

    // Object creation
    Hero h1; // all property and behavior are public

    h1.health = 90;
    h1.level = 'A';

    h1.print(); // public function

    return 0;
}
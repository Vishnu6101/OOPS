#include<iostream>
using namespace std;

// Rules for RT Polymorphism
// 1. same function name
// 2. same parameters
// 3. Inheritance

class Animal{
    public:
        void speak(){
            cout << "Speaking" << endl;
        }
};

class Dog : public Animal{
    public:
        void speak(){
            cout << "Barking" << endl;
        }

        // if the above function is not implemented then the base class speak()
        // will be called
};

int main(){

    Dog d1;
    d1.speak();
    return 0;
}
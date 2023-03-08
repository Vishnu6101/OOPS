#include<iostream>
using namespace std;

class Animal{
    
    public:
        int age;
        int weight;

    public:
        void bark(){
            cout << "Animal Barking" << endl;
        }
};

class Human{
    public:
        string color;
    
    public:
        void speak(){
            cout << "Human Speaking" << endl;
        }
};

class multipleInher : public Animal, public Human{

};

int main(){

    multipleInher obj1;
    obj1.speak();
    obj1.bark();
    return 0;
}
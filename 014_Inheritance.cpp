#include<iostream>
using namespace std;

class Human{

    public:
        int height;
        int weight;
        int age;
    
    public:
        int getAge(){
            return this->age;
        }

        void setWeight(int w){
            this->weight = w;
        }
};

// Inheritance
class Male : public Human{

    public:
        string color;

    public:
        void sleep(){
            cout << "Male Sleeping" << endl;
        }
};

int main(){

    Male m1;
    // age, weight, height is in Human class but also accessible using Male class
    // due to inheritance
    cout << m1.age << endl;
    cout << m1.weight << endl;
    cout << m1.height << endl;


    cout << m1.color << endl;
    m1.sleep();

    m1.setWeight(50);
    cout << m1.weight << endl;
    
    return 0;
}
#include<iostream>
using namespace std;

class Human{

    protected:
        int height; // public
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
class Male : public Human{ // public mode inheritance

    public:
    // height, weight, age -- protected
    // getAge, setWeight will be public
    // can be accessed inside this class and its derived class
        string color;

    public:
        void sleep(){
            cout << "Male Sleeping" << endl;
        }
};

class Male_prot : protected Human{ // protected mode inheritance

    public:
    // height, weight, age, getAge, setWeight will be protected
        string color;

    public:
        void sleep(){
            cout << "Male Sleeping" << endl;
        }

        int getHeight(){
            return this->height; // protected member
        }
};

class Male_pri : private Human{ // private mode inheritance

    public:
    // height, weight, age, getAge, setWeight will be private
        string color;

    public:
        void sleep(){
            cout << "Male Sleeping" << endl;
        }

        int getAgePrivate(){
            return this->getAge();
        }
};

int main(){

    Male m1;
    // cout << m1.height << endl;
    // height is protected member of Male so cannot be accessed
//     error: ‘int Human::height’ is protected within this context
//    71 |     cout << m1.height << endl;

    Male_prot m2;
//     cout << m2.height << endl; 
//     error: ‘int Human::height’ is protected within this context
//    77 |     cout << m2.height << endl;
    cout << m2.getHeight() << endl;

    Male_pri m3;
    // cout << m3.height << endl; 
    // private members cannot be accessed

    // getAge() is also a private member
    // cout << m3.getAge() << endl;
    
    // but we can access getAge() inside the Male_pri class using another function
    cout << m3.getAgePrivate() << endl;
    
    return 0;
}
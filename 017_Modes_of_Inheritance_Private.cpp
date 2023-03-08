#include<iostream>
using namespace std;

class Human{

    private:
        int height;
        int weight;
        int age;
    
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
        string color;

    public:
        void sleep(){
            cout << "Male Sleeping" << endl;
        }
};

class Male_prot : protected Human{ // protected mode inheritance

    public:
        string color;

    public:
        void sleep(){
            cout << "Male Sleeping" << endl;
        }

        int getHeight(){
            return this->height; // not accessible
        }
        // error: ‘int Human::height’ is private within this context
//    43 |             return this->height; // not accessible
};

class Male_pri : private Human{ // private mode inheritance

    public:
        string color;

    public:
        void sleep(){
            cout << "Male Sleeping" << endl;
        }

        int getAgePrivate(){
            return this->getAge(); // not accesible
        }

//         error: ‘int Human::getAge()’ is private within this context
//    58 |             return this->getAge(); // not accesible
};

int main(){

    Male m1;

    Male_prot m2;

    Male_pri m3;
    
    return 0;
}
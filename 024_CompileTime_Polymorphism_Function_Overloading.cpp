#include<iostream>
using namespace std;

class A{

    public:
        void sayHello(){
            cout << "Hello" << endl;
        }

//         void sayHello(){
//             cout << "Hello" << endl;
//         }

//         error: ‘void A::sayHello()’ cannot be overloaded with ‘void A::sayHello()’
//    11 |         void sayHello(){
//       |              ^~~~~~~~

        void sayHello(string name){
            cout << "Hello " << name << endl;
        }

//         int sayHello(string name){
//             cout << "Hello " << name << endl;
//             return 1;
//         }
//         error: ‘int A::sayHello(std::string)’ cannot be overloaded with ‘void A::sayHello(std::string)’
//    23 |         int sayHello(string name){

        void sayHello(string name, int age){
            cout << "Hello " << name << age << endl;
        }
};

int main(){

    A a;
    a.sayHello();
    a.sayHello("Vishnu");
    a.sayHello("Vishnu", 20);

    return 0;
}
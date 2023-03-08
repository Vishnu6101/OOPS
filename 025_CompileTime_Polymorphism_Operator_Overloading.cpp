#include<iostream>
using namespace std;

class A{
    public:
        int num;

        // Overloading + operator
        void operator+ (A& obj){
            cout << "Subtraction of two numbers : " << this->num - obj.num << endl;
        }

        // Overloading () operator
        void operator() (){
            cout << "Overloaded Brackets " << this->num << endl;
        }

        // Overloading ::
//         void operator:: (){
//             cout << "Trying to Overlaod Scope Resolution Operator" << endl;
//         }
//          error: expected type-specifier before ‘::’ token
//    19 |         void operator:: (){
//       |                      ^~
};

int main(){

    A obj1, obj2;

    obj1.num = 10;
    obj2.num = 1;
    
    obj1 + obj2;

    obj1();
    obj2();

    return 0;
}
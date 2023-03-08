#include<iostream>
using namespace std;

class A{
    public:
        void func(){
            cout << "A Class" << endl;
        }
};


class B{
    public:
        void func(){
            cout << "B Class" << endl;
        }
};

class C : public A, public B{
};

int main(){

    C obj;
//     obj.func();
//     error: request for member ‘func’ is ambiguous
//    25 |     obj.func();

    // use :: to solve ambiguity
    obj.A::func();
    obj.B::func();
    return 0;
}
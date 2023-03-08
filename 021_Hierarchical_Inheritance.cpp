#include<iostream>
using namespace std;

class A{
    public:
        void func1(){
            cout << "Inside Function 1" << endl;
        }
};

class B : public A{
    public:
        void func2(){
            cout << "Inside Function 2" << endl;
        }
};

class C : public A{
    public:
        void func3(){
            cout << "Inside Function 3" << endl;
        }
};

int main(){

    A obj1;
    obj1.func1();

    B b;
    b.func1();
    b.func2();
    // no func3()

    C c;
    c.func1();
    c.func3();
    // no func2()

    return 0;
}
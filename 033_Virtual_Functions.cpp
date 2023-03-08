#include<iostream>
using namespace std;

class Shape{
    
    public:
        double base, height;

        Shape(double a, double b){
            this->base = a;
            this->height = b;
        }

        // we don't know what shape it is so we cannot write a function here
        virtual double area(){
            cout << "Base class area function ";
            return 0;
        }
};

class Triangle : public Shape{
    public:
        Triangle(double a, double b) : Shape(a, b){}
        // passing the param to shape class using member initializer list
        // shape class constructor will be called

        double area(){
            cout << "Traingle Area ";
            return this->base * this->height / 2;
        }

};

class Rectangle : public Shape{
    public:
        Rectangle(double a, double b) : Shape(a, b) {}

        double area(){
            cout << "Rectangle Area ";
            return this->base * this->height;
        }
};

int main(){

    Triangle t(10.0, 20.0);
    cout << t.area() << endl; // calls triangle area()
    // static or early binding
    // at compile time the object knows which function to call

    Rectangle r(10., 20.);
    cout << r.area() << endl; // calls rect area()

    Shape *s; // s is a pointer to shape class
    s = &t; // assigning the reference of t to s
    cout << s->area() << endl; // calls the base class area() if not virtual

    s = &r;
    cout << s->area() << endl; // calls the base class area() if not virtual

    // what is needed is if s points the triangle obj then s needs to call
    // triangle->area() and if s points the rect obj then s needs to call
    // rect->area()

    // make the base class funciton virtual

    // This phenomena is called dynamic binding or late binding
    // which can be only achieved by virtual functions
    
    // at runtime the base class decides which function to call


    // Example
    // Base class : Employee
    // Derived class : Manager, Entry Level, etc...
    // Increment() - Base class general implementation
    // Increment() - Derived class giving salarry increment based on employee type

    // 1000 Employees -- cannot invoke each funciton separately
    // create a list of objects of type pointers to Employee class
    // and then if we call the increment() then it will the respective increment()

    return 0;
}
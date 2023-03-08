#include<iostream>
using namespace std;

class Shape{
    
    public:
        double base, height;

        Shape(double a, double b){
            this->base = a;
            this->height = b;
        }

        // pure virtual function
        virtual double area() = 0;
};
// the class which contains atleast one pure virtual function is Abstract class

// Abstract - not existing physically but there is only idea
// We cannot create object for an Abstract class
// Why Abstract class?
    // Abstract class is a generic class
    // This class can be extended in the derived class
    // We can create objects for its derived class

    // Abstract class gives us the outline of a derived class

// What does pure virtual function say?
// area() is a PVF
// which means that all the derived classes must override an area() in its scope
// if not implemented then the derived class will also be an Abstract class.

class Triangle : public Shape{
    public:
        Triangle(double a, double b) : Shape(a, b){}

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

    Rectangle r(10., 20.);
    cout << r.area() << endl; // calls rect area()

    // Shape s; we cannot create an object for Shape
    // But we can create a pointer to it.
    Shape *s;
    s = &t;
    cout << s->area() << endl;

    s = &r;
    cout << s->area() << endl;

    return 0;
}
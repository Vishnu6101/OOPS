#include<iostream>
using namespace std;

class Circle{
    private:
        int radius;
        float circum;
        float area;

    public:
        void setRadius(int radius){
            this->radius = radius;
            this->circum = 2 * 3.14 * radius;
            this->area = 3.14 * radius * radius;
        }

    // Declaring a friend class
    friend class Homework;
};

// Accessing the circum, area data members using friend class
class Homework{
    public:
        void printResults(Circle c){
            cout << "Radius : " << c.radius << endl;
            cout << "Circumference : " << c.circum << endl;
            cout << "Area : " << c.area << endl;
        }
};

int main(){

    Circle c1;
    c1.setRadius(3);

    // Create an obj of the freind class to access its function
    Homework h;
    h.printResults(c1);

    // h can access the private members of c1 but not vice versa
    return 0;
}
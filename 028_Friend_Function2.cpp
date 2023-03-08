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

    // Declaring friend function
    friend void printResults(Circle);
};

// Accessing the circum, area data members using friend function
void printResults(Circle c){
    cout << "Radius : " << c.radius << endl;
    cout << "Circumference : " << c.circum << endl;
    cout << "Area : " << c.area << endl;
}

int main(){

    Circle c1;
    c1.setRadius(3);

    printResults(c1);
    return 0;
}
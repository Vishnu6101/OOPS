#include<iostream>
using namespace std;

class Count{

    // Declaring friend function to access the private members of a class
    friend void setX(Count& , int);

    private:
        int x;

    public:
        // Constructor
        Count()
        :x(0)
        {}

        int getX(){
            return this->x;
        }

        // void setX(int x){
        //     this->x = x;
        // }

        // setX() declaration
        // void setX(int x);
};
// Defining setX outside the class
// still setX() is a member of Count class
// void Count::setX(int x){
//     this->x = x;
// }

// not a function of Count class (friend function)
void setX(Count& c, int x){
    c.x = x;
}

int main(){

    Count c1;
    cout << c1.getX() << endl;

    // c1.setX(10);
    // cout << c1.getX() << endl;

    // setting x with friend function
    // passing c1 as reference
    setX(c1, 10);
    cout << c1.getX() << endl;

    return 0;
}
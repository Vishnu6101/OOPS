#include<iostream>
using namespace std;

class Rect{
    private:
        int length;
        int breadth;

    public:
        // istream cannot be passed by value
        // istream should be received with reference
        // istrem& is return type as it is the original return type of >> operator
        friend istream& operator>> (istream& in, Rect& r){
            cout << "Enter Length and Breadth : " << endl;
            in >> r.length >> r.breadth;
            return in;
        }

        friend ostream& operator<< (ostream& out, Rect& r){
            out << r.length << "x" << r.breadth << endl;
            return out;
        }

};

class Date{

    private:
        int day;
        int month;
        int year;

    public:
        friend istream& operator>> (istream&, Date&);
        friend ostream& operator<< (ostream&, const Date&);
};

// here const Date cannot be used as we are getting input and changing it
istream& operator>> (istream& in, Date& d){
    cout << "Enter the day, month and year : " << endl;
    in >> d.day >> d.month >> d.year;
    return in;
}

// const Date because we are only reading it not changing
ostream& operator<< (ostream& out, const Date& d){
    out << d.day << "/" << d.month << "/" << d.year << endl;
    return out;
}

int main(){
    
    Rect r1;

    // overloaded >> operator
    cin >> r1; // operator>>(cin, r1) is called
    // cin.operator>>(r1) is called but there is no operator>>() for cin
    // we are using cin object to call the function of Rect and we are 
    // accessing its private members so make it as friend function
    // 1st one is sent as this pointer cin is sent as this pointer not r1

    // r1 >> cin -- there is no need for friend function as r1 will be
    // passed with this pointer and it will be able to access its own function

    // overloaded << operator
    cout << r1;

    Date d1;
    cin >> d1;
    cout << d1;

    return 0;
}
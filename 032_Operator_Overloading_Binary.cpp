#include<iostream>
using namespace std;

class Height{
    private:
        int feet, inches;

    public:
        friend istream& operator>> (istream&, Height&);
        friend ostream& operator<< (ostream&, const Height&);

        // overloading +
        // return a type of height
        Height operator+ (Height h){
            Height temp;
            temp.feet = this->feet + h.feet;
            temp.inches = this->inches + h.inches;
            if(temp.inches > 11){
                temp.feet++;
                temp.inches -= 12;
            }
            return temp;
        }

        // overloading <
        bool operator< (Height h){
            if(this->feet < h.feet) return true;
            if(this->feet == h.feet and this->inches < h.inches) return true;
            return false;
        }
};

istream& operator>> (istream& in, Height& h){
    cout << "Enter the feet and inches : ";
    in >> h.feet >> h.inches;
    return in;
}

ostream& operator<< (ostream& out, const Height& h){
    out << h.feet << "ft and " << h.inches << "in" << endl;
    return out;
}

int main(){

    Height h1, h2, h3;

    cin >> h1;
    cin >> h2;

    h3 = h1 + h2; // h1.operator+(h2) is called
    // h1 -- this pointer
    // h2 may be pass by reference or value as we are 
    // only reading it not changing it

    cout << h3;

    if(h1 < h2){
        cout << h1 << "is smaller";
    }
    else{
        cout << h1 << "is taller";
    }
    return 0;
}
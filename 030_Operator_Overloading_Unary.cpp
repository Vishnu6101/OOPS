#include<iostream>
using namespace std;

class Time{
    
    private:
        int hours;
        int min;

    public:
        Time(int h, int m)
        :hours(h), min(m){
            
        }

        // normal function to add minute
        // void addMin(){
        //     this->min++;
        //     if(this->min >= 60){
        //         this->hours++;
        //         this->min = 0;
        //     }
        // }

        void displayTime(){
            cout << this->hours << ":" << this->min << endl;
        }

        // Pre-increment Operator Overloading
        void operator++ (){
            this->min++;
            if(this->min >= 60){
                this->hours++;
                this->min = 0;
            }
        }

        // Post-increment Operator Overloading
        // just to indicate a difference use int as dummy arg
        void operator++ (int){
            this->min++;
            if(this->min >= 60){
                this->hours++;
                this->min = 0;
            }
        }
};

int main(){

    Time t1(5, 50);

    // using normal function
    // t1.addMin();

    ++t1; // using operator overloading
    // t1.operator++(); is called

    t1++; // shows error, use a parameter to overcome it
    // post-increment operator -- use an int param
    // t1.operator++(0) is called

    t1.displayTime();

    return 0;
}
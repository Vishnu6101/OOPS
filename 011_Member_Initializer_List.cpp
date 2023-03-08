#include<iostream>
#include<string>
using namespace std;

class Date{
    private:
        int day, month, year;

    public:
        // a default as well as parameterized constructor
        Date(int day = 1, int month = 1, int year = 2000){
            this->day = day;
            this->month = month;
            this->year = year;
        }

        string getDate(){
            return to_string(this->day) + '/' +
                    to_string(this->month) + '/' + 
                    to_string(this->year);
        }
};

class Student{
    private:
        string name;
        Date dob;

    public:
        Student(string n, int day=1, int month=1, int year=2001)
        :name(n), dob(day, month, year){ // member initializer list
        }
        // use to call the constructor of other class objects and initialize them

        string getDOB(){
            return dob.getDate();
        }
};

int main(){

    Student s1("Vishnu", 1, 2, 2001);
    cout << s1.getDOB() << endl;

    Student s2("Anand");
    cout << s2.getDOB() << endl;
    return 0;
}
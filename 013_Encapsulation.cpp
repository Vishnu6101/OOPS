#include<iostream>
using namespace std;

class Student{
    private:
        // Data hiding or information hiding
        string name;
        int age, height;

    public:
        // read only (getters only) no write (no setters)
        int getAge(){
            return this->age;
        }
};

int main(){

    Student s1;
    cout << s1.getAge() << endl;
    return 0;
}
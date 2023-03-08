#include<iostream>
#include "035_Interface_Header.hpp"
using namespace std;

int main(){
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);

    cout << s.pop();
    cout << s.top();

    return 0;
}
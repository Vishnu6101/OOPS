#include<iostream>
using namespace std;

// works only for int
// int maximum(int a, int b, int c){
//     return max(max(a, b), c);
// }

// we need a generic one which works for all data types
// Generic Programming
template <class T>
T maximum(T a, T b, T c){
    return max(max(a, b), c);
}
// template <class T> and template <typename T> are same

// if have different type of argument (int, double)
// template <class T1, class T2>
// T2 maximum(T1 a, T2 b){}
// T1 -- int, T2 -- double

int main(){

    cout << maximum(3, 5, 6) << endl;
    cout << maximum(4.0, 16.7, 9.9) << endl;
    cout << maximum('a', 'w', 'z') << endl;
    
    return 0;
}
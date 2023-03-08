#include "035_Interface_Header.hpp"

void Stack::push(int a){
    v.push_back(a);
}

int Stack::top(){
    return v[v.size() - 1];
}

int Stack::pop(){
    if(v.size() != 0){
        int t = top();
        v.pop_back();
        return t;
    }
}
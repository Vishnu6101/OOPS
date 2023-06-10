#include<vector>

// do not use using namespace
class Stack{
    private:
        std::vector<int> v;

    public:
        void push(int);

        int top();
        
        int pop();
};

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
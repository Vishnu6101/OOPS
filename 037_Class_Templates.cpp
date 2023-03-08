#include<iostream>
#include<vector>
using namespace std;

template <class T>
class Stack{
    private:
        vector<T> v;

    public:
        void push(T a){
            v.push_back(a);
        }

        T top(){
            return v[v.size() - 1];
        }

        T pop(){
            if(v.size() != 0){
                T t = top();
                v.pop_back();
                return t;
            }
        }
};

int main(){

    Stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);

    cout << s.top() << endl;

    Stack<string> s1;
    s1.push("asd");
    s1.push("sac");
    s1.push("bvnvn");

    cout << s1.top() << endl;

    return 0;
}
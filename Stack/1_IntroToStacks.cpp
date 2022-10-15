#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);
    //removing top element ie 3
    s.pop();
    //top element is
    cout<<"top element is "<<s.top()<<endl;

    if (s.empty())
    {
        cout<<"empty stack";
    }
    
    else{
        cout<<"non empty stack"<<endl;
    }

    cout<<"size of stack is "<<s.size()<<endl;


}
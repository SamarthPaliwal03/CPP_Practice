#include<iostream>
#include<climits>
using namespace std;
//here we will not be asking size from user instead we will take a default array and full hone ke baad array ka size double hoajeag


class makingofstack{
    public:
    int *data;
    int nextindex;
    int capacity;

    makingofstack(){
        data=new int[capacity];
        nextindex=0;
        capacity=3;
    }

    int size(){
        return nextindex;
    }

    bool isempty(){
        if (nextindex==0)
        {
            return true;
        }
        else{
            return false;
        }
    }

    void push(int d){
        if (nextindex==capacity)
        {
            int *newdata = new int [2*capacity];
            for (int i = 0; i < capacity; i++)
            {
                newdata[i]=data[i];
            }
            capacity=2*capacity;
            delete [] data;
            data=newdata;
            // cout<<"stack full"<<endl;
            // return;
        }
        data[nextindex]=d;
        nextindex++;
    }

    int pop(){
        if (isempty())
        {
            cout<<"Stack is empty now";
        }
        nextindex--;
        return data[nextindex];
    }

    int top(){
        if (isempty())
        {
            cout<<"Stack is empty ";
        }
        return data[nextindex-1];   
    }
};


int main(){
    makingofstack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
   
    cout<<s.top()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.size()<<endl;
    cout<<s.isempty()<<endl;
   
}
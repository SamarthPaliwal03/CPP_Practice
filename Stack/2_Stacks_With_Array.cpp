#include<iostream>
#include<climits>
using namespace std;

// class makingofstack{
//     public:
//     int *data;
//     int nextindex;
//     int capacity;

//     makingofstack(int totalsize){
//         data=new int[totalsize];
//         nextindex=0;
//         capacity=totalsize;
//     }

//     int size(){
//         return nextindex;
//     }

//     bool isempty(){
//         if (nextindex==0)
//         {
//             return true;
//         }
//         else{
//             return false;
//         }
//     }

//     void push(int d){
//         if (nextindex==capacity)
//         {
//             cout<<"stack full"<<endl;
//             return;
//         }
        
//         data[nextindex]=d;
//         nextindex++;
//     }

//     int pop(){
//         if (isempty())
//         {
//             cout<<"Stack is empty now";
//         }
//         nextindex--;
//         return data[nextindex];
//     }

//     int top(){
//         if (isempty())
//         {
//             cout<<"Stack is empty ";
//         }
//         return data[nextindex-1];   
//     }
// };


// int main(){
//     makingofstack s(4);
//     s.push(10);
//     s.push(20);
//     s.push(30);
//     s.push(40);
//     s.push(50);
   
//     cout<<s.top()<<endl;
//     cout<<s.pop()<<endl;
//     cout<<s.pop()<<endl;
//     cout<<s.pop()<<endl;
//     cout<<s.size()<<endl;
//     cout<<s.isempty()<<endl; 
// }


class stacks{
    public:
    int top;
    int *arr;
    int size;

    stacks(int size){
        this->size=size;
        arr=new int [size];
        top=-1;
    }

    void push(int element){
        if (top==size)
        {
            cout<<"stack overflow";
        }
        else{
            top++;
            arr[top]=element;
        }
    }

    void pop(){
        if (top==-1)
        {
            cout<<"underflow";
        }
        else{
            top--;

        } 
    }

    void peek(){
        if (top==-1)
        {
            cout<<"stack is empty";
        }
        else{
            cout<<arr[top];
        }
    }

   bool isEmpty(){
        if (top==-1)
        {
            return true;
        }
        else{
            return false;
        }   
    }

};

int main(){
    stacks s1(5);
    cout<<s1.isEmpty();
    s1.push(22);
    s1.push(23);
    s1.pop();
    s1.pop();
    s1.pop();
    s1.peek();

}
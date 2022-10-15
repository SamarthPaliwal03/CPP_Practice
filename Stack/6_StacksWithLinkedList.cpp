#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int data){
        next=NULL;
        this->data=data;
    }
};


class stack{
    node *head;
    int size;
    public:

    stack(){
        size=0;
        head=NULL;
    }
    void push(int element){
        node* temp=new node(element);
        temp->next=head;
        head=temp;
        size++;
    }

    int pop(){
        if (size>=1)
        {
        int ans=head->data;
        node *temp=head;
        temp=temp->next;
        delete head;
        head=temp;
        size--;
        return ans;
        }
        else{
            cout<<"u popeed out every elemnt"<<endl;
        }

    }
    void peek(){
        if (size==0)
        {
            cout<<"stack is empty nothing to peek "<<endl;
        }
        else
        cout<<head->data;
    }

    void isEmpty(){
        if (size==0)
        {
            cout<<"stack is empty "<<endl;
        }
        else{
            cout<<"stack is not empty"<<endl;
        }
        
    }
};

int main(){
    stack s1;
    s1.isEmpty();
    s1.push(22);
    s1.push(23);
    s1.pop();
    s1.pop();
    s1.pop();
    s1.peek();
    s1.isEmpty();
}

#include <iostream>
using namespace std;

class student{
    public:
    int age ;
    char *name;
//using shallow copy
    // student(int age,char *name){
    //     this ->age=age;
    //     this -> name=name;
    // }


    //using deep copy
    student(int age,char *name){
        this ->age=age;
       this -> name= new char[strlen(name)+1];
       strcpy(this ->name,name);
    }

    void display(){
        cout<< age << " "<< name ;
    }


};

int main(){
    char name[]="sam";
    student s1(11,name);
    s1.display();

     student s2(12," svea");
     s2.display();

}


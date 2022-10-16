

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Student {
    int rollNumber;

    public :

    int age;

    Student(int r) {
        rollNumber = r;
    }

    int getRollNumber() {
        return rollNumber;
    }

     int getage() {
        return age;
    }

};


int main() {
    Student s1(101);
    s1.age = 20;

    Student s2 = s1;
    cout << s2.getRollNumber();
    cout << s2.getage();
}
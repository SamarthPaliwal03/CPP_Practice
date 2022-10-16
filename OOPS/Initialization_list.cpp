#include <iostream>
using namespace std;

 class abcd{
    int a;
    int b;
    public:
    abcd(int i,int j): a(i),b(j+2){
        cout<<"cons called"<<endl;
        cout<<a<<endl<<b<<endl;
    }


    //niche wale mae error bcoz a pehle aayega then b
    //     abcd(int i,int j): b(j+2),a(i+b){
    //     cout<<"cons called"<<endl;
    //     cout<<a<<endl<<b<<endl;
    // }
 };

int main(){
    abcd t(5,6);
}



// #include <iostream>
// using namespace std;
//  class abcd{
//     int a;
//     int b;
//     public:
//     abcd(int i,int j){

        
//         b=i+j;
//         a=i;
//         cout<<"cons called"<<endl;
//         cout<<a<<endl<<b<<endl;
//     }
//  };

// int main(){
//     abcd t(5,6);
// }
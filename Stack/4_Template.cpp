#include<iostream>
using namespace std;

template<typename t,typename v>
class pairr{
    t x;
    v y;
    public:
    void setx(t x){
        this ->x=x;
    }
    t getx(){
        return x;
    }
    void sety(v y){
        this ->y=y;
    }
    v gety(){
        return y;
    }
};
//result will be like 
//ek pair jisme 12 and 13 hai.....12 is x ka x,13 is x ka y
//ek 10.11 ka hai.....this is y
int main(){
    pairr<pairr<int,int>,double> p2;
    p2.sety(10.11);

    pairr<int ,int>p4;
    p4.setx(12);
    p4.sety(13);

    p2.setx(p4);
    cout<<p2.getx().getx()<<" "<<p2.getx().gety()<<" "<<p2.gety()<<endl;

}
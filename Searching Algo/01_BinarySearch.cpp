//can only be applied when all are in ascending order or descending 
//use mid =start +(end-start)/2
//abv mid is better because in case if end and start are very big then there adding them will be a tough deal

#include <iostream>
using namespace std;

int BinarySearch(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;

    while (start <= end)
    {  
        if (key==arr[mid])
    {
        return mid ;
    }
        if (key>arr[mid])
    {
        start=mid+1;
    }  
        else
    {
        end=mid-1;
    }  
    mid=(start+end)/2;
    }

    return -1;
}
int main(){
    int even[6]={2,4,6,8,33,55};
    int odd[5]={3,5,11,22,34};
    int notfound[4]={11,22,33,44};

    cout<<BinarySearch(odd,5,34);

}
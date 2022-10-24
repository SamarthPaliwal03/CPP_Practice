//card wala eg ,here we dont swap we just shift it
//Time complexity is o(n^2)
//best case is o(n) worst is n^2
#include<iostream>
using namespace std;

void InsertionSort(int arr[],int size){
    for (int i = 1; i <size; i++)
    {
        int temp=arr[i];
        int j = i-1; //did so that we can use outside for loop of j 
        for ( ; j>=0; j--)
        {
            if (arr[j]>temp)
            {
                arr[j+1]=arr[j]; //shifting
            }
            else{
                break;
            }
        }
        arr[j+1]=temp; //
    } 
}

int main()
{
    int arr[5]={8,7,6,5,99};
    InsertionSort(arr,5);
    for (int i = 0; i < 5; i++) {
    cout << arr[i] << "  ";
    }
}
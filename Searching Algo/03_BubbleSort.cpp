
//in bubble sort we first place the 1st largest elment in last position then 2nd round mae 2nd element in 2nd last pos pae and so on

//Time comp is O(n^2)
//n(n-1)/2 comp
//worst mae n^2
//best mae  n....means arr is already sorted
// how to get that set bool swapped=false;
//in swap func ...swapped=true
//if swapped=false then break the loop


//space comp is O(1)



#include<iostream>
using namespace std;

void BubbleSort(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        //bool swapped=false;
        for (int j = 0; j < size-i-1; j++)
        {
            //abv loop mae -1 isliye bcoz last element is in correct position
            if (arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                //swapped=true
            }  
        }
        // if (swapped==false) .....already sorted hai bhai
        // {
        //     break;
        // }
    } 
}


int main()
{
    int arr[5]={8,7,6,5,99};
    BubbleSort(arr,5);
    for (int i = 0; i < 5; i++) {
    cout << arr[i] << "  ";
    }
}
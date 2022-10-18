
//in selection sort we just put the min element of the arr in that position where our pinter lies like pos 0 pae hai toh uspe min hone chaiye in range 0 to last then pos 1 pae aaye toh pos 1 se last index ka min hona chaiye

//in i loop we should use size-1 bcoz last element toh apne aap sort ho jaega....if we use size ans same hi aayega

//Space comp is O(1) bcoz we just variables

//Time comp is O(n^2)..for a array of size 5 we first did n-1 comparison then n-2 then so on... last me 1 toh we know sum of this series is n(n-1)/2
//same in worst case and best case


//used in small cases like chooti list/veactor ya array ho
//used in where there is space constrain ho

//*IMP* this sorting method is unstable

#include<iostream>
using namespace std;

void SelectionSort(int arr[],int size){
    for (int i = 0; i < size-1; i++)
    {   
        //int minindex=i;
        for (int j = i+1; j <size; j++)
        {
            if (arr[j]<arr[i])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
        
    }
    
}

int main()
{
    int arr[5]={8,7,6,5,7 };
    SelectionSort(arr,5);
    for (int i = 0; i < 5; i++) {
    cout << arr[i] << "  ";
    }
}
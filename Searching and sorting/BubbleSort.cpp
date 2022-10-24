#include <iostream>
using namespace std;
void bubblesort(int n,int array[]){
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-1-i; j++)
        {
            if (array[j]>array[j+1])
            {
                int temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
                
            }
        }
        
    } 
}

int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0; i<n; i++){
      cin>>array[i];
    }
    bubblesort(n,array);
    for (int k = 0; k < n; k++) {
        cout << array[k]<<" ";
    }
    return 0;
}
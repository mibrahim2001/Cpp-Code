#include<bits/stdc++.h>
using namespace std;

/* Insertion sort is a simple sorting algorithm that works similar to the way you sort 
playing cards in your hands. The array is virtually split into a sorted and an unsorted part.
Values from the unsorted part are picked and placed at the correct position in the sorted part. */

int main(int argc, char const *argv[])
{
    int arr[5] = {12,45,101,34,1};
    int len = sizeof(arr)/sizeof(arr[0]);

    cout<<"Unsorted Array: "<<endl;
    for(int i=0; i<len; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    for(int i =1; i<len; i++){
        int current = arr[i];
        int j = i-1;
                
        while(arr[j]>current && j>=0){
            arr[j+1] = arr[j];
            j--;
        }
        
        arr[j+1] = current;
    }   
    cout<<"Sorted Array: "<<endl;
    for(int i=0; i<len; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

/* Given an unsorted array of integers, sort the array into a wave like array. An array 
‘arr[0..n-1]’ is sorted in wave form if arr[0] >= arr[1] <= arr[2] >= arr[3] <= arr[4] >= …*/

void waveSort(int arr[], int n){
    
    for(int i=1; i<n; i+=2){
        if(arr[i]>arr[i-1]){
            swap(arr[i],arr[i-1]);
        }

        if(arr[i]>arr[i+1] && i<=n-2){
            swap(arr[i],arr[i+1]);
        }
    }
}

//Driver function 
int main(int argc, char const *argv[])
{
    int arr[] = {1,3,2,5,8,4,6};
    waveSort(arr,7);
    for(int i=0; i<7; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

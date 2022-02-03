#include<bits/stdc++.h>
using namespace std;

/* The flag of the Netherlands consists of three colors: white, red, and blue. The task is to 
randomly arrange balls of white, red, and blue in such a way that balls of the same color are 
placed together. For DNF (Dutch National Flag), we sort an array of 0, 1, and 2's in linear 
time that does not consume any extra space. */

//function for swap 
void swap(int arr[], int i, int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void dnfSort(int arr[], int n){
    //we will make 3 pointers for low, mid, and high
    int mid = 0;
    int low = 0;
    int high = n-1;
    //we will check for every element 
    while(mid<=high){
        if(arr[mid] == 0){
            swap(arr,low,mid);
            low++;
            mid++;
        }
        else if(arr[mid] == 1){
            mid++;
        }
        else{
            swap(arr,mid,high);
            high--;
        }
    }
}

//Driver function 
int main(int argc, char const *argv[])
{
    int arr[] = {1,0,2,1,0,1,2,1,2};
    dnfSort(arr,9);
    for(int i=0; i<9; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

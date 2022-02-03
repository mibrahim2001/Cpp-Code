#include<bits/stdc++.h>
using namespace std;

/* Like Merge Sort, QuickSort is a Divide and Conquer algorithm. It picks an element as pivot 
and partitions the given array around the picked pivot. There are many different versions of 
quickSort that pick pivot in different ways. 

1)Always pick first element as pivot.
2)Always pick last element as pivot (implemented below)
3)Pick a random element as pivot.
4)Pick median as pivot.

The key process in quickSort is partition(). Target of partitions is, 
given an array and an element x of array as pivot, put x at its correct position in sorted 
array and put all smaller elements (smaller than x) before x, and put all greater elements 
(greater than x) after x. All this should be done in linear time. */

//a function to swap elements in array
void swap(int arr[], int i, int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

//partition function 
int partition(int arr[], int l, int r){
    //taking the last element 'r' as pivot 
    int pivot = arr[r];
    
    //taking a pointer 'i' that is placed one place before the first element of arr
    int i = l-1;

    //a for loop to sort the elements 
    for(int j=l; j<r; j++){
        if(arr[j]<pivot){
            //if the arr[j] element would be smaller then pivot we will increase i and swap i element with j
            i++;
            swap(arr,i,j);
        }
    }

    /*now we will swap the pivot element to its original position(i+1) at this position all left
    elements will be smaller then the pivot and all larger elements will be larger then pivot*/
    swap(arr,i+1,r);
    
    //and the return the pivot position 
    return i+1;
}

//quickSort function 
void quickSort(int arr[], int l, int r){

    if(l<r){
        int pivot = partition(arr,l,r);

        /*now we will call quickSort recursively firstly for arr before the pivot point and then
        for arr after the pivot point*/
        quickSort(arr,l,pivot-1);
        quickSort(arr,pivot+1,r);
    }
}

//Driver function 
int main(int argc, char const *argv[])
{
    int arr[] = {4,1,7,3,1,5,9};
    quickSort(arr,0,6);

    for(int i=0; i<7; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

/* Counting sort is a sorting algorithm that sorts the elements of an array by counting the 
number of occurrences of each unique element in the array. The count is stored in an auxiliary 
array and the sorting is done by mapping the count as an index of the auxiliary array.
*/

//function 
void countSort(int arr[],int n){
    //first we will get the maximum element in the array
    int k = arr[0];
    for(int i=0; i<n; i++){
        k = max(k,arr[i]);
    }

    int count[k+1]  = {0};

    for(int i=0; i<n; i++){
        count[arr[i]]++; //arr[i] will get the value in arr at index i that will be passed as index to count arr and its value will be increased
    }

    //now we will modify the count array and add the value of previous element to the next element
    for(int i=1; i<=k; i++){
        count[i] += count[i-1];
    }

    //now we will make an output array that will store the elements at their original position  
    int output[n];

    for(int i=n-1; i>=0; i--){
        /* here we are looking for arr[i] element in count array and then decreasing that value to 
        find the index in output array were that element should be placed */
        output[--count[arr[i]]] = arr[i];
    }

    //now we will make our original array 'arr' similar to output arr
    for(int i=0; i<n; i++){
        arr[i] = output[i];
    }

}

//Driver function 
int main(int argc, char const *argv[])
{
    int arr[] = {1,3,2,3,4,1,6,4,3};
    countSort(arr,9);
    for(int i=0; i<9; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

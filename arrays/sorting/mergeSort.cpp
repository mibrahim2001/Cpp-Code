#include<bits/stdc++.h>
using namespace std;

/* Idea: Divide the array into two parts, sort the left part and sort the right part and
merge them */

/* a function to merge the two sorted arrays 
here l is the starting point of the first array and mid is the ending point whereas mid+1 
is that starting point for second array and r is its ending point */ 

void merge(int arr[], int l, int mid, int r){

    //first we will get the size of two temp arrays that we have to create here
    int n1 = mid-l+1;
    int n2 = r-mid;

    //now declare two temp arrays
    int a[n1];
    int b[n2];

    //now fill these temp arrays with the respective value from the original array
    for(int i=0; i<n1; i++){
        a[i] = arr[l+i];
    }
    for(int i=0; i<n2; i++){
        b[i] = arr[mid+1+i];
    }

    //now take pointers for the arrays
    int i = 0; //pointer for array a
    int j = 0; //pointer for array b
    int k = l; //pointer for our original array that starts from 'l'

    /*now we will compare the values at pointers 'i' of 'a' array with pointer 'j' of 'b' array
    and replace the smaller value at pointer 'k' of original array, we then increase the value 
    of pointers of 'a' array which is 'i' if a[i] is smaller than b[i] and similarly for 'b' 
    and the pointer 'k' will increase in both the cases*/

    while(i<n1 && j<n2){
        if(a[i]<b[j]){
            arr[k] = a[i];
            i++; k++;
        }
        else{
            arr[k] = b[j];
            j++; k++;
        }
    }

    /* its possible that one of the arrays pointer moves to the last element and above while
    loop is terminated but values are still remaining in other array, to tackle with that 
    problem we will use two more while loops that will only operate if there are values 
    remaining in one of the arrays */

    while(i<n1){
        arr[k] = a[i];
        i++; k++;
    }

    while(j<n2){
        arr[k] = b[j];
        j++; k++;
    }

}

//merge sort function 
void mergeSort(int arr[], int l, int r){
    if(l<r){
        int mid = (l+r)/2;

        //we call the mergeSort function two times recursively dividing the array into two parts
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);

        //then we will merge these two arrays by out merge function into sorted merged array
        merge(arr,l,mid,r);
    }
}

//Driver function 
int main(int argc, char const *argv[])
{
    int arr[8] = {9,1,2,4,3,5,7,6};
    int len = sizeof(arr)/sizeof(arr[0]);

    cout<<"Unsorted Array: "<<endl;
    for(int i=0; i<len; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    mergeSort(arr,0,7);

    cout<<"Sorted Array: "<<endl;
    for(int i=0; i<len; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}

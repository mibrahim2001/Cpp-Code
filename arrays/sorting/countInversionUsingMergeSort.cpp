#include<bits/stdc++.h>
using namespace std; 

/* Inversion Count for an array indicates – how far (or close) the array is from being sorted. 
If the array is already sorted, then the inversion count is 0, but if the array is sorted in 
the reverse order, the inversion count is the maximum. 
Formally speaking, two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j  */


long long merge(int arr[], int l, int mid, int r){
    //a variable to count the inversions
    long long inversion = 0;

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
            /*now if a[i] > b[j] inversion will ocur and as the two arrays are sorted all of 
            the next elements will form inversion so,*/
            inversion += n1-i;
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

    return inversion;

}

//merge sort function 
long long mergeSort(int arr[], int l, int r){

    //variable to store the inversion 
    long long inv=0;
    if(l<r){
        int mid = (l+r)/2;

        //we call the mergeSort function two times recursively dividing the array into two parts
        inv += mergeSort(arr,l,mid);
        inv += mergeSort(arr,mid+1,r);

        //then we will merge these two arrays by out merge function into sorted merged array
        inv += merge(arr,l,mid,r);
    }

    return inv;
}

//Driver function 
int main(int argc, char const *argv[])
{
    int arr[8] = {3,5,6,9,1,2,7,8};
    long long inv = mergeSort(arr,0,7);

    for(int i=0; i<8; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    cout<<inv<<endl;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

//a function to find if the given array is in sorted order(strictly increasing)
bool sorted(int arr[], int n){
    if(n == 1){
        return true;
    }

    bool restArray = sorted(arr+1,n-1);

    return (arr[0]<arr[1] && restArray);
}

//a funcion to print numbers from n to 0 
void decreasingOrderNumber(int n){
    if(n == 0){
        return;
    }

    cout<<n<<endl;
    decreasingOrderNumber(n-1);
}

//a function to print numbers from 1 up till n 
void increasingOrderNumber(int n){
    if(n == 1){
        cout<<1<<endl;
        return;
    }
    increasingOrderNumber(n-1);
    cout<<n<<endl;
    return;
}

//a function to find the first occurrence(index) of a a number(key) in an array
int firstOccurrence(int arr[],int n, int i, int key){
    if(i == n){
        return -1;
    }

    if(arr[i] == key){
        return i;
    }

    return firstOccurrence(arr,n,i+1,key);
}

//a function to find the last occurrence(index) of a number n in an array
int lastOccurrence(int arr[],int n, int i, int key){
    if(i == n){
        return -1;
    }
    
    int restArray =  lastOccurrence(arr,n,i+1,key);
    if(restArray!= -1){
        return restArray;
    }
    
    if(arr[i] == key){
        return i;
    }

    return -1;
}
int main(int argc, char const *argv[])
{
    /*  int arr[5] = {1,2,3,4,5};
     cout<<sorted(arr,5); */

     /* int n;
     cin>>n;
     increasingOrderNumber(n);
     */

    int arr[10] = {1,2,3,4,5,1,2,3,4,5};
    cout<<lastOccurrence(arr,10,0,3);

    return 0;
}
 
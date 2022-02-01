#include<bits/stdc++.h>
using namespace std; 

int binarySearch(int arr[], int size, int key){
    int s = 0;
    int e = size;
    
    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid] == key){
            return mid;
        }else if(arr[mid]>key){
            e = mid - 1;
        }else if(arr[mid]<key){
            s = mid + 1;
        }
    }

    return -1;
}

int main(int argc, char const *argv[])
{
    int num[10] = {1,5,10,20,30,45,67,89,90,99};
    int len = sizeof(num)/sizeof(num[0]);
    cout<<"Index: "<<binarySearch(num,len,99);
    return 0;
}

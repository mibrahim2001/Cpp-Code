#include <bits/stdc++.h>
using namespace std;

//bubble sorting 
/* Bubble Sort is the simplest sorting algorithm that works by repeatedly 
swapping the adjacent elements if they are in wrong order. */

int main(int argc, char const *argv[])
{
    int arr[5] = {12,45,101,34,1};
    int len = sizeof(arr)/sizeof(arr[0]);

    int count = 1; 
    while(count<len){
        for(int i=0;i<len-count;i++){
            if(arr[i]>arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        count++;
    }
    return 0;
}

    
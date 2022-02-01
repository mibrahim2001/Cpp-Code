#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[5] = {12,45,101,34,1};
    int len = sizeof(arr)/sizeof(arr[0]);

    //simple sorting
    /* for(int i = 0; i< len-1; i++){
        for(int j = i+1; j<len; j++){
            if(arr[j]<arr[i]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout<<len<<endl; */


    //bubble sorting 
   /*  int count = 1; 
    while(count<len){
        for(int i=0;i<len-count;i++){
            if(arr[i]>arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        count++;
    } */

    
    //insertion sort 
    // int arr[5] = {12,45,101,34,1};
    for(int i =1; i<len; i++){
        int current = arr[i];
        int j = i-1;
                
        while(arr[j]>current && j>=0){
            arr[j+1] = arr[j];
            j--;
        }
        
        arr[j+1] = current;
    }   
    for(int i = 0; i<len; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

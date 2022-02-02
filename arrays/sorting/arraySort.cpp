#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[5] = {12,45,101,34,1};
    int len = sizeof(arr)/sizeof(arr[0]);

    //simple sorting
    for(int i = 0; i< len-1; i++){
        for(int j = i+1; j<len; j++){
            if(arr[j]<arr[i]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(int i=0; i<len; i++){
        cout<<arr[i]<<" ";
    }


   
    return 0;
}

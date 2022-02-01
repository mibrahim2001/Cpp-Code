#include<bits/stdc++.h>
using namespace std;

//method to check if a number is power of 2
bool powerof2(int n){
    return(n && !(n & n-1));
}

//count the number of ones on a given number binary form
int countOnes(int n){
    int count = 0;
    while(n){
        n = n & (n-1);
        count ++;
    }
    return count;
}

//print all possible subsets of a given set(array)
void subset(int arr[], int n){
    for(int i = 0; i<(1<<n); i++){
        cout<<"{ ";
        for(int j = 0; j<n; j++){
            if(i & (1<<j)){
                cout<<arr[j]<<" ";
            }
            
        }cout<<"}"<<endl;
    }
}
int main(int argc, char const *argv[])
{
    cout<<powerof2(14)<<endl;
    cout<<countOnes(19)<<endl;
    int arr[4] = {1,2,3,4};
    subset(arr,4);
    return 0;
}

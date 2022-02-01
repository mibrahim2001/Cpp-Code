#include <bits/stdc++.h>
using namespace std;

//to find a unique number in an array
int uniqueNumber(int arr[], int n){
    int xorSum = 0;
    for(int i=0; i<n; i++){
        xorSum = xorSum ^ arr[i];
    }
    return xorSum;
}

//set bit function to check if the bit is set at the given position 
int setBitt(int num, int pos){
    return(num & (1<<pos));
}

//to find two unique numbers in an array
void uniqueNumbers(int arr[], int n){

    //first we will find the xorSum of all the number by a function we already have 
    int xorSum = uniqueNumber(arr,n);
    int tempXorSum = xorSum;
    int pos = 0;
    int setBit = 0;

    //checking the position of set bit in the xor sum
    while(setBit != 1){
        setBit = xorSum & 1;
        xorSum = xorSum >> 1;
        pos ++;
    }

    //for every number in array that has set bit at position, we will take their xor to get our first ans
    int ans1Xor = 0;
    for(int i=0; i<n; i++){
        if(setBitt(arr[i],pos-1)){
            ans1Xor = ans1Xor ^ arr[i];
        }
    }

    //we will get our second answer by taking xor of the sum of all the numbers in array(that we already had in tempXorSum and the first ans we got)
    int ans2Xor = tempXorSum ^ ans1Xor;

    cout<<"First unique number: "<<ans1Xor<<endl;
    cout<<"Second unique number: "<<ans2Xor<<endl;


    
}

//function to get bit
bool getBit(int n, int pos){
    return ((n & (1<<pos)) != 0);
}

//function to set bit
int setBit(int n, int pos){
    return(n | (1<<pos));
}

//to find a unique number when all other numbers occur three time 
int unique3(int arr[], int n){
    int result = 0;
    
    //checking all 64 bit positions for 1(set bit) and if 1 then increasing the sum

    for(int i=0; i<64; i++){
        int sum = 0;
        for(int j=0; j<n; j++){
            if(getBit(arr[j],i)){
                sum++;
            }
        }

        //checking if the sum is multiple of 3 if not then setting the bit at ith position to 1
        if(sum%3 != 0){
            result = setBit(result,i);
        }
    }
    return result;
}

int main(int argc, char const *argv[])
{
    int arr[7] = {1,2,3,4,1,2,3};
    cout<<uniqueNumber(arr,7)<<endl;
    
    int arr2[8] = {1,2,3,4,5,1,2,3};
    uniqueNumbers(arr2,8);

    int arr3[10] = {1,2,3,4,1,2,3,1,2,3};
    cout<<unique3(arr3,10)<<endl;

    return 0;
}



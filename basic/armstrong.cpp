#include<iostream>
#include <math.h>

using namespace std;

int main(){

    //if we take cube of all the digits of a number and add them and sum is equal to the original number it is known as armstrong number
    int n;
    cin>>n;

    int originaln = n;
    int sum = 0;
    while(n>0){
        int lastdigit = n%10;
        sum += round(pow(lastdigit,3));
        n /= 10;
    }

    if(sum == originaln){
        cout<<"Armstrong Number"<<endl;
    }else{
        cout<<"Not an Armstrong Number"<<endl;
    }


    return 0;
}
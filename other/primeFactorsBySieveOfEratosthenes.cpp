#include<bits/stdc++.h>
using namespace std;

void primeFactors(int n){
    int spf[100] = {0};

    //initializing the array by spf as the number itself because every number divide itself
    for(int i=2; i<=n; i++){
        spf[i] = i;
    }

    //now setting the least multiple of every number on its place for this
    /* we check if the number i at index is multiple of itself first and then check if that numbers multiple are
    multiple of themselves if yes then change their spf to that number i */

    for(int i=2; i<=n; i++){
        if(spf[i] == i){
            for(int j=i*i; j<=n; j+=i){
                if(spf[j] == j){
                    spf[j] = i;
                }
            }
        }
    }

    //now print every multiple of number n
    while(n != 1){
        cout<<spf[n]<<" ";
        n /= spf[n];
    }
}


int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    primeFactors(n);
    return 0;
}

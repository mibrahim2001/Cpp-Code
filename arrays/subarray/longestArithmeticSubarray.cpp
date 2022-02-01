#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int a[7] = {5,6,7,10,12,14,16};
    int n = sizeof(a)/sizeof(a[0]);

    int pd = a[1] - a[0];
    int j = 2;
    int curr = 2; 
    int ans = 0; 

    while(j<n){
        if(pd == a[j] - a[j-1]){
            curr++;
        }else{
            pd = a[j] - a[j-1];
            curr = 2;
        }
        ans = max(ans,curr);
        j++;
    }

    cout<<ans;
    return 0;
}

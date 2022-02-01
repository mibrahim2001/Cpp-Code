#include<bits/stdc++.h>
using namespace std;

//function to find the numbers divisible by two numbers upto n
int divisible(int n, int j, int m){
    int c1 = n/j; //number of numbers divisible by j upto n
    int c2 = n/m; //number of numbers divisible by m upto n
    int c3 = n/(j*m);//number of numbers divisible by j and m both upto int c2 = n/m;

    return c1+c2-c3;
}
int main(int argc, char const *argv[])
{
    int n,j,m;
    cin>>n>>j>>m;
    cout<<divisible(n,j,m)<<endl;

    return 0;
}

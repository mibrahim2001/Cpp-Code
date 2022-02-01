#include<bits/stdc++.h>
using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}


int main(int argc, char const *argv[])
{
    int a = 2;
    int b = 4;
    int *apnt = &a;
    int *bpnt = &b;
    //before swap
    cout<<"a = "<<a<<" b = "<<b<<endl;
    swap(apnt,bpnt);
    //after swap 
    cout<<"a = "<<a<<" b = "<<b<<endl;
    return 0;
}



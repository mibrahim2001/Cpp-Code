#include<bits/stdc++.h>
using namespace std;

//a function to solve the problem of tower of hanoi through recursion 
void towerOfHanoi(int n, char src, char dest, char helper){
    if(n == 0){
        return;
    }

    towerOfHanoi(n-1,src,helper,dest);
    cout<<"Move from "<<src<<" to "<<dest<<endl;  
    towerOfHanoi(n-1,helper,dest,src);
}
int main(int argc, char const *argv[])
{
    towerOfHanoi(4,'A','C','B');
    return 0;
}

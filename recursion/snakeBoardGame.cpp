#include<bits/stdc++.h>
using namespace std;

//a function that tells the possible number of ways you can move your piece from point a to b using a dice
int countPath(int s, int e){
    //base
    if(s == e){
        return 1;
    }
    if(s > e){
        return 0;
    }

    int count = 0;
    for(int i=1; i<=6; i++){
        count += countPath(s+i,e);
    }
    return count;
}

int main(int argc, char const *argv[])
{
    int c = countPath(0,3);
    cout<<c<<endl;
    return 0;
}
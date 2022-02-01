#include <bits/stdc++.h>
using namespace std;

//a function to calculate number of paths possible in a matrix maze for a bee to move form point 0,0 to n-1,n-1
int countPathMaze(int n, int i, int j){
    if(i == n-1 && j == n-1 ){
        return 1;
    }
    if(i >= n || j >=n){
        return 0;
    }

    return countPathMaze(n, i+1, j) + countPathMaze(n, i, j+1);
}

//a shorter function for the above function that count the number of path developed by me
int sCountPathMaze(int n, int i, int j){
    if(i == n-1 || j == n-1 ){
        return 1;
        return 1;
    }
    

    return countPathMaze(n, i+1, j) + countPathMaze(n, i, j+1);
}

int main(int argc, char const *argv[])
{
    int n = 30;
    int count = countPathMaze(n,0,0);
    cout<<count<<endl;

    int count2 = sCountPathMaze(n,0,0);
    cout<<count2<<endl;
    return 0;
}

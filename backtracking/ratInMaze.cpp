#include <bits/stdc++.h>
using namespace std;

/* A Maze is given as N*N binary matrix of blocks where source block is the upper left most 
block i.e., maze[0][0] and destination block is lower rightmost block i.e., maze[N-1][N-1]. 
A rat starts from source and has to reach the destination. The rat can move only in two
directions: forward and down. 
In the maze matrix, 0 means the block is a dead end and 1 means the block can be used in the
path from source to destination. Note that this is a simple version of the typical Maze 
problem. For example, a more complex version can be that the rat can move in 4 directions and
a more complex version can be with a limited number of moves. */

//a function to check if the current block is safe to land
bool isSafe(int** arr, int x, int y, int n){

    //if the x and y don't go out of the matrix 
    if(x < n && y < n && arr[x][y] == 1){
        return true;
    }

    return false;
}

bool ratInMaze(int** arr, int x, int y, int n, int** solArr){
    
    //base condition 
    if(x == n-1 && y == n-1){
        solArr[x][y] = 1;
        return true;
    }

    //recursive condition 

    //if the block is safe then continue
    if(isSafe(arr,x,y,n)){

        //first of all point this block in solArr as 1
        solArr[x][y] = 1;

        //check the next row in the same column is it safe to go?
        if(ratInMaze(arr,x+1,y,n,solArr)){
            return true;
        }
        //if the next row is not safe then it will check the next column if it is safe?
        if(ratInMaze(arr,x,y+1,n,solArr)){
            return true;
        }

        //if both the next column and row are not safe to go it will set this block back to zero
        //this is known as backtracking and we will also return false here 
        solArr[x][y] = 0;
        return false;
    }

    //if block is not safe return false
    return false;
}

//Driver function 
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;

    //here we are declaring a pointer arr in stack memory that is pointing to an int arr of size n(rows) in heap memory
    int** arr = new int*[n];

    //now using a for loop we will initiate every index of arr with a new int array of size n(columns)
    for(int i = 0; i<n; i++){
        arr[i] = new int[n];
    }

    //a for loop to take input of this matrix
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }

    //similarly we make a solution array and initialize it with 0
    int** solArr = new int*[n];
    for(int i=0; i<n; i++){
        solArr[i] = new int[n];
        
        //initializing with 0 in the same loop ;)
        for(int j=0; j<n; j++){
            solArr[i][j] = 0;
        }
    }

    if(ratInMaze(arr,0,0,n,solArr)){
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cout<<solArr[i][j]<<" ";
        }
        cout<<endl;
    }
    }
    
    return 0;
}


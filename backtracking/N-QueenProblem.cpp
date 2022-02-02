#include<bits/stdc++.h>
using namespace std;

/* The N Queen is the problem of placing N chess queens on an N×N chessboard so that no 
two queens attack each other. For example, following is a solution for 4 Queen problem. */

//function to check if the queen is safe to place in the current block 
bool isSafe(int** arr, int x, int y, int n){
    
    //first we will check the column in which we have to place the queen by iterating rows till x
    for(int row = 0; row<x; row++){
        if(arr[row][y] == 1){
            return false;
        }
    }

    //then we check in the left diagonal 
    int row = x;
    int column = y;

    while(row>=0 && column>=0){
        if(arr[row][column] == 1){
            return false;
        }
        row--;
        column--;
    }

    //then we check for right diagonal 
    row = x;
    column = y;

    while(row>=0 && column<n){
        if(arr[row][column] == 1){
            return false;
        }
        row--;
        column++;
    }

    //if all the conditions are checked then return true it means this block is safe 
    return true;
}

//function for n queen problem 
bool nQueen(int** arr, int x, int n){
    
    //base condition 
    if(x >= n){
        return true;
    }

    //recursive condition 
    for(int col=0; col<n; col++){
        if(isSafe(arr,x,col,n)){
            //placing queen at this position 
            arr[x][col] = 1;
            //recursively calling the function to check if rest of the queens can be placed by placing the first queen at this position
            if(nQueen(arr,x+1,n)){
                return true;
            }
            //otherwise we will not place the queen at this position and move to the next column(means next iteration of loop for first queen)
            //and we will backtrack by making this block 0 again 
            arr[x][col] = 0;
        }
    }
    //this false will be returned if queen cannot be placed at any of the column in a given row(x) and this will backtrack
    return false;
}

//Driver function 
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;

    int** arr = new int*[n];
    for(int i=0; i<n; i++){
        arr[i] = new int[n];
        //intializing the arr by 0
        for(int j=0; j<n; j++){
            arr[i][j] = 0;
        }
    }

    if(nQueen(arr,0,n)){
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    return 0; 
}

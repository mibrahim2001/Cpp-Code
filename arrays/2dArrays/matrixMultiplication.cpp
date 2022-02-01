#include<bits/stdc++.h>
using namespace std; 

int main(int argc, char const *argv[])
{
    int n1,n2,n3;
    cin>>n1>>n2>>n3;

    int mat1[n1][n2];
    int mat2[n2][n3];
    int ansMat[n1][n3];

    //to take input for the matrices

    //for matrix 1
    for(int i = 0; i<n1; i++){
        for(int j =0; j<n2; j++){
            cin>>mat1[i][j];
        }
    }

    //for matrix 2
    for(int i=0; i<n2; i++){
        for(int j=0; j<n3; j++){
            cin>>mat2[i][j];
        }
    }

    //intialising the answer matrix with 0
    for(int i = 0; i<n1; i++){
        for(int j=0; j<n3; j++){
            ansMat[i][j] = 0;
        }
    }

    //algo for multiplying the matrices
    
    /* what we do here is use three for loops first is for the row of first matrix and second loop
    is for the coulumn of second matrix and third to traverse the component of row of first matrix and
    column of second matrix and multiplying and adding them and then placing to the answer matrix */

    for(int i =0; i<n1; i++){
        for(int j=0; j<n3; j++){
            for(int k=0; k<n2; k++){
                ansMat[i][j] += mat1[i][k]*mat2[k][j];
            }
        }
    }

    //printing the reulted matrix 
    for(int i=0; i<n1; i++){
        for(int j=0; j<n3; j++){
            cout<<ansMat[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

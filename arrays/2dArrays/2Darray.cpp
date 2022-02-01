#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n,m;
    cin>>n;
    cin>>m;
    int arr[n][m];
    for(int i = 0; i<n; i++){
        for(int k = 0; k<m; k++){
            cin>>arr[i][k];
        }
    }

    cout<<"Matrix is: "<<endl;

     for(int i = 0; i<n; i++){
        for(int k = 0; k<m; k++){
            cout<<arr[i][k]<<" ";
        }
        cout<<endl;
    }


    //checking if a number is present in the array
    
    return 0;
}

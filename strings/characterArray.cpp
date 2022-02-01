#include<bits/stdc++.h>
using namespace std; 

int main(int argc, char const *argv[])
{
    int n; 
    cin>>n;
    cin.ignore();

    char arr[n+1];
    cin.getline(arr,n);
    cin.ignore();

    int i =0;

    int currentLen = 0, maxLen = 0;
    int start = 0, maxSt = 0;

    while(1){
        if(arr[i] == ' ' || arr[i] == '\0'){
            if(currentLen>maxLen){
                maxLen = currentLen;
                maxSt = start;
            }
            currentLen = 0;
            start = i+1;
        }
        else{
            currentLen++;
        }
        if(arr[i] == '\0'){
            break;
        }
        i++;
    }

    cout<<maxLen<<endl;

    for(int i=0; i<maxLen; i++){
        cout<<arr[i+maxSt];
    }
    return 0;
}

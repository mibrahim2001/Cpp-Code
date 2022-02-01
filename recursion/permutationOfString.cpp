#include<bits/stdc++.h>
using namespace std;

void permutation(string s, string ans){
    //base condition
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }

    //a for loop to call the recursive function s.length() times
    for(int i=0; i<s.length(); i++){
        char ch = s[i];
        string ros = s.substr(0,i) + s.substr(i+1);

        //recursive call
        permutation(ros,ans+ch);
    }
}

int main(int argc, char const *argv[])
{
    permutation("ABC","");
    return 0;
}

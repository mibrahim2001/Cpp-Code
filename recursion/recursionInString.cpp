#include<bits/stdc++.h>
using namespace std;

//a function to reverse the given string 
void reverseString(string s){
    if(s.length()==0){
        return;
    }
    string ros = s.substr(1);
    reverseString(ros);
    cout<<s[0];
}

//a function that replaces the value of pi(3.14) by the 'pi' in a string
void replacePi(string s){
    if(s.length()==0){
        return;
    }
    if(s[0]=='p' && s[1]=='i'){
        cout<<"3.14"<<" ";
        replacePi(s.substr(2));
    }
    else{
        cout<<s[0]<<" ";
        replacePi(s.substr(1));
    }
}

//a function to remove duplicate from a string 
string removeDuplicate(string s){
    if(s.length() == 0){
        return "";
    }
    
    //storing first character of the string
    char ch = s[0];

    //getting the rest of string in ans 
    string ans = removeDuplicate(s.substr(1));

    //if the character ch matches the first character of ans then we return just ans and hence discarding the duplicate character ch
    if(ch == ans[0]){
        return ans;
    }

    //otherwise we return both the character and the ans 
    return (ch + ans);
}

//a function to move all the x to end in a string 
string moveallX(string s){
    if(s.length() == 0){
        return "";
    }
    //we get the first character of string s in ch and get rest of string in ans
    char ch = s[0];
    string ans = moveallX(s.substr(1));

    //if the character is equal to x then we return ans + x (hence moving it to the end of the ans)
    if(ch == 'x' || ch == 'X'){
        return (ans + ch);
    }

    //otherwise we return the ch + ans (the character remains at its original position)
    return (ch + ans);
}


//a function to write all the substrings of a string possible 
void subStrings(string s, string ans){
    if(s.length() == 0){
        cout<<ans<<endl;
        return;
    }

    //take the first character and the remaining string in ros
    char ch = s[0];
    string ros = s.substr(1);

    //then call the recursive function two times first with just ans and then with ans plus the character we stored
    subStrings(ros,ans);
    subStrings(ros,ans+ch);


}

int main(int argc, char const *argv[])
{
    /* reverseString("AlexBhatti");

    replacePi("pippipppiiipi");

    string duplicateRemove = removeDuplicate("aaabbbccddeeffaa");
    cout<<duplicateRemove<<endl;

    string xAtEnd = moveallX("aaxxsaXsXlx");
    cout<<xAtEnd<<endl; 
    
    subStrings("ABC",""); */





    
    return 0;
}

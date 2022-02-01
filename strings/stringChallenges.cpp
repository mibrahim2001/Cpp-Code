#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    //captialize the string (convert to upper case letter)
    string s = "asdfvadf";
    /* for(int i=0; i<s.length(); i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            s[i] -= 32; //difference between uppercase and lower case is 32
        }
    } */

    //or we can use this function 
    transform(s.begin(),s.end(),s.begin(), ::toupper);

    cout<<s<<endl;

    //converting to lower case
    /* for(int i=0; i<s.length(); i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            s[i] += 32; //difference between uppercase and lower case is 32
        }
    } */

    //or we can use this funciton 
    transform(s.begin(),s.end(),s.begin(), ::tolower);
    cout<<s<<endl;

    //get maximum number possible from a string of numbers
    string num = "123124123";
    //using sort fuction we will sort the numbers in decreasing order and automatically get the larger number
    sort(num.begin(),num.end(),greater<int>());
    cout<<num<<endl;

    //find the most repeated character in a string
    string s1 = "adsafjlcxvafhiewfsdfkdsjhcv";

    int freq[26]; //taking an array of 26 because of 26 characters 

    //initialising this array with 0
    for(int i=0; i<26; i++){
        freq[i] = 0;
    }

    //increasing the frequency of the occuring character
    for(int i=0; i<s1.length(); i++){
        freq[s1[i]-'a']++;
    }

    char ans = 'a';
    int maxC = 0;

    for(int i=0; i<26; i++){
        if(freq[i]>maxC){
            maxC = freq[i];
            ans = i+'a';
        }
    }

    cout<<maxC<<" "<<ans<<endl;
    return 0;
}

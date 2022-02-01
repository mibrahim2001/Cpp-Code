#include <bits/stdc++.h>
using namespace std;

string keypad[] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

void printKeyPadCombo(string s, string ans){
    //base condition
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch = s[0]; //storing the first character in ch to take the first index of code
    string code = keypad[ch - '0']; //taking code from index 'ch' (we substract a number character from '0' to get corresponding int value )
    string ros = s.substr(1); //getting the rest of string(ros) to past to recursive function 

    //a for loop to call the recursive function with ros and ans + code(index) to print all combinations
    for(int i=0; i<code.length();i++){
        printKeyPadCombo(ros,ans+code[i]);
    }

}

int main(int argc, char const *argv[])
{
    printKeyPadCombo("23",""); //23 argument are the 2 indexes( index for keypad[] ) for combination, 2 being first and 3 being second, and the second argument is ans which is an empty string to start with 
    
    return 0;
}



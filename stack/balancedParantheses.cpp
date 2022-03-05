#include<bits/stdc++.h>
using namespace std;

bool isValid(string s){
    stack<char> st;
    bool valid = true;
    for(int i=0; i<s.length(); i++){
        //if it is any of the opening brackets simply push it to stack
        if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
            st.push(s[i]);
        }
        //else if it is one of the closing brackets perform the following operations
        else if(s[i]==')'){
            if(!st.empty() && st.top()=='('){
                st.pop();
            }
            else{
                valid = false;
                break;
            }
        }
        else if(s[i]==']'){
            if(!st.empty() && st.top()=='['){
                st.pop();
            }
            else{
                valid = false;
                break;
            }
            
        }
        else if(s[i]=='}'){
            if(!st.empty() && st.top()=='{'){
                st.pop();
            }
            else{
                valid = false;
                break;
            }
            
        }
    }

    //lastly we check if our stack is empty or not 
    if(!st.empty()){
        valid = false;
    }

    return valid;
}

//Driver function 
int main(int argc, char const *argv[])
{
    string s = "{[()]}"; //an example of balanced parantheses
    
    if(isValid(s)){
        cout<<"Balanced parantheses!"<<endl;
    }
    else{
        cout<<"Unbalanced parantheses!"<<endl;
    }
    return 0;
}

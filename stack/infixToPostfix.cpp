#include<bits/stdc++.h>
using namespace std;

int prec(char c){

    if(c=='^'){
        return 3;
    }
    else if (c=='*'||c=='/'){
        return 2;
    }
    else if(c=='+'||c=='-'){
        return 1;
    } 
    else{
        return -1;
    }
}

string infixToPostfix(string s){
    stack<char> st;
    string res;
    
    //loop to traverse the given string as tokens and perform the operations 
    for(int i=0; i<s.length();i++){
        //adding the operands directly to the string 
        if((s[i]>='a'&&s[i]<='z') || (s[i]>='A'&&s[i]<='Z')){
            res += s[i];
        }
        //push the opening bracket to stack simply 
        else if(s[i] == '('){
            st.push(s[i]);
        }
        //if closing bracket is found do this 
        else if(s[i] == ')'){
            while(!st.empty() && st.top() != '(' ){
                //adding the operators to string from stack until opening bracket is found in the stack 
                res += st.top();
                st.pop();
            }
            //popping the opening bracket at the end 
            if(!st.empty()){
                st.pop();
            }
        }
        //lastly if any of operators is found do this 
        else{
            while(!st.empty() && (prec(st.top()) > prec(s[i]) )){
                //we will pop and add to the string any operator whose precedence is greater then the current operator 
                res += st.top();
                st.pop();
            }
            //lastly we will push the current operator to the stack 
            st.push(s[i]);
        }

    }

    //after the end of for loop we will check if there is any operator left in stack and print it 
    while(!st.empty()){
        res += st.top();
        st.pop();
    }

    //now we will return the result string 
    return res;

}

//Driver function 
int main(int argc, char const *argv[])
{
    string infix = "(a-b/c)*(a/k-l)";
    cout<<"Infix string: "<<infix<<endl;
    string postfix = infixToPostfix(infix);
    cout<<"Postfix String: "<<postfix<<endl;

    return 0;
}

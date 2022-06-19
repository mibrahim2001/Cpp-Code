#include<bits/stdc++.h>
using  namespace std;

//method to substract two consecutive numbers
stack<int> stackSubstract(stack<int> s1){
    stack<int> s2;
    int var1 = 0;
    int var2 = 0;

    //using a loop to traverse through the stack 
    while(!(s1.empty()) && s1.size()>1){
        var1 = s1.top();
        s1.pop();
        var2 = s1.top();
        s1.pop();

        if(var1>var2){
            var1 = var1-var2;
        }
        else if(var2>var1){
            var2 = var2 - var1;
        }

        s2.push(var1);
        s2.push(var2);
        
    }

    s2.push(s1.top());
    s2.pop();

    while(!s2.empty()){
        s1.push(s2.top());
        s2.pop();
    }
    return s1;

    
}

int main(int argc, char const *argv[])
{
    stack<int> st1;
    st1.push(0);
    st1.push(3);
    st1.push(5);
    st1.push(4);
    st1.push(3);
    st1.push(1);
    st1.push(2);

    stack<int> st2;

    st2 = stackSubstract(st1);

     int c = 0;
    while(!st2.empty()){
        cout<<st2.top()<<" ";
        st2.pop();
        c++;
    }

 
return 0;
}

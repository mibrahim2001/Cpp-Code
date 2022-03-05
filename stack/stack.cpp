#include<bits/stdc++.h>
using namespace std;

#define n 100

class Stack{
    int *arr;
    int top;

    public:
    //constructor
    Stack(){
        arr = new int[n];
        top = -1;
    }

    //function to push element in stack 
    void push(int a){
        if(top == n-1){
            cout<<"Stack is full"<<endl;
            return; 
        }
        top++;
        arr[top] = a; 
    }

    //function to check if the stack is empty 
    bool isEmpty(){
        return top==-1;
    }

    //function to pop the element in the stack 
    void pop(){
        if(isEmpty()){
            cout<<"There is no element in stack to pop"<<endl;
            return;
        }
        top--;
    }

    //function to get the top element in the stack
    int topOfStack(){
        if(isEmpty()){
            cout<<"Stack is empty"<<endl;
            return -1;
        }

        return arr[top];

    }
};

int main(int argc, char const *argv[])
{
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<"Top of stack: "<<st.topOfStack()<<endl;
    st.pop();
    cout<<"Top of stack after popping one element: "<<st.topOfStack()<<endl;
    st.pop();
    st.pop();
    st.pop();
    st.topOfStack();
    
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

//a function sum calling itself to calculate sum of numbers upto n
int sum(int n){
    if(n == 0){
        return 0;
    }

    int prevSum = sum(n-1);
    return n + prevSum;
}

//a function power that gives the power by calling itself
int power(int a, int b){
    if(b==0){
        return 1;
    }
    int prevPower = power(a, b-1);
    return a * prevPower;
}

//a function to find factorial of a given number by calling itself
int factorial(int n){
    if(n == 0){
        return 1;
    }
    int prevFact = factorial(n-1);
    return n*prevFact;
}

//a function to find nth fibonacci number
int fibonacci(int n){
    if(n == 0 || n == 1){
        return n;
    }
    
    
    return fibonacci(n-1)+fibonacci(n-2);
}
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    cout<<fibonacci(n);
    return 0;
}

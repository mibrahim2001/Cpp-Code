#include <iostream>
using namespace std;

int main(){
    
    int i = 5;
    int j = 10;
    int k;
            
        //4     4       11      5       11
    k = --i  +  i++  +  j--  -  i--  -  ++j;

    cout<<"int i = "<<i<<endl; //4
    cout<<"int j = "<<j<<endl; //10
    cout<<"int k = "<<k<<endl; 


    // int i = 10;
    // int j = 20;

                                   
    // int k;

    //     //10    9       19     20     9       20    10    19
    // k = i--  -  i++  +  --j  - ++j +  --i  -  j-- + ++i - j++;

    // cout<<"int i = "<<i<<endl; //10
    // cout<<"int j = "<<j<<endl; //20
    // cout<<"int k = "<<k<<endl; //-20


    return 0;
}
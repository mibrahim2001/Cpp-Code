#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{

    /* //array and pointer
    int arr[] = {1,2,3,4};
    cout<<*arr<<endl; //will print the 0th element in the array

    int* pnt = arr;
    for(int i =0; i<4; i++){
        cout<<*pnt;
        pnt++;
    }
    
    //line break
    cout<<endl;

    //print array by *arr
    for(int i=0; i<4; i++){
        cout<<*(arr+i);
    }
 */
    //pointer to pointer
    int a = 10; 
    int* p = &a;
    cout<<*p<<endl;

    int** q = &p;//pointer pointing to a pointer 

    cout<<*q<<endl; //single dereference(Adress of p will be printed)
    cout<<**q<<endl;// double derefernece (Value of p will be printed)

    return 0;
}

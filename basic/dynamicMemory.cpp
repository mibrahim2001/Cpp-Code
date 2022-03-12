#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    //dynamically allocating an integer variable by using new operator
    int *num = new int;
    *num = 10;
    //accessing dynamically allocated space
    //printing the integer stored on memory location that pointer num points
    cout<<*num<<endl;

    //deallocation of dynamic  memory 
    delete num; //this will free up space occupied by num
    num = NULL; //reset the pointer to null
    

    return 0;
}

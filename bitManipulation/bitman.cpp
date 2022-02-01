#include<bits/stdc++.h>
using namespace std;

//get bit returns the value of bit (1 or 0) at the position of the number we give 
int getBit(int n, int pos){
    return((n & (1<<pos)) != 0);
}

//set bit sets the bit 1 at the position we give 
int setBit(int n, int pos){
   return(n | (1<<pos)); 
}

//clear bit sets the bit 0 at the position we give (it is done by taking & of number and 1's compliment of left shifted 1 at position pos)
int clearBit(int n, int pos){
    return(n & ~(1<<pos));
}

int updateBit(int n, int pos, int val){
    //first we clear the bit at that position 
    int mask = ~(1<<pos);
    n = n & mask;
    //then we update the value at that position 
    return(n | val<<pos);
}
int main(int argc, char const *argv[])
{
    cout<<getBit(5,2)<<endl;
    cout<<setBit(5,1)<<endl; 
    cout<<clearBit(5,2)<<endl;
    cout<<updateBit(5,1,1)<<endl;
    
    return 0;
}

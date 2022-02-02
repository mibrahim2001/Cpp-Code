#include <bits/stdc++.h>
using namespace std;

/* Given n friends, each one can remain single or can be paired up with some other friend.
Each friend can be paired only once. 
Find out the total number of ways in which friends can remain single or can be paired up. */

//function to find the possible number of ways for n friends
int friendsPair(int n){
    //base condition 

    /* what happens here is that if n = 0 we have to return 0, if n = 1 then it has to remain single
    because no other option to pair so we return 1 and if n = 2 then we have two options either two of them
    remain single or both get paired with each other so we return 2 */
    if(n == 0 || n == 1 || n == 2){
        return n;
    }

    //recursive case 
    /* 1st case in which we do not pair the nth friend (n-1) */
    /* 2nd case in which we pair the nth friend and we find that by (n-1) * friendsPair(n-2) -> because when we pair it with n-1 we are left with n-2 friends  */
    return friendsPair(n-1)  + (n-1) * friendsPair(n-2);
}

int main(int argc, char const *argv[])
{
    int pairs = friendsPair(4);
    cout<<pairs<<endl;
    return 0;
}

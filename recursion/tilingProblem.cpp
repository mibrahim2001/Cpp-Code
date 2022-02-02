#include <bits/stdc++.h>
using namespace std;

//Given a "2 x n" board and tiles of size "2 x 1", count the number of ways to tile the given board using these tiles

//a function that returns the possible number of ways tiles can be placed
int tilingWays(int n){
    //base cases
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }

    //recursive case
    return tilingWays(n-1) + tilingWays(n-2);

}

int main(int argc, char const *argv[])
{
    int ways = tilingWays(4);
    cout<<ways<<endl;

    return 0;
}

#include<bits/stdc++.h>
using namespace std;

/* Pair is used to combine together two values that may be different in type. 
Pair provides a way to store two heterogeneous objects as a single unit. 
It is basically used if we want to store tuples. The pair container is a 
simple container defined in <utility> header consisting of two data elements or objects. 

The first element is referenced as ‘first’ and the second element as ‘second’ and the order 
is fixed (first, second).
Pair can be assigned, copied, and compared. The array of objects allocated in a map or 
hash_map is of type ‘pair’ by default in which all the ‘first’ elements are unique keys 
associated with their ‘second’ value objects.
To access the elements, we use variable name followed by dot operator followed by the 
keyword first or second. */

int main(int argc, char const *argv[])
{
    //pair can be of same type or different type(like below)
    pair<int,char> p;

    //we access first and second value by using keywords 'first' and 'second' respectively
    p.first = 1;
    p.second = 'c';

    return 0;
}

#include<bits/stdc++.h>
using namespace std; 

/* We have to place 0 to n-1 numbers in an array 0 will be placed at the smallest element position
and n-1 will be placed at the largest element position, we have to maintain the previous indexes of 
elements here so we will use pair to do so */

/* We can write custom comparators according to our needs.
They are very useful in sorting. It can be generic as well. */

//a comparator function that decide which pair should be placed first in vector
bool myCompare(pair<int,int> p1, pair<int,int> p2){
    return p1.first < p2.first;
}
//Driver function
int main(int argc, char const *argv[])
{
    int arr[] = {5,6,4,2,3,9};

    vector<pair<int,int>> v;

    //now we will assign value and index value of each element to a pair in vector
    for(int i=0; i<(sizeof(arr)/sizeof(arr[0])); i++){
        v.push_back(make_pair(arr[i],i)); //make pair function make a pair of two values
    }

    //sorting the pairs in increasing order by comparing their first value(original value in array)
    //we use myCompare comparator here which is a custom comparator which we have declared 
    sort(v.begin(),v.end(),myCompare);

    //now we will place numbers from 0 to n-1 according to the indexes in the pairs
    for(int i=0; i<v.size(); i++){
        /* here we are placing i at arr[index](which we get by taking the ith
        element in vector v which is a pair and getting second value of that pair which
        is original index of that value in previous array ) */
        arr[v[i].second] = i;
        
    }

    for(int i=0; i<v.size(); i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}

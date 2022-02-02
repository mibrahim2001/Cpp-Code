#include <bits/stdc++.h>
using namespace std;

/* Given weights and values of n items, put these items in a knapsack of capacity W to get the 
maximum total value in the knapsack. In other words, given two integer arrays val[0..n-1] and 
wt[0..n-1] which represent values and weights associated with n items respectively. Also given
an integer W which represents knapsack capacity, find out the maximum value subset of val[] 
such that sum of the weights of this subset is smaller than or equal to W. You cannot break an
item, either pick the complete item or don’t pick it (0-1 property). */

int knapsack(int value[], int weight[], int n, int W)
{ //value array, weight array, n is size of array, W is the capacity of knapsack
    //base condition
    if (n == 0 || W == 0)
    {
        //we have traversed every item or the capacity of knapsack is full
        return 0;
    }
    if (weight[n - 1] > W)
    {
        //if the weight of the nth item is greater then the capacity we cannot include it so,
        return knapsack(value, weight, n - 1, W);
    }

    /* we have two condition here that we include nth item(if we include it we will add its 
    corresponding value too)or not include it, then we will use the max function
    on both condition and check which will give more value and include it */

    return max(knapsack(value, weight, n - 1, W - weight[n - 1]) + value[n - 1], knapsack(value, weight, n - 1, W));
}

//Driver function
int main(int argc, char const *argv[])
{
    int weight[] = {10, 20, 30};
    int value[] = {100, 50, 150};
    int W = 50;
    int n = sizeof(weight) / sizeof(weight[0]);

    int ans = knapsack(value, weight, n, W);
    cout << ans << endl;
    return 0;
}

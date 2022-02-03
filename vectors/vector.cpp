#include<bits/stdc++.h>
#include<vector>
using namespace std;

/* Vectors are same as dynamic arrays with the ability to resize itself automatically when an 
element is inserted or deleted, with their storage being handled automatically by the container. 
Vector elements are placed in contiguous storage so that they can be accessed and traversed 
using iterators. In vectors, data is inserted at the end. Inserting at the end takes 
differential time, as sometimes there may be a need of extending the array. Removing the last 
element takes only constant time because no resizing happens. Inserting and erasing at the 
beginning or in the middle is linear in time. */

int main(int argc, char const *argv[])
{
    //declaration of a vector
    vector<int> v;

    //addition of elements in vector is done by a function called push_back
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    //we can iterate in vector just like arrays
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }cout<<endl;

    //or we can use iterator to iterate in vector

    /* Iterators are just like pointers used to access the container elements.
    Iterators are used to traverse from one element to another element, a process is known 
    as iterating through the container.
    The main advantage of an iterator is to provide a common interface for all the containers 
    type.
    Iterators make the algorithm independent of the type of the container used.
    Iterators provide a generic approach to navigate through the elements of a container. */

    vector<int>::iterator it;
    
    for(it=v.begin(); it!=v.end(); it++){
        cout<<*it /*we use * because it is a pointer*/<<" ";
    }cout<<endl;

    //another way is to use the auto keyword 

    /* The auto keyword specifies that the type of the variable that is being declared will be 
    automatically deducted from its initializer. In the case of functions, if their return type 
    is auto then that will be evaluated by return type expression at runtime. Good use of auto 
    is to avoid long initializations when creating iterators for containers.*/

    for(auto element:v){
        cout<<element<<" ";
    }cout<<endl;

    //we can also declare the size of vector(first argument) and the value of elements in it(second arg)
    vector<int> v2(3,50); //[50,50,50]

    //pop_back function is used to remove the last element in vector
    v.pop_back(); //[1,2]

    //swap function will swap the values of two vectors with each other 
    swap(v,v2);

    for(auto element:v){
        cout<<element<<" ";
    }cout<<endl; //50 50 50 
    
    for(auto element:v2){
        cout<<element<<" ";
    }cout<<endl; //1 2


    //sort function to sort the vector

    /* It generally takes two parameters, the first one being the point of the array/vector 
    from where the sorting needs to begin and the second parameter being the length up to which 
    we want the array/vector to get sorted. The third parameter is optional and can be used in 
    cases such as if we want to sort the elements lexicographically. */
    /* sort() takes a third parameter that is used to specify the order in which elements are 
    to be sorted. We can pass “greater()” function to sort in descending order. This function 
    does comparison in a way that puts greater elements before. */
    
    sort(v.begin(),v.end());

    /* more functions on vectors can be found here: 
    https://www.cplusplus.com/reference/vector/vector */

    return 0;
}



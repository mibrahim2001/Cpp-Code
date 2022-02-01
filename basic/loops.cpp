#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // int num;
    // cin>>num;

    // int i;

    // //a for loop to check if the number is prime 
    // //starts from 2 because every number is divisible by 1 

    // for ( i = 2; i < num; i++)
    // {
    //     //if the num divides by any other number it is not a prime number
    //     if (num%i == 0){
    //         std::cout << "Not Prime" << std::endl;
    //         break;
    //     }
    // } 

    // if(i == num){
    //     std::cout << "Prime" << std::endl;
    // }


    //to check prime numbers between a range 
    int startNum;
    cin>>startNum;

    int endNum;
    cin>>endNum;

    for (int num= startNum; num<= endNum; num++)
    {
        int c;
        for (c = 2; c<num; c++)
        {
            //if the num divides by any other number it is not a prime number
            if (num% c == 0){
                break;
            }
        }
     if(c == num){
        std::cout << num<< " is a prime number"<< std::endl;
    } 
        
    }
     
   

    

    
    return 0;
}

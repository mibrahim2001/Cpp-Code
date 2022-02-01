#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int amount;
    cin>>amount;
    
    //checking the amount and going with the right person in budget 
    if(amount>5000){
        cout<<"Neha\n";

        //nested if else to check where should you go according to the budget 
        if (amount>7000)
        {
            cout<<"Trip\n";
        }else if(amount<7000){
            cout<<"Local Bazar\n";
        }
        
    }else if(amount>2000){
        cout<<"Reshma\n";

        //nested if else to check where should you go according to the budget 
         if (amount>3000)
        {
            cout<<"Trip\n";
        }else if(amount<3000){
            cout<<"Local Bazar\n";
        }

    }else{
        cout<<"Friends\n";
    }
    
    return 0;
}
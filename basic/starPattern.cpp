#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

    //hollow reactangle 
   /*  int row,column;
    cin>>row;
    cin>>column;

    for (int i = 1 ; i <= row; i++)
    {
        for (int j = 1; j <= column; j++)
        {
            if(i==1 || i == row || j == 1 || j == column ){
                cout << "*" ;
            }
            else{
                cout << " ";
            }
        }
        cout<<endl;
        
    
    }
 */




    /* //inverted half pyramid 
    int r;
    cin>>r;
   

    for (int i = r; i >= 1 ; i--)
    {
        for (int j = 1; j <= i ; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
 */



    //half pyramid after 180 degree rotation

   /*  int n;
    cin>>n;

    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n; j++){
            if(j <= n-i){
                cout<<" ";
            }else{
                cout<<"*";
            }
        }

        cout<<endl;
    } */



    //half pyramid using numbers

   /*  int row;
    cin>>row;
    for(int i = 1; i<=row; i++){
        for(int j = 1; j<=i; j++){
            cout<<i;
        }
        cout<<endl;
    } */



    //Floyds triangle

   /*  int row;
    int num = 1;
    cin>>row;
    for(int i = 1; i<=row; i++){
        for(int j = 1; j<=i; j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
        
    } */
    

    //butterfly shape 

    /* int n; 
    cin>>n; 
    //loop for upper part
    for(int i =1 ; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        int space = 2*n - 2*i;
        for(int c = 1; c<=space; c++){
            cout<<" ";
        }
        for(int a = 1; a<=i; a++){
            cout<<"*";
        }

        cout<<endl;
    }
    //loop for lower part 
    for(int i =n ; i>=1; i--){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        int space = 2*n - 2*i;
        for(int c = 1; c<=space; c++){
            cout<<" ";
        }
        for(int a = 1; a<=i; a++){
            cout<<"*";
        }

        cout<<endl;
    } */


    //inverted number pattern 
  /*   int n; 
    cin>>n; 

    for(int i = n; i>=1; i--){
        for(int j = 1; j<= i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
 */

    // 0 1 pattern (will print 1 if addition of row and column is even number)
 /*    int n; 
    cin>>n;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=i; j++){
            if((i+j) % 2 == 0){
                cout<<"1 ";
            }else{
                cout<<"0 ";
            }
        }
        cout<<endl;
    } */

    //rhombus pattern 
/* 
    int n;
    cin>>n;

    for(int i = n; i>=1; i--){
        for(int j = 1; j<= i-1; j++){
            cout<<" ";
        }
        for(int a = 1; a<=n; a++){
            cout<<"*";
        }

        cout<<endl;
    } */



    //palindrome pattern 
    int n; 
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        int j;
        for (j = 1; j <= n-i; j++)
        {
            cout<<"  ";
        }

        int k = i;  
        for(; j<=n;j++){
            cout<<k--<<" ";
        }

        k = 2;
        for(; j<=n+i-1;j++){
            cout<<k++<<" ";
        }

        cout<<endl;
        
    }
    
    return 0;
}
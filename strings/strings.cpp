#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    /* //append function 
    string str;
    cin>>str;
    string str1;
    cin>>str1;

    str.append(str1);

    cout<<str; */

    //compare function(used to compare two strings)
    string str1 = "abc";
    string str2 = "abc";
    cout<<str1.compare(str2)<<endl;
    if(!str1.compare(str2)){
        cout<<"string matches"<<endl;
        
    }

    //empty funciton(used to find if our string is empty)
    if(!str1.empty()){
        cout<<"String is not empty!"<<endl;
    }

    //erase function(used to erase characters in a string)
    string str3 = "nincompoop";
    str3.erase(3,3);//first argument is the index for first character to be erased and next argument takes the number of characters to erase
    cout<<str3<<endl;

    //find function(used to find the first character index of a particuler substring)
    cout<<str3.find("poop")<<endl;

    //insert function(used to insert a string within a string)
    str3.insert(3, "lol"); //first argument is the index where it needs to be inserted and second is the string to be inserted
    cout<<str3<<endl;

    //size/length function(to find the length of the string)
    cout<<str3.size()<<" "<<str3.length()<<endl;

    //substr function(to get a substring of a string)
    string str4 = str3.substr(3,6); //arguments are starting index and ending index
    cout<<str4<<endl;

    //stoi function(to convert string of numbers into integer)
    string str5 = "123";
    int x = stoi(str5);
    cout<<x<<endl;

    //to_string function(to convert integer into string)
    cout<<to_string(x) + "2" << endl;

    //sort function (sort string alphabatically)
    string str6 = "xflgkjrxtad";
    sort(str6.begin(),str6.end());
    cout<<str6<<endl;
    return 0;
}

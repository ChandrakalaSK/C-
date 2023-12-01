#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter the character:";
    cin>>ch;
    //a b c ,A B C ! @ # $ % 1234 these are all characters
    //a to z ->97 to 122
    //A to Z ->65 to 90
    //0 t0 9 ->48 to 57
    int ascii =(int)ch;
    if((ascii>=97 && ascii<=122) || (ascii>=65 && ascii<=90))
    {
         cout<<"The character is lower case alphabet:";
    }
   else
    {
         cout<<"The character is an alphabet:"; 
    }
}
#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the character:";
    char ch;
    cin>>ch;
    int ascii=(int)ch;
    if((ascii>=97 && ascii<=122)||(ascii>=65 && ascii<=90))
    {

    if(ch=='a' || ch=='e' || ch=='i'||ch=='o'||ch=='u')
    {
        cout<<"Entered character is vowel"<<endl;
    }
    else{
        cout<<"Entered character is consonant"<<endl;
    }
   
   
    }
     
    else
     {
        cout<<"Entered character is not an alphabet";
     }

}
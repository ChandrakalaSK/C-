#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter three digit number:";
    int n;
    cin>>n;
    if(n>=100 && n<=999)
    {
        cout<<"three digit number:";
    }
    else
    {
        cout<<"Not a three digit number";
    }
}
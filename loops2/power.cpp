#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter a base:";
    cin>>a;
    cout<<"Enter a exponent:";
    cin>>b;
    int power=1;
    for(int i=1;i<b;i++)
    {
        power*=a;
    }
    cout<<a;
}
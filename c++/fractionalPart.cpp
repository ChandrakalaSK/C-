#include<iostream>
using namespace std;
int main()
{
    // float x;
    // cin>>x;//9.1
    // int y=(int)x;
    // cout<<y<<endl;
    // float z=(float)y;
    // cout<<z<<endl;
    // x=x-z;
    // cout<<x<<endl;

    //If number is negative number
    float x;
    cin>>x;
    int y=(int)x;
    if(y<0) y=y-1;
    float z=(float)y;
    x = x-z;
    cout<<x;
}
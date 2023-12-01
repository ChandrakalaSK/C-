#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter an integer:";
    int n;
    cin>>n;
    // if(n%2==0) cout<<"Even:";
    // else cout<<"Odd:";
    n%2==0 ? cout<<"Even": cout<<"Odd";
}
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;
    int reverse=0;
    int lastDigit=0;
    while(n>0)
    {
        reverse=reverse*10;
        lastDigit=n%10;
        reverse=reverse+lastDigit;
        n=n/10;
    }
    cout<<reverse<<endl;
}
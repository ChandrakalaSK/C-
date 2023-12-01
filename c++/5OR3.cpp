#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter a integer:";
    int n;
    cin>>n;
    if(n%3==0 || n%5==0)
    {
        cout<<"Number divisible by both 5 or 3";
    }
    else{
         cout<<"Number not divisible by both 5 and even number not divisible by 3";
    }
}
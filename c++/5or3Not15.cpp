#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter an integer:";
    int n;
    cin>>n;
    // if((n%5==0 || n%3==0 )&& n%15!=0)
    // {
    //     cout<<"The number divisible by  5 or 3 but not 15";
    // }
    // else{
    //     cout<<"Not matching the conditions";
    // }
    if(n%5==0 || n%3==0)
    {
        if(n%15!=0)
        {
             cout<<"The number divisible by  5 or 3 but not 15";
        }
        else{
       cout<<"Not matching the conditions";

        }
    }
    else{
        
        cout<<"Not matching the conditions";

    }
}
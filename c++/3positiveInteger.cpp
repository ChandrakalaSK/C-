#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter 1st number:";
    cin>>a;
    cout<<"Enter 2nd 1st number:";
    cin>>b;
    cout<<"Enter 3rd 1st number:";
    cin>>c;
    if(a>b)
    {
        if(a>c)
        {
            cout<<a<<"is greatest";
        }
        else//c > a, a > b ->c > a
        {
            cout<<c<<"is greatest";
        }
    }
    else{//b>a
       if(b>c)
       {
         cout<<b<<"is greatest";
       }
       else//c>b>a
       {
        cout<<c<<"is greatest";
       }
    }

}

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number of columns:";
    cin>>n;
    int m;
    cout<<"Enter a number of rows:";
    cin>>m;
    for(int i=1;i<=m;i++)
    {
        for(int i=1;i<=n;i++)
        {
             cout<<i;
        }
         cout<<endl;
    }
  
}
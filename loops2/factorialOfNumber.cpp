#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"Enter a number:";
cin>>n;
int Product=1;
for(int i=1;i<=n;i++)
{
Product*=i;
}
cout<<Product;
}
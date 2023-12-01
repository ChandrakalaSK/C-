#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the cost price:";
    int cp;
    cin>>cp;
    cout<<"Enter the selling price:";
    int sp;
    cin>>sp;
    if(sp>cp)
    {
        int Profit=sp-cp;
        cout<<"Profit=:"<<Profit;
    }
    if(cp>sp)
    {
        int Loss=cp-sp;
        cout<<"Loss=:"<<Loss;
    }
    if(sp==cp)
    {
        cout<<"No Profit and No Loss";
    }


}
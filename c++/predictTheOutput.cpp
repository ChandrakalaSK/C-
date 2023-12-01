#include<iostream>
using namespace std;
int main()
{
    // bool p = false;
    // bool q = false;
    // bool r = true;
    // cout<<(p==q==r);//p==q(0==0->1(true))
    //                 //(q==r)(1==1->1)(true)
    //                 //output 1
    int p=1;
    int q=2;
    int r=2;
    cout<<(p==q==r);//(p==q)==(r)->(0)==2=>0 left to right
    cout<<(p==(q==r));//(1)==(1)->1 right to left

}
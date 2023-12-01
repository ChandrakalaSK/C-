#include<iostream>
using namespace std;
int main()
{
    int a =14;//a means dividend
    int b =3;// b is divisor
    int q=a/b;//q is quotient
    int r;//r is remainder
    // cout<<q<<endl;
     r=a-b*q;
    // cout<<r<<endl;
    // r = a % b ;//remainder when a divided by b
    cout<<r<<endl;
    // formula
    // a = (b*q) + r;
    // r = a-(b*q);
}
#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the marks of the student:";
    int n;
    cin>>n;
    // if(n>=91 && n<=100)
    // {
    //     cout<<"Excellent"<<endl;
        
    // }
    // if(n>=81 && n<=90)
    // {
    //     cout<<"very good"<<endl;;
    // }
    // if(n>=71 && n<=80)
    // {
    //     cout<<"good"<<endl;;
    // }
    // if(n>=61  && n<=70)
    // {
    //     cout<<"Can do better"<<endl;;
    // }
    // if(n>=51 && n<=60)
    // {
    //     cout<<"Average"<<endl;;
    // }
    // if(n>=41 && n<=50)
    // {
    //     cout<<"Below Average"<<endl;;
    // }
    // if(n<=40)
    // {
    //     cout<<"Fail";
    // }


    // if(n>=91)
    // {
    //     cout<<"Excellent"<<endl;
    // }
    // else
    // {
    //     if(n>=81)
    //     {
    //         cout<<"Very good";
    //     }
    //     else
    //     {
    //         if(n>=71)
    //         {
    //             cout<<"Good";
    //         }
    //         else
    //         {
    //             if(n>=61)
    //             {
    //                 cout<<"Can do better";
    //             }
    //             else
    //             {
    //                 if(n>=51)
    //                 {
    //                     cout<<"Average";
    //                 }
    //                 else
    //                 {
    //                     if(n>=41)
    //                     {
    //                         cout<<"Below average";
    //                     }
    //                     else
    //                     {
                            
    //                             cout<<"Fail";
                            
    //                     }
    //                 }
    //             }
    //         }
    //     }
    // }
    if(n>=91)       cout<<"Excellent";
    else if(n>=81)  cout<<"Very good";
    else if(n>=71)  cout<<"Good";
    else if(n>=61)  cout<<"Can do better";
    else if(n>=51)  cout<<"Average";
    else if(n>=41)  cout<<"below average";
    else            cout<<"Fail";
    
}
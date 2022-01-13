// You are given an integer, N. Write a program to determine if N is an element of the Fibonacci sequence. 
#include<iostream>
using namespace std;
int main()
{
    int n,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a=0,b=1,c=0;
        while(c<n)
        {
            c=a+b;
            a=b;
            b=c;
        }
        if(c==n)
            cout<<"IsFibo"<<endl;
        else
            cout<<"IsNotFibo"<<endl;
    }
    return 0;
}
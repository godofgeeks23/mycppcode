// this file aims to practice some common pattern questions

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
    	cout<<"*";
    	for (int j = 1; j <= n-2; j++)
    	{
    		if(i==1 || i==n)
    			cout<<"*";
    		else
    			cout<<" ";
    	}
    	cout<<"*"<<endl;
    }
    cout<<endl<<endl;

    cin>>n;
    for(int i=1;i<=n;i++)
    {
    	for(int j=1;j<=(n-i);j++)
    		cout<<" ";
    	for(int j=1;j<=i;j++)
    		cout<<"*";
    	cout<<endl;
    }
    cout<<endl<<endl;

    cin>>n;
    int count = 1;
    for(int i=1;i<=n;i++)
    {
    	for(int j=1;j<=i;j++)
    	{
    		cout<<count<<"  ";
    		count++;
    	}
    	cout<<endl;
    }
    cout<<endl<<endl;

    cin>>n;
    for(int i=1;i<=n;i++)
    {
    	for(int j=1;j<=i;j++)
    		cout<<"*";
    	for(int j=2*(n-i);j>=1;j--)
    		cout<<" ";
    	for(int j=1;j<=i;j++)
    		cout<<"*";
    	cout<<endl;
    }
    for(int i=n;i>=1;i--)
    {
        for(int j=i;j>=1;j--)
    		cout<<"*";
    	for(int j=1;j<=2*(n-i);j++)
    		cout<<" ";
    	for(int j=i;j>=1;j--)
    		cout<<"*";
    	cout<<endl;
    }
    cout<<endl<<endl;

    cin>>n;
    for(int i=1;i<=n;i++)
    {
    	for(int j=1;j<=(n-i);j++)
    		cout<<" ";
    	for(int j = i;j>=1;j--)
    		cout<<j;
    	for(int j=2;j<=i;j++)
    		cout<<j;
    	cout<<endl;
    }
    cout<<endl<<endl;

    
    return 0;
}
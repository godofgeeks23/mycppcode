
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin>>n;

    unordered_map<string, int> obs_time;

    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        cin>>obs_time[s];
    }

    return 0;
}
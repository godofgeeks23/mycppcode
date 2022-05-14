#include <iostream>
#include <unordered_map>
using namespace std;
long long int hackersum(int hack[], int m)
{
    int hacksum = 0;
    unordered_map<int, int> mp;
    for(int i=0;i<=m;i++)
    {
        int s= 0;
        for(int j=i;j<=m;j++)
        {
            s += hack[j];
            mp[s]++;
        }
    }
    for(auto x:mp)
    {
        if(x.second == 1)
        {
            hacksum += x.first;
        }
    }
    return hacksum;
}
int main()
{
    int arr[] = {3,6,6,7,8};
    cout<<hackersum(arr, 5);

    return 0;
}
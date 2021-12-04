#include<bits/stdc++.h>
using namespace std;
// There are n children and m Apple that will be distributed to them. Your task is to count the number of ways this can be done. For example, if n=3 and m=2, there are 6 ways: [0,0,2], [0,1,1], [0,2,0], [1,0,1], [1,1,0] and [2,0,0].

// Input Format

// The only input line has two integers n and m.

// Constraints

// 1≤n,m≤10^6

// Output Format

// Print the number of ways modulo 10^9 +7.

// Sample Input 0

// 3
// 2

// Sample Output 0

// 6


int main()
{
    int n,m;
    cin>>n>>m;
    int ans=0;
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            if(i+j<=n)
            {
                ans=(ans+1)%1000000007;
            }
        }
    }
    cout<<ans;
    
    return 0;
}

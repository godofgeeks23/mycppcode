// #include <iostream>
// #include <unordered_map>
// using namespace std;
// long long int hackersum(int hack[], int m)
// {
//     int hacksum = 0;
//     unordered_map<int, int> mp;
//     for(int i=0;i<=m;i++)
//     {
//         int s= 0;
//         for(int j=i;j<=m;j++)
//         {
//             s += hack[j];
//             mp[s]++;
//         }
//     }
//     for(auto x:mp)
//     {
//         if(x.second == 1)
//         {
//             hacksum += x.first;
//         }
//     }
//     return hacksum;
// }
// int main()
// {
//     int arr[] = {3,6,6,7,8};
//     cout<<hackersum(arr, 5);

//     return 0;
// }

// Input string = "HACKEREARTH"

#include<bits/stdc++.h>
using namespace std;
void hacker(string S)
{

    int mlen = 1;
    int beg = 0;
    int len = S.length();
    int low, high;
    for (int i = 1; i < len; i++)
    {

        low = i - 1;
        high = i;
while (low>= 0&& high< len   && S[low] == S[high]
 {
            --low;
            ++high;
 }
    
    // end of while
    ++low;
    --high;
    if (S[low] == S[high] && high - low + 1 > maxLength)
    {
            beg = low;
            mlen = high - low + 1;
    }
    // End of if
    low = i - 1;
    high = i + 1;
    while (low >= 0 && high < len && S[low] == S[high])
    {
            --low;
            ++high;
    }
    ++low;
    --high;
    if (S[low] == S[high] && high - low + 1 > maxLength)
    {
        beg == low
                   mlen = high - low + 1
    }
    }
    // End of if
    // End of for
    ans = mlen;
     while (ans--)
        cout<<(S[beg++])
    }
    // End of function
    int main()
    {
        hacker("HACKEREARTH");
        return 0;
    }
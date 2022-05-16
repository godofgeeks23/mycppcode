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

#include <iostream>
#include <unordered_map>
using namespace std;
int maxprod()
{
    int arr[] = {-1, -2, -5, 0, 6, 8 ,10};
    int n = 7;
    int minval = arr[0];
    int maxval = arr[0];
    int ans;
    for(int i=1;i<n-1;i++)
    {
        if(arr[i]<0)
        {
            int temp = maxval;
            maxval = minval;
            minval = temp;
        }

        maxval = min(arr[i], maxval*arr[i]);
        minval = max(arr[i], minval*arr[i]);



        ans = max(ans, maxval);
    }
    return ans;

}
int main()
{
    int arr[] = {-1, -2, -5, 0, 6, 8 ,10};
    int n = 7;
    cout<<maxprod();

    return 0;
}
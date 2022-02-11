// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool cmp(ll a, ll b)
{
    return a > b;
}

int getMinimumMoves(vector<ll> A, vector<ll> B)
{
    int n, m;
    n = A.size();
    m = B.size();
    sort(A.begin(), A.end());
    sort(B.begin(), B.end(), cmp);

    ll ans = 0;
    for (int i = 0; i < min(m, n) && A[i] < B[i];
         ++i)
    {
        ans += (B[i] - A[i]);
    }
    return ans;
}
int main()
{
    vector<ll> A = {1, 2, 3, 1, 2};
    vector<ll> B = {3, 4, 2, 1};
    cout << FindMinMoves(A, B);

    return 0;
}

// # include<bits/stdc++.h>
// using namespace std;
// #define ll long int
// int main(){
//     int t;
// 	cin>>t;
// 	while(t--){
// 		int n;
// 		cin>>n;
// 		ll ans = 0;
// 		vector<vector<ll>> v(3,vector<ll>(3));
// 		for(ll i=0;i<3;i++){
// 			cin>>v[i][0]>>v[i][1]>>v[i][2];
// 		}
// 		if(v[0][0]==n && v[1][1]==n && v[2][2]==n){
// 			cout<<ans<<endl;
// 			continue;
// 		}
// 		ll lsum = v[2][0]+v[2][1]+v[1][0];
// 		ll rsum = v[0][1]+v[0][2]+v[1][2];
// 		cout<<max(lsum,rsum)<<endl;
// 	}
//     return 0;
// }

// # include<bits/stdc++.h>
// using namespace std;
// int whoismax(int a, int b)
// {
//     if(a>b)
//         return -1;
//     else if(b>a)
//         return 1;
//     else
//         return 0;
// }
// void solve()
// {
//     int a,b,c,x,y,z;
//     cin>>a>>b>>c>>x>>y>>z;
//     string winner;
//     int sum = whoismax(a+b+c,x+y+z);
//     int ds = whoismax(a,x);
//     int toc = whoismax(b,y);
//     int dm = whoismax(c,z);
//     if(sum==-1)
//         winner = "DRAGON";
//     else if(sum==1)
//         winner = "SLOTH";
//     else
//     {
//             if(ds==-1)
//                 winner = "DRAGON";
//             else if(ds==1)
//                 winner = "SLOTH";
//             else
//             {
//                 if(toc==-1)
//                     winner = "DRAGON";
//                 else if(toc==1)
//                     winner = "SLOTH";
//                 else
//                 {
//                     if(dm==-1)
//                         winner = "DRAGON";
//                     else if(dm==1)
//                         winner = "SLOTH";
//                     else
//                         winner = "TIE";
//                 }
//             }
//     }
//     cout<<winner<<endl;
// }
// int main(){
//     int t;
// 	cin>>t;
// 	while(t--)
// 		solve();
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// void indexedSequentialSearch(int arr[], int n, int k)
// {
//     int elements[20], indices[20], temp, i, set = 0;
//     int j = 0, ind = 0, start, end;
//     for (i = 0; i < n; i += 3) {
//         elements[ind] = arr[i];
//         indices[ind] = i;
//         ind++;
//     }
//     if (k < elements[0]) {
//         printf("Not found");
//         exit(0);
//     }
//     else {
//         for (i = 1; i <= ind; i++)
//             if (k <= elements[i]) {
//                 start = indices[i - 1];
//                 end = indices[i];
//                 set = 1;
//                 break;
//             }
//     }
//     if (set == 0) {
//         start = indices[i - 1];
//         end = n;
//     }
//     for (i = start; i <= end; i++) {
//         if (k == arr[i]) {
//             j = 1;
//             break;
//         }
//     }
//     if (j == 1)
//         printf("Found at index %d", i);
//     else
//         printf("Not found");
// }
// void main()
// {

//     int arr[] = { 6, 7, 8, 9, 10 };
//     int n = sizeof(arr) / sizeof(arr[0]);

//     int k = 8;
//     indexedSequentialSearch(arr, n, k);
// }

// # include<bits/stdc++.h>
// using namespace std;
// void solve()
// {

// }
// int main(){
//     int t;
// 	cin>>t;
// 	while(t--)
// 		solve();
//     return 0;
// }

// # include<bits/stdc++.h>
// #define ll long long int
// #define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
// using namespace std;
// void solve()
// {
//     ll n;
//     cin>>n;
//     ll num[n];
//     ll sum = 0;
//     for (ll i = 0; i < n; i++)
//     {
//         cin>>num[i];
//         sum += num[i];
//     }
//     cout<<sum<<endl;
// }
// int main(){
//     fast
//     int t;
// 	cin>>t;
// 	while(t--)
// 		solve();
//     return 0;
// }

// #include <iostream>
// #include <ctime>
// #include <cstdlib>
// using namespace std;
// int main()
// {
//     int N, K, X, T;
//     cin >> T;
//     while (T--)
//     {
//         cin >> N >> K >> X;
//         if (N == X && K >= X)
//         {
//             int count = 0;
//             for (int i = 0; i < N; i++)
//             {
//                 cout << count << " ";
//                 count++;
//             }
//             cout << endl;
//         }
//         if (N > X && K >= X)
//         {
//             srand(time(0));
//             for (int i = 0; i < N; i++)
//             {
//                 cout << (rand() % X) << " ";
//             }
//             cout << endl;
//         }
//         else
//             cout << "-1";
//     }

//     return 0;
// }

#include <iostream>
#include <math.h>
using namespace std;
constexpr int int_pow(int b, int e)
{
    return (e == 0) ? 1 : b * int_pow(b, e - 1);
}

int *get_prime_factors(int n)
{
    int *prime_factors = new int[int_pow(2, n)];
    int i = 0;
    for (int j = 2; j <= n; j++)
    {
        while (n % j == 0)
        {
            prime_factors[i++] = j;
            n /= j;
        }
    }
    return prime_factors;
}
int get_pow(int n, int k)
{
    int tot = 0;
    int res = 0;
    int p = 1;

    do
    {
        int dr = int_pow(k, p);
        res = floor(n / dr);
        tot += res;
        // cout<<"dividing "<<n<<" by "<<dr<<" gives "<<res<<"now tot = "<<tot<<endl;
        p++;
    } while (res != 0);
    cout << tot << endl;
}
int main()
{
    int n, k, t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        // print all prime factors of n
        int *prime_factors = get_prime_factors(n);
        for (int i = 0; i < int_pow(2, n); i++)
        {
            cout << prime_factors[i] << " ";
        }
    }
}

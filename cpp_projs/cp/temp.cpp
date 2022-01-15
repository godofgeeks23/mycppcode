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

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, x;
    cin>>n>>x;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr, arr+n, greater<int>());
    int i, sum = 0;
    for(i=0;i<n;i++)
    {
        sum+=arr[i];
        if(sum>=x)
        {
            cout<<i+1<<endl;
            break;
        }
    }
    if(i==n)
        cout<<-1<<endl;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
	return 0;
}
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

#include <stdio.h>
#include <stdlib.h>
 
void indexedSequentialSearch(int arr[], int n, int k)
{
    int elements[20], indices[20], temp, i, set = 0;
    int j = 0, ind = 0, start, end;
    for (i = 0; i < n; i += 3) {
        elements[ind] = arr[i];
        indices[ind] = i;
        ind++;
    }
    if (k < elements[0]) {
        printf("Not found");
        exit(0);
    }
    else {
        for (i = 1; i <= ind; i++)
            if (k <= elements[i]) {
                start = indices[i - 1];
                end = indices[i];
                set = 1;
                break;
            }
    }
    if (set == 0) {
        start = indices[i - 1];
        end = n;
    }
    for (i = start; i <= end; i++) {
        if (k == arr[i]) {
            j = 1;
            break;
        }
    }
    if (j == 1)
        printf("Found at index %d", i);
    else
        printf("Not found");
}
void main()
{
 
    int arr[] = { 6, 7, 8, 9, 10 };
    int n = sizeof(arr) / sizeof(arr[0]);

    int k = 8;
    indexedSequentialSearch(arr, n, k);
}


// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//            
//      return 0;
// } 

#include<bits/stdc++.h>
using namespace std;
int main()
{
    // this program is to demonstrate how to use hashing in code to reduce time complexity of the program
    // Question - given a number between 1 and 20, and variable number of queries, print the factorial of the number input in each query
    cin>>q;
    
    return 0;
} 

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t, x;
//     cin>>t;
//     while(t--)
//     {
//         cin>>x;
//         if(x<=6)
//             cout<<(x+6)<<endl;
//         else
//             cout<<(x-6)<<endl;
//     }      
//     return 0;
// } 

// #include<bits/stdc++.h>
// using namespace std;
// int dist_subs(string str) 
// { 
//     set<string> result ; 
//     for (int i = 0; i <= str.length(); i++) 
//         for (int j = 1; j <= str.length()-i; j++) 
//             result.insert(str.substr(i, j)); 
//     return result.size(); 
// } 
// int main()
// {
//     string s1, s2;
//     cin>>s1>>s2;
//     if(dist_subs(s1)==dist_subs(s2))
//         cout<<"Companion"<<endl;
//     else
//         cout<<"Non Companion"<<endl;
//     return 0;
// } 

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n, q, l, r, ans, odds;
//     cin>>n>>q;
//     int arr[n];
//     for(int i=0;i<n;i++)
//         cin>>arr[i];
//     while(q--)
//     {
//         cin>>l>>r;
//         odds = 0;
//         for(int i=(l-1);i<r;i++)
//                 if(arr[i]%2==1)
//                     odds++;
//         if(odds>=2)
//             ans = ((((r-l)+1)*(r-l))/2)-((odds*(odds-1))/2);
//         else
//             ans = ((((r-l)+1)*(r-l))/2);
//         cout<<ans<<endl;
//     }
//     return 0;
// } 

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//      int t, d0, d1, d2, d3, d5, d6;
//      long int k, sum;
//      cin>>t;
//      while(t--)
//      {
//         cin>>k>>d0>>d1;
//         d2 = (d0+d1)%10;
//         d3 = (2*d2)%10;
//         d4 = (2*d3)%10;
//         d5 = (2*d4)%10;
//         d6 = (2*d5)%10;
//         int current = d6, prev = d2;
//         sum = d0+d1+d2;
//         for(long int i=3;i<=(k-1);i++)
//         {
//             current = (2*prev)%10;
//             sum+=current;
//             prev = current;
//             // if((sum%3)==0)
//             //     sum = 0;
//         }
//         // cout<<"sum = "<<sum<<endl;
//         if(sum%3)
//             cout<<"NO"<<endl;
//         else
//             cout<<"YES"<<endl;
//      }     
//      return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     long int t, a, b;
//     cin>>t;
//     while(t--)
//     {	
//     	cin>>a>>b;
//     	float x = ((2*a)-b)/3.0;
//     	float y = x-a+b;
//     	if((y>=0) && (x>=0))
//     		if((ceilf(x) == x) && (ceilf(y) == y))	
//     			cout<<"YES"<<endl;
//     		else
//     			cout<<"NO"<<endl;
//     	else
//     		cout<<"NO"<<endl;
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t, n, x, count;
//     cin>>t;
//     while(t--)
//     {
//     	cin>>n>>x;
//     	count = 0;
//     	if(x==n)
//     		count = 0;
//     	else if((n>x)||(x%n==0))
//     		count = 1;
//     	else
//     		count = 2;
//     	cout<<count<<endl;
//     }
//     return 0;
// }


// number of common divisors of a, b - hackerearth
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     long int a,b;
//     scanf("%ld%ld", &a, &b);
//     long int count = 0;
//     long int m = min(a, b);
//     for(long int i=1;i<=m;i++)
//     {
//         if(a%i==0)
//             if(b%i==0)
//                 count++;
//     }
//     printf("%ld\n", count);
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int arr[100000];
// int find_nearest(int size, int h, int k)
// {
//     int pos = 0;
//     int i = 0;
//     for(i=0;i<size;i++)
//     {
//         if((arr[i]<k))
//             if(arr[i]!=0)
//             {
//                 pos = abs((k-h)-arr[i])<abs((k-h)-arr[pos])?i:pos;
//             }
//             else {}
//         else
//             break;
//     }
//     if(i!=size)
//         pos = i;
//     return pos;
// }
// int main()
// {
//     int t, n, k, tow1, tow2;
//     cin>>t;
//     while(t--)
//     {
//         scanf("%d%d", &n, &k);
//         for(int i=0;i<n;i++)
//             scanf("%d", &arr[i]);
//         sort(arr, arr+n, greater<int>());
//         tow1 = 0;
//         tow2 = 0;
//         int count = 0;
//         while((tow1<k) && (count<n))
//         {
//             int temp = find_nearest(n, tow1, k);
//             tow1+=arr[temp];
//             arr[temp] = 0;
//             count++;
//         }
//         int temp = 0;
//         while((tow2<k) && (temp<n))
//         {
//             if(arr[temp])
//             {
//                 tow2+=arr[temp];
//                 arr[temp]=0;
//                 count++;
//                 temp++;
//             }
//             else
//                 temp++;
//         }
//         if((tow1>=k) && (tow2>=k))
//             cout<<count<<endl;
//         else
//             cout<<(-1)<<endl;
//     }
//     return 0;
// }


// #include<bits/stdc++.h>                 // CODECHEF - BYTR20B/RICY
// using namespace std;
// int rangemin(int* arr, int a, int b)
// {
//     int min = arr[a-1];
//     for(int i=(a-1);i<=(b-1);i++)
//     {
//         if(arr[i]<min)
//             min = arr[i];
//     }
//     return min;
// }   
// int main()
// {
//     int t,m,n;
//     int a[100001], b[100001];
//     cin>>t;
//     while(t--)
//     {
//         scanf("%d%d", &n, &m);
//         for(int i=0;i<n;i++)
//             scanf("%d", &a[i]);
//         for(int i=0;i<m;i++)
//             scanf("%d", &b[i]);
//         int sum = 0;
//         for(int i=0;i<m;i++)
//         {
//             for(int j=i;j<m;j++)
//             {
//                 sum+=rangemin(a, b[i], b[j]);
//             }
//         }
//         printf("%d\n", sum);
//     }
//     return 0;
// }

// #include<iostream>                                   //  CODECHEF - AGCY
// using namespace std;
// int main()
// {
//     int t,n,q,l,r;
//     int cities[100001] = {};
//     scanf("%d", &t);
//     while(t--)
//     {
//         scanf("%d%d", &n, &q);
//         while(q--)
//         {
//             scanf("%d%d", &l, &r);
//             for(int i=l;i<=r;i++)
//                 cities[i]+=i-(l-1);
//         }
//         for(int i=1;i<=n;i++)
//         {
//             printf("%d ", cities[i]);
//             cities[i] = 0;
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t,n,k;
//     cin>>t;
//     while(t--)
//     {
//         cin>>n>>k;
//         int temp = k/n;
//         cout<<temp<<endl;
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t, a, b, turn, n;
//     cin>>t;
//     while(t--)
//     {
//         cin>>a>>b>>n;
//         turn = 1;
//         while(n--)
//         {
//             if(turn==1)
//             {
//                 a = a*2;
//                 turn = 2;
//             }
//             else if(turn==2)
//             {
//                 b = b*2;
//                 turn = 1;
//             }
//         }
//         int min = a>b?b:a;
//         int max = a>b?a:b;
//         cout<<(max/min)<<endl;
//     }
//     return 0;
// }

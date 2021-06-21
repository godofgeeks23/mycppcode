// boilerplate code 1 -  base for all the other programs
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     clock_t start, end;
//     start = clock();
            
//     // code goes here!

//     end = clock();  
//     cout << "\nTime: "<<fixed<<double(end-start)/double(CLOCKS_PER_SEC)<<setprecision(5)<<"s"; 
//     return 0;
// }

// boilerplate code 2 - basic code acting as a base for all the other programs
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
    
//     return 0;
// }
 
boilerplate code 2 - basic code acting as a base for all the other programs
#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin>>t;
//     int arr1[30], arr2[30], n, k, sum;
//     while(t--)
//     {
//         cin>>n>>k;
//         sum = 0;
//         for(int i=0;i<n;i++)
//         {
//             cin>>arr1[i];
//             sum+=arr1[i];
//         }
//         for(int i=0;i<n;i++)
//             cin>>arr2[i];
//         sort(arr1, arr1+n, greater<int>());
//         sort(arr2, arr2+n, greater<int>());
//         int ptr1 = n-1;
//         int ptr2 = 0;
//         while(k>0 && arr1[ptr1]<arr2[ptr2])
//         {
//             sum = sum - arr1[ptr1];
//             sum = sum + arr2[ptr2];
//             ptr1--;
//             ptr2++;
//             k--;
//         }
//         cout<<sum;
//     }
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     clock_t start, end;
//     start = clock();
            
//     // code goes here!
//     int t;
//     long long int n;
//     cin>>t;
//     while(t--)
//     {
//     	long long int score = 0;
//     	cin>>n;
//     	if(n<=4)
//     		score = 20*n;
//     	else
//     	{
// 			long long int temp1 = n/4;
// 			score = 80*temp1;
// 			int temp2 = n%4;
// 			while(temp2)
// 			{
// 				score = score+13;
// 				temp2--;
// 			}
//     	}
//     	cout<<score<<endl;
//     }

//     end = clock();  
//     cout << "Time: "<<fixed<<double(end-start)/double(CLOCKS_PER_SEC)<<setprecision(5)<<"s"<<endl; 
//     return 0;
// }


// // code-chef problem solution
// #include<bits/stdc++.h>
// using namespace std; 
// #define deb(x) cout << #x << "=" << x << endl
// int main()
// {
//     clock_t start, end;
//     start = clock();
    
//     int t, d0, d1, d2, d3, d4, d5, d6, sum;
//     long int k;
//     cin>>t;
//     while(t--)
//     {
//         sum = 0;
//         cin>>k>>d0>>d1;
//         sum = (d0+d1)%3;
//         d2 = (d0+d1)%10;
//             d3 = (2*d2)%10;
//             d4 = (2*d3)%10;
//             d5 = (2*d4)%10;
//             d6 = (2*d5)%10;
//         if(d2%2==0)
//         {
//             int rem = (k-2)%4;
//             int temp1 = (d2+d3+d4+d5)%3;
//             long int temp2 = ((k-rem)/4)%3;
//             sum = sum + (temp1 * temp2)%3;
//             if(rem==1)
//                 sum = (sum + d2)%3;
//             if(rem==2)
//                 sum = (sum + d2 + d3)%3;
//             if(rem==3)
//                 sum = (sum + d2 + d3 + d4)%3;
//         }
//         else
//         {
//             int rem = (k-3)%4;
//             int temp1 = (d3+d4+d5+d6)%3;
//             int temp2 = ((k-rem)/4)%3;
//             sum = sum + d2 + (temp1 * temp2)%3;
//             if(rem==1)
//                 sum = (sum + d3)%3;
//             if(rem==2)
//                 sum = (sum + d3 + d4)%3;
//             if(rem==3)
//                 sum = (sum + d3 + d4 + d5)%3;
//         }
//         if(!sum)
//             cout<<"YES\n";
//         else
//             cout<<"NO\n";
//     }
    
//     end = clock();  
//     cout << "Time: "<<fixed<<double(end-start)/double(CLOCKS_PER_SEC)<<setprecision(5)<<"s"<<endl; 
//     return 0;
// }

// // WIPL (CodeChef) Solution
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     short int T;
//     int N,K,total,i,j;
//     long long int sum1,sum2,input,end,temp;
//     vector<long long int> A,B,H;
//     cin>>T;
//     while(T--){
//         cin>>N>>K;
//         sum1=0,sum2=0;
//         for(i=0;i<N;i++){
//             cin>>input;
//             H.push_back(input);
//         }
//         sort(H.begin(),H.end(),greater<long long int>());
//         for(i=0;i<N;i++){
//             if(i%2==0){
//                 A.push_back(H[i]);
//                 sum1+=H[i];
//             }
//             else{
//                 B.push_back(H[i]);
//             }
//             if(sum1>=K){
//                 total=i+1;
//                 break;
//             }
//         }
//         if(sum2<K && sum1>=K){
//         for(j=i+1;j<N;j++){
//             B.push_back(H[j]);
//         }
//         for(i=0;i<B.size();i++){
//                 sum2=sum2+B[i];
//             for(j=0;j<A.size();j++){
//                 if(A[j]>B[i] && (sum1-A[j]+B[i])>=K){
//                     sum1=sum1-A[j]+B[i];
//                     sum2=sum2+A[j]-B[i];
//                     temp=A[j];
//                     A[j]=B[i];
//                     B[i]=temp;
//                 }
//                 if(sum2>=K){
//                     break;
//                 }
//             }
//                 if(sum2>=K){
//                     break;
//                 }
//         }
//         total=A.size()+i+1;     
//         }
    
//         if(sum1>=K && sum2>=K){
//             cout<<total;
//         }
//         else{
//             cout<<"-1";
//         }
//         H.clear();
//         A.clear();
//         B.clear();
//         cout<<"\n";
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;
// int mygcd(int a, int b) 
// { 
//     if (a < b) 
//         return mygcd(b, a); 
//     if (a % b == 0) 
//         return b; 
//     return mygcd(b, a % b); 
// } 
// int pow_n_mod(int b, int n, int m)
// {
//     int base = b%m;
//     for(int i=2;i<=n;i++)
//         base = (base*b)%m;
//     return base;
// }
// /* Iterative Function to calculate (x^y)%p in O(log y) */
// int power(int x, int y, int p) 
// { 
//     int res = 1;     // Initialize result 
//     x = x % p; // Update x if it is more than or 
//                 // equal to p
//     if (x == 0) return 0; // In case x is divisible by p;
//     while (y > 0) 
//     { 
//         // If y is odd, multiply x with result 
//         if (y & 1) 
//             res = (res*x) % p; 
//         // y must be even now 
//         y = y>>1; // y = y/2 
//         x = (x*x) % p; 
//     } 
//     return res; 
// } 
// int main()
// {
//     clock_t start, end;
//     start = clock();
            
//     int t, n, chk;
//     scanf("%d", &t);
//     while(t--)
//     {
//         scanf("%d", &n);
//         chk = 1;
//         for(int b=1;b<=n;b++)
//             if(mygcd(b, n)==1)
//                 if(power(b, n-1, n)!=1)
//                 {
//                     chk = 0;
//                     break;
//                 }
//         if(chk==1)
//             printf("true\n");
//         else
//             printf("false\n");
//     }

//     end = clock();  
//     cout << "Time: "<<fixed<<double(end-start)/double(CLOCKS_PER_SEC)<<setprecision(5)<<"s"<<endl; 
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     clock_t start, end;
//     start = clock();
//     // this program is to demonstrate how to use hashing in code to reduce time complexity of the program
//     // Question - given a number between 1 and 20, and variable number of queries, print the factorial of the number input in each query
//     // cin>>q;
//         // Calculates the time taken 
//     // by the algorithm to execute 

//     end = clock();  
//     cout << "Time: "<<fixed<<double(end-start)/double(CLOCKS_PER_SEC)<<setprecision(5)<<" s"<<endl; 
//     return 0;
// } 

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

// CodeChef - AGCY
// #include<iostream>
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
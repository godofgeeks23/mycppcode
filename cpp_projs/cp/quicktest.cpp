// (boilerplate) code 1
// --------------------
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

// (boilerplate) code 2
// -------------------
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {

//     return 0;
//}

// hackerrank week 2 problem
#include<bits/stdc++.h>
using namespace std;
  
int countFreq(string &pat, string &txt)
{
    int M = pat.length();
    int N = txt.length();
    int res = 0;
    for (int i = 0; i <= N - M; i++)
    {
        int j;
        for (j = 0; j < M; j++)
            if (txt[i+j] != pat[j])
                break;
        if (j == M) 
        {
           res++;
           j = 0;
        }
    }
    return res;
}
int isinarray(string str[], int size, string word)
{
    for(int i=0;i<size;i++)
        if(str[i]==word)
            return 1;
    return 0;
}
int main()
{
    string str, word;
    string words[10000];
    int n = 0, flag = 0;
    getline(cin, str);
    stringstream iss(str);
    while (iss >> word)
    {
        if(isinarray(words, n, word)==0)
        {
            int temp = countFreq(word, str);
            if(temp!=1)
            {
                cout << word << ": " << temp << endl;
                flag = 1; 
            }
            words[n] = word;
            n++;   
        }
        // cout<<word<<endl;
    }
    if(flag==0)
        cout<<-1;
   return 0;
}

// Hackerrank K3 RECRUITMENT 2020-2024 - Problem 5
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t, n, a, b, fina, finb;
//     cin >> t;
//     while (t--)
//     {
//         cin >> n;
//         int diff, diff_min = b;
//         for (a = n / 2; a >= 0; a--)
//         {
//             b = n - a;
//             if ((a | b == n) && (a & b == 0))
//             {
//                 diff = b - a;
//                 if (diff <= diff_min)
//                 {
//                     diff_min = diff;
//                     fina = a;
//                     finb = b;
//                 }
//             }
//         }
//         cout << fina << " " << finb << endl;
//     }
//     return 0;
// }

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


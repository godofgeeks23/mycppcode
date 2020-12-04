#include<bits/stdc++.h>
using namespace std;

// int main()
// {
//     int t,target;
//     cin>>t;
//     while(t--)
//     {
//         cin>>target;
//         int arr[200] = {0};
//         int n, size;
        
//         arr[0] = 1;
//         size = 0;
        
//         for(int n=2;n<=target;n++)
//         {
//             //now we will multiply
//             int temp = 0, k;
//             for(k=0;k<=size;k++)
//             {
//                 int x = arr[k]*n+temp;
//                 arr[k] = x%10;
//                 temp = x/10;
//             }
//             while(temp)
//             {
//                 int x = arr[k]*n+temp;
//                 arr[k] = x%10;
//                 temp = x/10;
//                 size = k;
//                 k++;
//             }
//         }
//         //now we will display the array
//         for(int i=size;i>=0;i--)
//         {
//             cout<<arr[i];
//         }
//         cout<<endl;
//     }
// }

// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n;
//         cin>>n;
//         int sum = n%10;
//         while((n%10)!=n)
//         {
//             n = n/10;
//         }
//         sum+=n;
//         cout<<sum<<endl;
//     }
// }

// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n;
//         int o = 0;
//         cin>>n;
//         while(n)
//         {
//             if(n%10==4)
//             {
//                 o++;
//             }
//             n = n/10;
//         }
//         cout<<o<<endl;
//     }
// }

// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n, rev = 0;
//         cin>>n;
//         while(n)
//         {
//             rev = (rev*10)+(n%10);
//             n = n/10;
//         }
//         cout<<rev<<endl;
//     }
//         return 0;
// }

// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n;
//         cin>>n;
//         cout<<round(sqrt(n))<<endl;
//     }
// }



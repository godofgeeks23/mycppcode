#include<bits/stdc++.h>
using namespace std;
int find_nearest(int* arr, int size, int h, int k)
{
    int pos = 0;
    int i = 0;
    for(i=0;i<size;i++)
    {
        if((arr[i]<k))
            pos = abs(arr[i]-k-h)<abs(arr[pos]-k-h)?i:pos;
        else
            break;
    }
    if(i!=size)
        pos = i;
    return pos;
}
int main()
{
    int t, n, k, tow1, tow2;
    cin>>t;
    while(t--)
    {
        scanf("%d%d", &n, &k);
        int h[n];
        for(int i=0;i<n;i++)
            scanf("%d", &h[i]);
        sort(h, h+n);
        tow1 = 0;
        tow2 = 0;
        int count = 0;
        while((tow1<k) && (count<n))
        {
            tow1+=h[find_nearest(h, n, tow1, k)];
            cout<<"added "<<h[find_nearest(h, n, tow1, k)]<<" to tow1, and now it is of height "<<tow1<<endl;
            h[find_nearest(h, n, tow1, k)] = 0;
            count++;
        }
        while((tow2<k) && (count<n))
        {
            tow2+=h[find_nearest(h, n, tow2, k)];
            cout<<"added "<<h[find_nearest(h, n, tow2, k)]<<" to tow2, and now it is of height "<<tow2<<endl;
            h[find_nearest(h, n, tow2, k)] = 0;
            count++;
        }
        // cout<<"number of elments used = "<<count<<", and tow1 = "<<tow1<<", tow2 = "<<tow2<<endl;
        if((tow1>=k) && (tow2>=k))
            cout<<count<<endl;
        else
            cout<<(-1)<<endl;
    }
    return 0;
}

// #include<bits/stdc++.h>                      // approach 1 - WA
// using namespace std;
// int main()
// {
//     int t, n, k, tow1, tow2;
//     cin>>t;
//     while(t--)
//     {
//         scanf("%d%d", &n, &k);
//         int h[n];
//         for(int i=0;i<n;i++)
//             scanf("%d", &h[i]);
//         sort(h, h+n, greater<int>());
//         tow1 = tow2 = 0;
//         int count = 0;
//         while((tow1<k) && (count<n))
//         {
//             tow1+=h[count];
//             count++;
//         }
//         while((tow2<k) && (count<n))
//         {
//             tow2+=h[count];
//             count++;
//         }
//         if(count==n)
//             cout<<(-1)<<endl;
//         else
//             cout<<count<<endl;
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
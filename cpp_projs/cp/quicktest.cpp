// (boilerplate 1)
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

// (boilerplate 2)
// -------------------
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {

//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// bool checkRecord(string s) {
//     int count = 0;
//     for(int i=0;i<s.size();i++)
//     {
//         if(s[i]=='A')
//         {
//             count++;
//             if(count>=2)
//                 return false;
//         }
//         else if(s[i]=='L' && s[i+1]=='L' && s[i+2]=='L')
//             return false;
//     }
//     return true;
// }

// int main()
// {
//     clock_t start, end;
//     start = clock();

//     // start code from here

//     int t;
//     cin>>t;
//     while(t--)
//     {
//         string cmd;
//         cin>>cmd;
//         cout<<checkRecord(cmd)<<endl;
//     }

//     // end code here

//     end = clock();
//     cout << "Time: "<<fixed<<double(end-start)/double(CLOCKS_PER_SEC)<<setprecision(5)<<" s"<<endl;
//     return 0;
// }25 126 6 208



#include<bits/stdc++.h> 
using namespace std; 

int countpairs(int arr[], int n, int p)
{
    int count = 0;
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
        if(__gcd(arr[i], arr[j])%p==0)
            count++;
    return count;
}

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        int q;
        cin>>q;
        int queries[q];
        for(int i=0;i<q;i++)
            cin>>queries[i];

        for(int i=0;i<q;i++)
            cout<<countpairs(a, n, queries[i])<<" ";
        cout<<endl;
    }
    return 0; 
} 
// } Driver Code Ends
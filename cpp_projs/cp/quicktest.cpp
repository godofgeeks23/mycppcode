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
// }


//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &Arr , int N){
        // code here 
        sort(Arr.begin(), Arr.end(), greater <>());
        int sum = 0;
        for(int i=0;i<K;i++)
            sum+=Arr[i];
        return sum;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends
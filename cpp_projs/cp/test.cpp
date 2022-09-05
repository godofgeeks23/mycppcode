
#include<bits/stdc++.h>
using namespace std;
int minJumps(int arr[], int n){
        // Your code here
        int i = 0;
        int jumps = 0;
        while(i!=(n-1) && i<n)
        {
            i += arr[i];
            // cout<<"i is on "<<arr[i]<<endl;
            jumps++;
        }
        if(i>=n-1)
            return jumps;
        return -1;
    }
int main()
{
    int arr[6] = {1, 4, 3, 2, 6, 7};
    cout<<minJumps(arr, 6);
    return 0;
}
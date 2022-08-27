// C++ code to minimize number of rotations
#include <bits/stdc++.h>
using namespace std;
 
// Function to check if two arrays are equal
bool check(int A[], int B[], int N)
{
    bool flag = true;
    for (int i = 0; i < N; i++) {
        if (A[i] != B[i]) {
            flag = false;
            break;
        }
    }
    return flag;
}
 
// Function to left rotate an array
void Leftrotate(int A[], int N)
{
    int temp = A[0];
    for (int i = 0; i < N - 1; i++) {
        A[i] = A[i + 1];
    }
    A[N - 1] = temp;
}
 
// Function to right rotate an array
void Rightrotate(int A[], int N)
{
    int temp = A[N - 1];
    for (int i = N - 1; i > 0; i--) {
        A[i] = A[i - 1];
    }
    A[0] = temp;
}
 
// Function to minimize number of rotations
int minRotations(int A[], int B[], int N)
{
    int C[N];
    for (int i = 0; i < N; i++)
        C[i] = A[i];
    int a = 0, b = 0;
 
    // Right rotate the array
    // till it is equal to B
    while (check(A, B, N) == false) {
        Rightrotate(A, N);
        a++;
    }
 
    // Left rotate the array
    // till it is equal to B
    while (check(C, B, N) == false) {
        Leftrotate(C, N);
        b++;
    }
 
    int ans = min(a, b);
    return ans;
}
 
// Driver code
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n], b[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
            cin>>b[i];
        int ans = minRotations(a,b,n);
        cout << ans;
    }

 
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
// int main()
// {
//     int d1, v1, d2, v2, p, d;
//     d1 = d2 = 1;
//     cin>>d1>>v1>>d2>>v2>>p;
//     float temp = (float(p) + (float(v1)*float(d1)) + (float(v2)*float(d2)) - (float(v1) + float(v2)))/(float(v1) + float(v2));
//     cout<<ceil(temp)<<endl;
//     return 0;
// }

int main()
{
    int n, lucky, unlucky = 0;
    int arr[100] = {0};
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]%2==0)
            lucky++;
        if(arr[i]%2==1)
            unlucky++;
    }
    if(lucky>unlucky)
        cout<<"READY FOR BATTLE";
    else
        cout<<"NOT READY";
    cout<<endl;
}
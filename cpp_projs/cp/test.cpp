
#include<bits/stdc++.h>
using namespace std;
int evenlyDivides(int N){
        //code here
        int count = 0;
        while(N)
        {
            int dig = N%10;
            N /= 10;
            if(int(N/dig)%2==0)
                count++;
        }
        return count;
    }
int main()
{
    cout<<evenlyDivides(2446);
    return 0;
}
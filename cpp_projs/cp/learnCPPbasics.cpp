
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i = 1,
     k = i&0;
     do
     {
         k++;
         if(k>1)
         i = k;
     } while (i<2);
     
cout<<k;
    return 0;
}
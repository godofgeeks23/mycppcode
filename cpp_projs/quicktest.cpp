// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
    
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int count(string s, char c)
{
    int count = 0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==c)
            count++;
    }
    return count;
}
int main()
{
    int t;
    string s,s1,s2;
    cin>>t;
    while(t--)
    {
        cin>>s;
        if(s.length()%2==0) //divide in exactly half-half
        {
            for(int i=0;i<(s.length()/2);i++)
            {
                s1[i] = s[i];
            }
            for(int i=(s.length()/2);i<s.length();i++)
            {
                s2[i] = s[i];
            }
        }
        cout<<s1;
    }
    return 0;
}
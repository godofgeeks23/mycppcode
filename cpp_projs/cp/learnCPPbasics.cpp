
#include<bits/stdc++.h>

using namespace std;
int max_of_four(int a,int b,int c,int d){
if(a>b){
    if(a>c){
        if(a>d){
            return a;
        }
    }
}
if(b>a){
    if(b>c){
        if(b>d){
            return b;
        }
    }
}
if(c>a){
    if(c>b){
        if(c>d){
            return c;
        }
    }
}
if(d>a){
    if(d>b){
        if(d>c){
            return d;
        }
    }
    
}

return 0;
}
int main()
{
    cout<<max_of_four(1,2,3,4);
}
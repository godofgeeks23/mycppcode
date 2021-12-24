# include<iostream>
#include<iomanip>
using namespace std;
int main(){
    float Y = 14.94749125;
    cout<<setprecision(1)<<Y<<endl;
    cout<<setprecision(2)<<Y<<endl;
    cout<<setprecision(3)<<Y<<endl;
    cout<<setprecision(4)<<Y<<endl;
    cout<<setprecision(5)<<Y<<endl;
    cout<<endl;
    cout<<fixed<<setprecision(1)<<Y<<endl;
    cout<<fixed<<setprecision(2)<<Y<<endl;
    cout<<fixed<<setprecision(3)<<Y<<endl;
    cout<<fixed<<setprecision(4)<<Y<<endl;
    cout<<fixed<<setprecision(5)<<Y<<endl;
    return 0;
}
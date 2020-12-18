#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    cout<<"Enter the elements now..."<<endl;
    int arr[n];
    int i, j;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    //now we will find the first repeating element
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                cout<<"Index of the first repeating element is "<<i<<" and arr["<<i<<"] = "<<arr[i]<<endl;
                exit(0);
            }
        }
    }
    return 0;
}

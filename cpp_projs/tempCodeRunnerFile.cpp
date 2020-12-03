#include <iostream>
using namespace std;

int main() {
	int t, n, size;
	int arr[200];
	
    arr[0] = 1;
	cin>>t;
	for(int i=1;i<=t;i++)   // to take t inputs
	{
	    cin>>n; // number to find factorial
	    for(int j=1;j<=n;j++)   // to multiply all numbers from 1 to n
	    {
	        int temp = 0;
	        int k = 0;
	        do
	        {
	            int x = arr[k]*j+temp;
	            arr[k] = x%10;
                temp = x/10;
	            size = k;
	            k++;
	        }while(temp);
	    }
	    // now display the array
	    for(int h=size;h>=0;h--)
	    {
	        cout<<arr[h];
	    }
    }
    cout<<endl;
	return 0;
}

//cp problems code
//-----------------

//problem - (codechef) finding factorials having 150+ digits
//-----------------------------------------------------------
// my solution - not working
//--------------------------
#include <iostream>
using namespace std;

int main() {
	int t, n, size;
	int arr[200];
	
    arr[0] = 1;
    for(int z = 1;z<200;z++)
    {
        arr[z] = 0;
    }
	cin>>t;
	for(int i=1;i<=t;i++)   // to take t inputs
	{
	    cin>>n; // number to find factorial
	    for(int j=2;j<=n;j++)   // to multiply all numbers from 1 to n
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
	        }while(temp!=0);
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

//working solution
//----------------
#include <iostream>
using namespace std;

// Finding factorial of a number of with more than 150+ digits in the result
void multiply(int fact){
    int res[201] = {0};
    res[0] = 1; // we start with 1
    int m = 1; // tracks number os digits int res array
    int temp = 0; // to store carry over
    int x;
    for (int ntm = 2; ntm <= fact; ++ntm) {
        for (int i = 0; i < m; ++i) {
            x = res[i] * ntm + temp;
            res[i] = x % 10;
            temp = x / 10;
        }
        // add the remaining sum to the res array
        while(temp != 0){
            res[m++] = temp % 10;
            temp /= 10;
        }
    }
    // start from msb to lsb
    for (int i = m-1; i >= 0 ; --i) {
        cout << res[i];
    }
    cout << endl;
}

int main() {
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        multiply(n);
    }
    return 0;
}

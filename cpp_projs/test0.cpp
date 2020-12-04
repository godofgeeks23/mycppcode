//cp problems code
//-----------------

//problem - (codechef) finding factorials having 150+ digits
//-----------------------------------------------------------
// my solution - not working
//--------------------------
// #include <iostream>
// using namespace std;

// int main() {
// 	int t, n, size;
// 	int arr[200];
	
//     arr[0] = 1;
//     for(int z = 1;z<200;z++)
//     {
//         arr[z] = 0;
//     }
// 	cin>>t;
// 	for(int i=1;i<=t;i++)   // to take t inputs
// 	{
// 	    cin>>n; // number to find factorial
// 	    for(int j=2;j<=n;j++)   // to multiply all numbers from 1 to n
// 	    {
// 	        int temp = 0;
// 	        int k = 0;
// 	        do
// 	        {
// 	            int x = arr[k]*j+temp;
// 	            arr[k] = x%10;
//                 temp = x/10;
// 	            size = k;
// 	            k++;
// 	        }while(temp!=0);
// 	    }
// 	    // now display the array
// 	    for(int h=size;h>=0;h--)
// 	    {
// 	        cout<<arr[h];
// 	    }
//     }
//     cout<<endl;
// 	return 0;
// }

// //working solution
// //----------------
// #include <iostream>
// using namespace std;

// // Finding factorial of a number of with more than 150+ digits in the result
// void multiply(int fact){
//     int res[201] = {0};
//     res[0] = 1; // we start with 1
//     int m = 1; // tracks number os digits int res array
//     int temp = 0; // to store carry over
//     int x;
//     for (int ntm = 2; ntm <= fact; ++ntm) {
//         for (int i = 0; i < m; ++i) {
//             x = res[i] * ntm + temp;
//             res[i] = x % 10;
//             temp = x / 10;
//         }
//         // add the remaining sum to the res array
//         while(temp != 0){
//             res[m++] = temp % 10;
//             temp /= 10;
//         }
//     }
//     // start from msb to lsb
//     for (int i = m-1; i >= 0 ; --i) {
//         cout << res[i];
//     }
//     cout << endl;
// }

// int main() {
//     int t,n;
//     cin >> t;
//     while(t--){
//         cin >> n;
//         multiply(n);
//     }
//     return 0;
// }


// sorting a large array - quickly
//---------------------------------
// #include <iostream>
// using namespace std;  
// void swap(long* a, long* b)  
// {  
//     long t = *a;  
//     *a = *b;  
//     *b = t;  
// }  
// int partition (long arr[], long low, long high)  
// {  
//     long pivot = arr[high]; // pivot  
//     long i = (low - 1); // Index of smaller element  
  
//     for (long j = low; j <= high - 1; j++)  
//     {  
//         // If current element is smaller than the pivot  
//         if (arr[j] < pivot)  
//         {  
//             i++; // increment index of smaller element  
//             swap(&arr[i], &arr[j]);  
//         }  
//     }  
//     swap(&arr[i + 1], &arr[high]);  
//     return (i + 1);  
// }  
// void quickSort(long arr[], long low, long high)  
// {  
//     if (low < high)  
//     {  
//         /* pi is partitioning index, arr[p] is now  
//         at right place */
//         long pi = partition(arr, low, high);  
  
//         // Separately sort elements before  
//         // partition and after partition  
//         quickSort(arr, low, pi - 1);  
//         quickSort(arr, pi + 1, high);  
//     }  
// }  
// void printArray(long arr[], long size)  
// {  
//     long i;  
//     for (i = 0; i < size; i++)  
//         cout << arr[i] << endl;
// }  
  
// // Driver Code 
// int main()  
// {  
//     long arr[1000000] = {0};  
//     long size;
//     cin>>size;
//     for(long i=0;i<size;i++)
//     {
//         cin>>arr[i];
//     }  
//     quickSort(arr, 0, size - 1);  
//     cout << "Sorted array: \n";  
//     printArray(arr, size);  
//     return 0;  
// }  

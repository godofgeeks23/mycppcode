// (boilerplate) code 1
// --------------------
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     clock_t start, end;
//     start = clock();

//     // code goes here!

//     end = clock();
//     cout << "\nTime: "<<fixed<<double(end-start)/double(CLOCKS_PER_SEC)<<setprecision(5)<<"s";
//     return 0;
// }

// (boilerplate) code 2
// -------------------
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {

//     return 0;
// }

#include <stdio.h>
int search(int arr[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == x)
            return i;
    return -1;
}
int main(void)
{
    int arr[] = { 2, 3, 4, 10, 40 };
    int x = 10;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = search(arr, n, x);
    if (result == -1)
        printf("Element is not present in array");
    else
        printf("Element is present at index %d", result);
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++)
//         cin>>arr[i];
    
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     clock_t start, end;
//     start = clock();
//     // this program is to demonstrate how to use hashing in code to reduce time complexity of the program
//     // Question - given a number between 1 and 20, and variable number of queries, print the factorial of the number input in each query
//     // cin>>q;
//         // Calculates the time taken
//     // by the algorithm to execute

//     end = clock();
//     cout << "Time: "<<fixed<<double(end-start)/double(CLOCKS_PER_SEC)<<setprecision(5)<<" s"<<endl;
//     return 0;
// }


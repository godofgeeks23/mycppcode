// bubble sort algorithm
/*
One by one, move the heavier elements towards the end of array

that is why it is named as Bubble sort - heavier elements settle down, and lighter surface up.
Example - 
7, 11, 9, 2, 17, 4

{       - start of pass 1

compare [0],[1] i.e. (7,11), if order is correct, move on, else swap...
Here it is correct.
compare [1],[2], i.e. (11,9), order is wrong so swapped
7, 9, 11, 2, 17, 4
compare [2],[3], i.e. (11,2), order is wrong so swapped
7, 9, 2, 11, 17, 4
compare [3], [4], i.e. (11, 17) order is correct so moving on
compare [4],[5] i.e. (17,4), order is wrong hence swap
7, 9, 2, 11, 4, 17

End of array reached.
This completes our pass 1. By this, we have moved the heaviest element in the unsorted array to the last.
}

{       - start of pass 2

now we will move from [0] to [4], as after it array is already sorted
by the end of this pass, we move the heaviest element in the unsorted array to the last of unsorted array.

This is repeated, and we get a sorted array at last!

IMPORTANT Analysis - 
    *)  For an array of n elements, number of passes = (n-1)
    *)  In the pass(n),
                    no. of comparisons = (size - n)
                    max no of possible swaps = (size-n)
    *)  total maximum number of swaps to sort the array = n(n-1)/2
    *)  Time complexity: O(n^2)
    *)  This is a stable algo
    *)  Not Recursive
    *)  NOT adaptive BY DEFAULT, but CAN BE made one

*/
#include<bits/stdc++.h>

using namespace std;

void showarray(int* arr, int size)
{
    int i;
    for(i=0;i<size-1;i++)
        cout<<arr[i]<<", ";
    cout<<arr[i]<<endl;
}

void bubbleSort(int* arr, int size)
{
    for(int i=0;i<size-1;i++)               // for number of passes
    {
        cout<<"Starting pass "<<(i+1)<<" now..."<<endl;
        for(int j=0;j<(size-i-1);j++)       // j will move from 0 to unsorted index in each pass, comaparing and swapping elements
        {
            cout<<"Comparing arr["<<j<<"] = "<<arr[j]<<" and arr["<<(j+1)<<"] = "<<arr[j+1]<<endl;
            if(arr[j]>arr[j+1])
            {
                cout<<arr[j]<<" was greator than "<<arr[j+1]<<", so swapping them..."<<endl;
                int swap = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = swap;
                cout<<"Now the array looks as: ";
                showarray(arr, size);
            }
            else
                cout<<"Order is correct, so moving on..."<<endl;
        }
        cout<<"Pass "<<(i+1)<<" over."<<endl;
    }
    cout<<"Sorting Completed!!!"<<endl;
}

void bubbleSortAdaptive(int* arr, int size)
{

}

int main()
{
    int arr[] = {7, 11, 9, 2, 17, 4};
    int size = sizeof(arr)/sizeof(int);

    showarray(arr, size);
    bubbleSort(arr, size);
    showarray(arr, size);

    return 0;
}
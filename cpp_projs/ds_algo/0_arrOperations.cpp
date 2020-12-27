/*
arrays
--------
operations on arrays -
    1. insertion 
    2. deletion
    3. searching
    4. sorting
*/

// insertion in arrays
// ---------------------
// time complexity: o(n) (when order of the array is to be maintained)
//                  o(1) (when order of the array does not matter)
// NOTE - while talking about the time complexity of an algorithm, we always talk about the worst case complexity,
// as it is the case, which we aim to improve.

// deletion in arrays
// -------------------
// time complexity: o(n) (when order of the elements need to be maintained)
//                  o(1) (when order of the elements does not matter)

// searching in arrays
// 1.   linear search: time complexity is o(n)
// 2.   binary search: time complexity is o(log n) (but it requires a sorted array)

// sorting will be covered later in detail...

#include<bits/stdc++.h>

using namespace std;

void insertInArray(int arr[], int &used_size, int total_size, int element, int index)
{
    if(used_size==total_size)
        cout<<"Array is already full!"<<endl;
    else
    {
        for(int i=used_size-1;i>=index;i--)
        {
            arr[i+1] = arr[i];
        }
        arr[index] = element;
        cout<<"Insertion done successfully!"<<endl;
        used_size++;
    }
}

void deleteInArray(int arr[], int &used_size, int total_size, int index)
{
    if(index>=used_size)
        cout<<"Array is empty here!"<<endl;
    else
    {
        int i;
        for(i=index;i<(used_size-1);i++)
        {
            arr[i] = arr[i+1];
        }
        used_size--;
        cout<<"Deletion done successfully!"<<endl;
    }
}

void linearSearch(int arr[], int size, int element)
{
    int place = -1;
    for(int i=0;i<size;i++)
    {
        if(arr[i]==element)
            place = i;
    }
    cout<<"The provided element is present in the array at index "<<place<<endl;
}

void binarySearch(int arr[], int size, int element)
{
    int low = 0;
    int high = size-1;
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(arr[mid]==element)
        {
            cout<<"Element found at index "<<mid<<endl;
            break;
        }
        else if(arr[mid]>element)
            high = mid-1;
        else
            low = mid+1;
    }
}

void showArr(int arr[], int used_size)
{
    int i;
    for(i=0;i<(used_size-1);i++)
        cout<<arr[i]<<", ";
    cout<<arr[i]<<endl;
}

int main()
{
    int arr[100];
    arr[0] = 12; arr[1] = 78; arr[2] = 2; arr[3] = 87; arr[4] = 324; arr[5] = 4; arr[6] = 236;
    int size = 7;

    showArr(arr, size);
    insertInArray(arr, size, 100, 999, 2);
    showArr(arr, size);

    deleteInArray(arr, size, 100, 3);
    showArr(arr, size);

    linearSearch(arr, size, 999);

    sort(arr, arr+size);
    showArr(arr, size);
    binarySearch(arr, size, 12);

    return 0;
}

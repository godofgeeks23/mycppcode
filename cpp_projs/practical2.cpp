// this is the program to reverse an array by using the time complexity constraint of O(n)
// Algorithm - 
// This works by traversing the array from its start, that is from index 0, and that index, we swap 
// the value in array at index 0 and index (n-1). Next, we traverse to the next array element from starting, i.e. 
// in our case the element at index 1 and we swap it from the element at the index n-2, and so on...
// In this way, we have to travel upto the middle of the array. i.e. if the array is of n number of elements
// then we have to traverse upto the middle of the array i.e. n/2. Hence time complexity is O(n/2) = O(n),
// or in other words the time complexity is 'Big O of n'.

#include<iostream>

using namespace std;
void swap(int &a, int &b)
{
    int c;
}
int main()
{
    int n;
    cout<<"Enter ther size of the array: ";
    cin>>n;
    int arr[n];
    int i;
    cout<<endl<<"Now enter the elements of the array - ";
    for(i=0;i<n;i++)
    {
        cin>>arr[n];
    }
    cout<<"Elements of the array entered successfully...";
    cout<<endl<<"Now reversing the elements of the array..."<<endl;

}
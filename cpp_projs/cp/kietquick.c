// (boilerplate) code 1
// --------------------#include<stdio.h>
// #include<math.h>
// #include<stdlib.h>
// #include<string.h>
// void main()
// {

// }

// // C program to implement insert
// // operation in an unsorted array.
// #include<stdio.h>

// // Inserts a key in arr[] of given capacity.
// // n is current size of arr[]. This
// // function returns n + 1 if insertion
// // is successful, else n.
// int insertSorted(int arr[], int n,
//         int key,
//         int capacity)
// {

//   // Cannot insert more elements if n is
//   // already more than or equal to capacity
//   if (n >= capacity)
//   return n;

//   arr[n] = key;

//   return (n + 1);
// }

// // Driver Code
// int main()
// {
//   int arr[20] = {12, 16, 20, 40, 50, 70};
//   int capacity = sizeof(arr) / sizeof(arr[0]);
//   int n = 6;
//   int i, key = 26;

//   printf("\n Before Insertion: ");
//   for (i = 0; i < n; i++)
//     printf("%d ", arr[i]);

//   // Inserting key
//   n = insertSorted(arr, n, key, capacity);

//   printf("\n After Insertion: ");
//   for (i = 0; i < n; i++)
//     printf("%d ",arr[i]);

//   return 0;
// }

#include<stdio.h>
void TOH(int n, char a, char b, char c)
{
    if (n == 1)
    {
        printf("\nMove disk 1 from %c to %c", a, c);
        return;
    }
    TOH(n - 1, a, c, b);
    printf("\nMove disk %d from %c to %c", n, a, c);
    TOH(n - 1, b, a, c);
}
int main() 
{
    int n;
    printf("Enter the number of disks: ");
    scanf("%d",&n);
    TOH(n, 'A', 'B', 'C');
    return 0;
}
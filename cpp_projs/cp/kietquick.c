// (boilerplate) code 1
// --------------------
// #include<stdio.h>
// #include<math.h>
// #include<stdlib.h>
// #include<string.h>
// void main()
// {

// }

/* C Program for the implentation of Restoring Division
*/
/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/* C Program for the implentation of Restoring Division
*/

#include <stdio.h>
#include <stdlib.h>
 
void indexedSequentialSearch(int arr[], int n, int k)
{
    int elements[20], indices[20], temp, i, set = 0;
    int j = 0, ind = 0, start, end;
    for (i = 0; i < n; i += 3) {
        elements[ind] = arr[i];
        indices[ind] = i;
        ind++;
    }
    if (k < elements[0]) {
        printf("Not found");
        exit(0);
    }
    else {
        for (i = 1; i <= ind; i++)
            if (k <= elements[i]) {
                start = indices[i - 1];
                end = indices[i];
                set = 1;
                break;
            }
    }
    if (set == 0) {
        start = indices[i - 1];
        end = n;
    }
    for (i = start; i <= end; i++) {
        if (k == arr[i]) {
            j = 1;
            break;
        }
    }
    if (j == 1)
        printf("Found at index %d", i);
    else
        printf("Not found");
}
void main()
{
 
    int arr[] = { 6, 7, 8, 9, 10 };
    int n = sizeof(arr) / sizeof(arr[0]);

    int k = 8;
    indexedSequentialSearch(arr, n, k);
}


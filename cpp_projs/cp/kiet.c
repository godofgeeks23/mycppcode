#include <stdio.h>
#include <ctype.h>
// recursive binary search
int rec_bin_search(int *a, int n, int x)
{
    int m;
    if (n == 1)
        return (a[0] == x);
    m = n / 2;
    if (a[m] == x)
        return 1;
    if (a[m] > x)
        return rec_bin_search(a, m, x);
    else
        return rec_bin_search(a + m, n - m, x);
}
int main()
{
    int a[10], n, x;
    printf("Enter the number of elements in the array\n");
    scanf("%d", &n);
    printf("Enter the elements of the array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the element to be searched\n");
    scanf("%d", &x);
    int pos = rec_bin_search(a, n, x);
    if (pos == -1)
    {
        printf("Element not found\n");
    }
    else
    {
        printf("Element found at position %d\n", pos);
    }
    return 0;
}
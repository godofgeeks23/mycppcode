#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void main() 
{
    int arr[10];
    int n, sum, a, b;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf("%d", &arr[i]);
    sum = abs(arr[0]+arr[1]);
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            if(abs(arr[i]+arr[j])<sum)
            {
                sum = abs(arr[i]+arr[j]);
                a = arr[i];
                b = arr[j];
            }
    printf("%d %d", a, b);
}

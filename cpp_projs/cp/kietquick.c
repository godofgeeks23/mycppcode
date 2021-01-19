#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void main() 
{
    int arr[9], i, j, freq;
    for(i=0;i<9;i++)
        scanf("%d", &arr[i]);
    for(i=0;i<9;i++)
    {
        freq = 1;
        for(j=i+1;j<9;j++)
            if(arr[j]!=-1 && arr[i]==arr[j])
            {
                freq++;
                arr[j] = -1;
            }
        if(arr[i]!=-1)
            printf("%d %d\n", arr[i], freq);
    }
}
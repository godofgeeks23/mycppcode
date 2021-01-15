#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    
    // 1    2    4    7    2    2    2    4    1
    
    // 1    2    4    7    2    2    2    4    -1
    
    int arr[9], i, j, freq;
    for(i=0;i<9;i++)
        scanf("%d", &arr[i]);
    for(i=0;i<9;i++)
    {
        freq = 1;
        for(j=i+1;j<9;j++)
            if(arr[i]==arr[j])
            {
                freq++;
                arr[j] = -1;
            }
        if(arr[i]!=-1)
            printf("%d %d\n", arr[i], freq);
    }
    return 0;
}
// #include<stdio.h>
// #include<math.h>
// #include<stdlib.h>
// #include<string.h>
// void main() 
// {
//     
// }

// counting fibonacci in a given range
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
void main() 
{
    long int x, y, fibs[55];
    int t, count;
    fibs[0] = 1;
    fibs[1] = 2;
    scanf("%d", &t);
    for(int i=2;i<55;i++) 
        fibs[i] = fibs[i-1]+fibs[i-2];
    while(t--)
    {
        scanf("%ld %ld", &x, &y);
        count = 0;
        for(int i=0;i<55;i++)
            if(fibs[i]>x && fibs[i]<y)
                count++;
        printf("%d\n", count);
    }
}

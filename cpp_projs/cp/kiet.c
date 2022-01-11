#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int a[3] = {20,30,40}; 
    int *p[3]; 
    p = &a; 
    printf("%d", *p[0]);
}

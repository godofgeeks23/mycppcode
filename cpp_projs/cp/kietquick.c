// boilerplate code - 
// --------------------
// #include<stdio.h>
// #include<math.h>
// #include<stdlib.h>
// #include<string.h>
// void main() 
// {
//     int t;
//     scanf("%d", &t);
//     while(t--)
//     {
        
//     }
// }

#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void str_r() {
    char str[500], rev[500];
    int i, j=0;
    fgets(str, 500, stdin);
    while(str[j]!='\0')
        j++;
    for(i=0;i<=j;i++)
        rev[i] = str[j-1-i];
    puts(rev);
}

int main()
{
    str_r();
    return 0;
}

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
void str_c(int m) 
{
    char c[500];
    fgets(c,500,stdin);
    int i=0;
    for(i=0;i<m;i++)
    {
        printf("%c",c[i]);
    }
}
int main()
{ 
    int m;
    scanf("%d",&m);
    str_c(m);
    return 0;
}
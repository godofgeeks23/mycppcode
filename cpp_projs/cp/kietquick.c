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

// Complete the 'str_c' function below.

void str_c() {
    // write your code here
    char str1[500];
    char str2[500];
    fgets(str1, 500, stdin);
    scanf("\n");
    fgets(str2, 500, stdin);
    int l1, l2;
    for(l1=0;str1[l1]!='\0';l1++);
    for(l2=0;str2[l2]!='\0';l2++);
    int flag = 0;
    printf("%d %d", l1, l2);
    if(l1==l2)
        for(int i=0;i<l1;i++)
            if(str1[i]!=str2[i])
            {
                flag = -1;
                break;
            }
    else
        flag = -1;
    if(flag==0)
        printf("Strings are equal.");
    else
        printf("Strings are not equal.");
}

int main()
{
    str_c();

    return 0;
}

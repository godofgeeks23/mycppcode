// boilerplate code - 
// --------------------
// #include<stdio.h>
// #include<math.h>
// #include<stdlib.h>
// #include<string.h>
// void main() 
// {
    
// }

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
void main() 
{
    
}


// #include<stdio.h>
// #include<math.h>
// #include<stdlib.h>
// #include<string.h>
// int main() {
//     int n;
//     scanf("%d", &n);
//     int arr[1000][3];
//     for(int i=0;i<n;i++)
//         scanf("%d %d %d", &arr[i][0],&arr[i][1],&arr[i][2]);
//     for (int i = 0; i < n-1; i++)    
//         for (int j = 0; j < n-i-1; j++)
//             if (arr[j][1] < arr[j+1][1])
//             {
//                 int temp1 = arr[j][0];
//                 int temp2 = arr[j][1];
//                 int temp3 = arr[j][2];
//                 arr[j][0] = arr[j+1][0];
//                 arr[j][1] = arr[j+1][1];
//                 arr[j][2] = arr[j+1][2];
//                 arr[j+1][0] = temp1;
//                 arr[j+1][1] = temp2;
//                 arr[j+1][2] = temp3;
//             }
//     int sum = 0;
//     for(int i=0;i<n;i++)
//     {
//         printf("%d %d\n",arr[i][0], sum);
//         sum+=arr[i][2];
//     }
//     return 0;
// }


// #include <assert.h>
// #include <ctype.h>
// #include <limits.h>
// #include <math.h>
// #include <stdbool.h>
// #include <stddef.h>
// #include <stdint.h>
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// void str_c() {
//     char str1[500];
//     char str2[500];
//     fgets(str1, 500, stdin);
//     fgets(str2, 500, stdin);
//     int l1 = strlen(str1);
//     int l2 = strlen(str2);
//     str1[l1-1] = '\0';
//     l1 = strlen(str1);
//     int flag = 0;
//     printf("%s:%d,\n%s:%d\n", str1, l1, str2, l2);
//     if(l1==l2)
//     {
//         // printf("equal lengths...\n");
//         for(int i=0;i<l1;i++)
//             if(str1[i]!=str2[i])
//             {
//                 // printf("found a non-matching character %c-%c...\n", str1[i], str2[i]);
//                 flag = -1;
//                 break;
//             }
//     }
//     else
//     {
//         flag = -1;
//         // printf("\nNot equal because of unequal lengths...");
//     }
//     if(flag==0)
//         printf("Strings are equal.");
//     else
//         printf("Strings are not equal.");
// }
// int main()
// {
//     str_c();
//     return 0;
// }

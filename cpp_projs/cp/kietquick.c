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
    int count = 1;
    for(int i=4;i>=0;i--)
    {
        for(int j=1;j<=i;j++)
            printf(" ");
        for(int j=1;j<=count;j++)
            printf("*");
        count+=2;
        printf("\n");
    }
}

// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main() {
//     int arr[15];
//     int max = -1, max_index = -1, turn = 2, max_turn = 0;
//     for(int i=0;i<15;i++)
//     {
//         if(i%5==0)
//             turn = 1;
//         scanf("%d", &arr[i]);
//         if(arr[i]>max)
//         {
//             max = arr[i];
//             max_index = i+1;
//             max_turn = turn;
//         }
//         turn++;
//     }
//     printf("Maximum Apples (%d) are collected from Tree %d with rank as %d", max, max_turn, max_index);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>
// void bubbleSort(int arr[], int n)
// {
//     int i, j;
//     for (i = 0; i < n-1; i++)    
//     for (j = 0; j < n-i-1; j++)
//         if (arr[j] > arr[j+1])
//         {
//             int temp = arr[j];
//             arr[j] = arr[j+1];
//             arr[j+1] = temp;
//         }
// }
// int main() {   
//     int arr[5];
//     for(int i=0;i<5;i++)
//         scanf("%d", &arr[i]);
//     bubbleSort(arr, 5);
//     for(int i=0;i<5;i++)
//         printf("%d,", arr[i]);
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

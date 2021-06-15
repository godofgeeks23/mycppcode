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
    int a, b, c, sum;
    scanf("%d%d%d", &a, &b, &c);
    sum = calsum(a, b, c);
    printf("%d", sum);
}
calsum(int x, int y, int z)
{
    int d;
    d = y;
    d = 56;
    printf("%d\n", d);
    // return d;
}

// #include<stdio.h>
// #include<math.h>
// #include<stdlib.h>
// #include<string.h>
// void main()
// {
//     int x = 5;
//     // int y = (--x)+(--x)+(x=10);
//     // printf("%d %d\n", x, y);
//     int y = 
// }

// 6 = a
// fact = 1x2x3x4x.......a
// #include <stdio.h>
// #include <math.h>
// #include <stdlib.h>
// #include <string.h>
// void main()
// {
//     int a;
//     char cont;
//     do
//     {
//         scanf("%d", &a);
//         int factorial = 1;
//         int i = 1;
//         while (i <= a)
//         {
//             factorial = factorial * i;
//             // printf("now factorial is %d\n", factorial);
//             i++;
//         }
//         printf("%d", factorial);
//         printf("do you want to continue or not ? ");
//         scanf("%c", &cont);
//     } while (cont == 'y');
// }
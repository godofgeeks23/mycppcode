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
    int x, y, z;
    x = y  = z = 1;
    // now x = 1, y = 1, z = 1
    z = ++x || ++y && ++z;
    // now x = 2, y = 2
    // so z is evaluated as - 
    z = 2 || 2 && 2
    z = (2 || 2) && 2 
    // (a || b) gives 0 or 1 depending whether any one of a and b are 
    // non zero or not. Here (2 || 2) are both non zero, so it evaluates
    // to be true i.e. 1
    z = 1 && 2
    // again (1 && 2) is evaluated as boolean expression as 
    // a && b means whether both of a, b are non zero or not.
    // here (1 && 2) are both non zero, so it evaluates to true i.e. 1
    z = 1
    printf("%d %d %d", x, y, z);
}

// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>
// void shiftrings(int n, char from, char to, char extra)
// {
//     if (n == 1)
//     {
//         printf("Moving ring 1 from %c to %c\n\n", from, to);
//         return;
//     }
//     shiftrings(n - 1, from, extra, to);
//     printf("Moving ring %d from %c to %c\n\n", n, from, to);
//     shiftrings(n - 1, extra, to, from);
// }
// int main() {

//     int n;
//     scanf("%d", &n);
//     shiftrings(n, 'A', 'C', 'B');    
//     return 0;
// }
 
// This is code is contributed by rathbhupendra

// #include <stdio.h>
// #include <math.h>
// #include <stdlib.h>
// #include <string.h>
// void main()
// {
//   // int x = 5;
//   // int y = (--x) + (--x) + (x = 10);
//   // printf("%d %d\n", x, y);
//   // int y =
//   int a, b = -13, c = 5;
//   if (a = b % c)
//     printf("%d", a);
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
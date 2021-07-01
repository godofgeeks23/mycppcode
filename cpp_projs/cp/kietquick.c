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
#define square(n) n*n
void main()
{
    int i;
    i = 64/(square(4));
    printf("%d", i);
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
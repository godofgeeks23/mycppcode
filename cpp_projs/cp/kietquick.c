// boilerplate code -
// --------------------
// #include<stdio.h>
// #include<math.h>
// #include<stdlib.h>
// #include<string.h>
// void main()
// {

// }

// #include<stdio.h>
// #include<math.h>
// #include<stdlib.h>
// #include<string.h>
// void main()
// {
//     int l, k, sum;
//     scanf("%d %d", &l, &k);
//     sum = k;
//     l--;
//     while(l--)
//     {
//         k *= k;
//         sum+=k;
//     }
//     printf("%d\n", sum);
// }

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int mult(int x, int y)
{
    if (y != 0)
        return (x + mult(x, y - 1));
    else
        return 0;
}
int main()
{
    int x = 5, y = 60;
    printf("%d",mult(x, y));
    return 0;
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
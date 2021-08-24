// #include<stdio.h>
// #include<math.h>
// #include<stdlib.h>
// #include<string.h>
// void main()
// {

// }

#include <stdio.h>
#include <string.h>
int main()
{

    return 0;
}

// #include <stdio.h>
// #include <math.h>
// #include <stdlib.h>
// #include <string.h>
// int main()
// {
//     int a[4][5] = {{1 ,2 ,3 ,4 ,5},{6 ,7 ,8 ,9 ,10},{11 ,12 ,13 ,14 ,15},{16 ,17 ,18 ,19 ,20};
//     printf("%d\n", *a);
//     printf("%d\n", **(a+3));
//     printf("%d\n", *(*(a+3)+3));
//     printf("%d\n", **a);
//     printf("%d\n", *(*(a+**a+2)+3));

//     int i = 0;
//     for (i = 0;i < 5; i++)
//         if (i < 4)
//         {
//             printf("Hello");
//             break;
//         }
//     int x=10;

//     if x>=2

//     printf("%d",x);

//     int a = 10, b = 5, c = 3, d;
//     b != !a;
//     c = b != !a;
//     d = !!a;
//     printf("%d\t%d\t%d\t%d", a, b, c, d);

//     int i = 0, j = 1, k = 2, m;
//     m = i++ || j++ || k++;
//     m = 0 or 1 = 1
//     i = 1
//     j = 2
//     printf("%d %d %d %d", m, i, j, k);

//     int x = 10;
//     x = !x;
//     printf("%d", x);
//     char res = 130;
//     printf("%d", res);

//     int x = 5, y = 0, z;
//     if(x==0||x&&y)
//         if(!y)
//             z = 0;
//         else
//             y = 1;
//         printf("%d %d %d", x, y, z);
// }

// #include<stdio.h>
// #include<math.h>
// #include<stdlib.h>
// #include<string.h>
// #define condition(x) printf("letsfindcourse");
// int main()
// {
//     // printf("%d", p);
//     condition(0);;;
//     return 0;
// }

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
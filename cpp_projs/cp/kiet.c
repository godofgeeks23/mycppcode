// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>
// int main()
// {

//     char s[10000], c[5000];
//     int a[26], b[26], i = 0, len, pos, limit, j, index;
//     scanf("%s", s);
//     len = strlen(s);
//     pos = len - 1;
//     limit = len >> 1;
//     while (s[i])
//         a[s[i++] - 97]++;
//     for (i = 0; i < 26; i++)
//         b[i] = a[i] / 2;
//     for (i = 0; i < limit; i++)
//     {
//         char best;
//         int x = 0;
//         for (j = pos; j >= 0; j--)
//         {
//             if ((!x || s[j] < best) && b[s[j] - 97])
//             {
//                 x = 1;
//                 best = s[j];
//                 index = j;
//             }
//             a[s[j] - 97]--;
//             if (a[s[j] - 97] < b[s[j] - 97])
//                 break;
//         }
//         for (; j < index; ++j)
//         {
//             ++a[s[j] - 97];
//         }
//         c[i] = best;
//         b[best - 97]--;
//         pos = index - 1;
//     }
//     printf("%s", c);
//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>
#define MAXROW 4
#define MAXCOL 5
int main()
{
    int **p, i, j;
    p = (int **)malloc(MAXROW * sizeof(int *));
    return 0;
}
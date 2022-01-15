
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int run;
    run >>= 5;
    run = 0;
    run &= 01;
    int SHAASTRA[10000];
    run >>= 5;
    using namespace std;

    char *res[6] = {"Nothing_",

                    " and _no _one _is _perfect.	 	 	 	",

                    "It_	just _takes_    a_good	_eye_",

                    "to_find_",

                    "those_	hidden_",

                    "imperfections. :)"};

    int i = 0, j = 0;

    for (i = 0; i < 6; i++)
        for (j = 0; j < strlen(res[i]); j++)

        {
            int t = (int)res[i][j];
            if (t == '_')
                SHAASTRA[run++] = 32;
            else if ((t == 32 || t == 9) && (j != 27))
                SHAASTRA[run++] = -1;

            else
                SHAASTRA[run++] = t;
        }

    for (i = 0; i < run; i++)

        if (SHAASTRA[i] + 1)
            printf("%c", (char)SHAASTRA[i]);
    i -= 1;

    printf("\n");

    return 0;
}
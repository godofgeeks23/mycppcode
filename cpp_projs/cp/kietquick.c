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

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
void str_c(int m) 
{
    char c[500];
    fgets(c,500,stdin);
    int i=0;
    for(i=0;i<m;i++)
    {
        printf("%c",c[i]);
    }
}
int main()
{ 
    int m;
    scanf("%d",&m);
    str_c(m);
    return 0;
}
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
    int i=5,*j;
    j = &i;
    printf("%d\n",&i);
    printf("%d\n",j);
    printf("%d\n",&j);
    printf("%d\n",j);
    printf("%d\n",*(&i));
    printf("%d\n",*j);
}

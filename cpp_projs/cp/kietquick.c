// (boilerplate) code 1
// --------------------#include<stdio.h>
// #include<math.h>
// #include<stdlib.h>
// #include<string.h>
// void main()
// {

// }

#include<stdio.h>
void TOH(int n, char a, char b, char c)
{
    if (n == 1)
    {
        printf("\nMove disk 1 from %c to %c", a, c);
        return;
    }
    TOH(n - 1, a, c, b);
    printf("\nMove disk %d from %c to %c", n, a, c);
    TOH(n - 1, b, a, c);
}
int main() 
{
    int n = 3;
    TOH(n, 'A', 'B', 'C');
    return 0;
}
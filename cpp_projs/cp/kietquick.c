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
    int daily, coding , habit;
    daily = coding = habit = 2;
    habit = daily++||++coding && ++habit;
    printf("%d%d%d", habit, daily, coding);
}
// end of program
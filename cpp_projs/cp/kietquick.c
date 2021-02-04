#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
void main() 
{
    long int x, y, fibs[55];
    int t, count;
    fibs[0] = 1;
    fibs[1] = 2;
    scanf("%d", &t);
    for(int i=2;i<55;i++)
    {    
        fibs[i] = fibs[i-1]+fibs[i-2];
        printf("%lld\n", fibs[i]);
    }
    while(t--)
    {
        scanf("%lld %lld", &x, &y);
        count = 0;
        for(int i=0;i<55;i++)
            if(fibs[i]>x && fibs[i]<y)
                count++;
        printf("%d\n", count);
    }
}

// #include<stdio.h>
// #include<math.h>
// #include<stdlib.h>
// #include<string.h>
// long long int mygcd(long long int a, long long int b)
// {
//     if (b == 0)
//         return a;
//     return mygcd(b, a % b); 
// }
// void main() 
// {
//     int t, n, r;
//     scanf("%d", &t);
//     while(t--)
//     {
//         scanf("%d %d", &n, &r);
//         long long int temp1 = 1;
//         long long int temp2 = 1;
//         if((n-r)<r)
//             r = n-r;
//         while(r)
//         {
//             temp1*=n;
//             temp2*=r;
//             n--;
//             r--;
//             long long int avi = mygcd(temp1, temp2);
//             temp1/=avi;
//             temp2/=avi;
//         }
//         printf("%lld\n", temp1);
//     }
// }

// #include<stdio.h>
// #include<math.h>
// #include<stdlib.h>
// #include<string.h>
// void main() 
// {
//     int t, n, count;
//     scanf("%d", &t);
//     if(!t)
//         printf("Enter atleast one attempt\n");
//     else if(t>=100000)
//         printf("Too many attempts\n");
//     else
//     {
//         while(t--)
//         {
//             scanf("%d", &n);
//             if(n<100000)
//             {
//                 count = 1;
//                 for(int i=2;i<=(n/2);i++)
//                     if(!(n%i))
//                         count++;
//                 if(n!=1)
//                     count++;
//                 printf("%d\n", count);
//             }
//             else
//                 printf("number is too large\n");
//         }
//     }
// }



// #include<stdio.h>
// #include<math.h>
// #include<stdlib.h>
// #include<string.h>
// void main() 
// {
//     int k, n, t, sum;
//     scanf("%d", &t);
//     while(t--)
//     {
//         scanf("%d%d", &k, &n);
//         sum = 0;
//         for(int i=1;i<=n;i++)
//         {
//              sum+=i%k;   
//         }
//         printf("%d\n", sum);
//     }
// }

// #include<stdio.h>
// #include<math.h>
// #include<stdlib.h>
// #include<string.h>
// void main() 
// {
//     int t, sum;
//     char num[20];
//     scanf("%d", &t);
//     while(t--)
//     {
//         scanf("%s", num);
//         sum = 0;
//         int size = strlen(num);
//         // printf("%d\n", (num[0]-'0'));
//         for(int i=0;i<size;i=i+2)
//             sum+=(num[i]-'0');
//         printf("%d\n", sum);
//     }
// }

// #include<stdio.h>
// #include<math.h>
// #include<stdlib.h>
// #include<string.h>
// void main() 
// {
//     int t, sum;
//     char num[20];
//     scanf("%d", &t);
//     while(t--)
//     {
//         scanf("%s", num);
//         sum = 0;
//         int size = strlen(num);
//         // printf("%d\n", (num[0]-'0'));
//         sum = (num[0]-'0');
//         sum+=(num[size-1]-'0');
//         printf("%d\n", sum);
//     }
// }

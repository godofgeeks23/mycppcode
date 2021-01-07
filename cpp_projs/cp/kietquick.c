#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void main()
{
	int a, b, index;
	scanf("%d", &a);
	b = index = 0;
	while(a)
	{
		int tmp = a%2;
		if(tmp==0)
		{
			b = b + pow(2, index);
			index++;
		}
		else		// tmp is 1
			index++;
		a = a/2;
	}
	printf("%d\n", b);
}

//hackerrank test 1 - problem 1
//-------------------------------------------------------
// long findgcd(long a, long b)
// {
// 	long temp = a>b?b:a;
// 	for(long i=temp;i>=1;i--)
// 	{
// 		if((a%i)==0)
// 		{
// 			if((b%i)==0)
// 			{
// 				temp = i;
// 				break;
// 			}
// 		}
// 	}
// 	return temp;
// }
// int t;
// 	long a, b, l, g;
// 	scanf("%d", &t);
// 	while(t--)
// 	{
// 		scanf("%ld%ld", &a, &b);
// 		g = findgcd(a, b);
// 		l = (a*b)/(g);
// 		printf("%ld %ld\n", g, l);
// 	}

// hackerrank test 1 - problem 2
//------------------------------------------------------------
// void multiply_in_array(int arr[], int *used_size, int n)
// {
//     int carry = 0;
//     for(int i=0;i<(*used_size);i++)
//     {
//         int tmp = arr[i]*n + carry;
//         arr[i] = tmp%10;
//         carry = tmp/10;
//     }
//     while(carry)
//     {
//         arr[(*used_size)] = carry%10;
//         (*used_size)++;
//         carry = carry/10;
//     }
// }
// void main()
// {
// 	int arr[1000000];
//     arr[0] = 1;
//     int size = 1;
//     int n;
//     int t;
//     scanf("%d", &t);
//     while(t--)
//     {
//     scanf("%d", &n);
//     arr[0] = 1;
//     size = 1;
//     for(int i=1;i<=n; i++)
//     {
//         multiply_in_array(arr, &size, i);
//     }
//     int sum = 0;
//     for(int i=(size-1);i>=0;i--)
//         sum+=arr[i];
//     printf("%d\n", sum);
// }
// }

// hackerrank test 1 - problem 3
// -------------------------------
// void chk_perfect(int n)
// {
//     int sum = 0;
//     for(int i=1;i<n;i++)
//     {
//         if(n%i==0)
//             sum+=i;
//     }
//     if(n==sum)
//         printf("yes\n");
//     else
//         printf("no\n");
// }
// void main()
// {
// 	int b;
//     scanf("%d", &b);
//     chk_perfect(b);
// }

// hackerrank test 2 - problem 1
//------------------------------------------------------------
// #include<stdio.h>
// int isprime(int n)
// {
// 	int divs = 0;
// 	for(int i=1;i<=n;i++)
// 	{
// 		if(n%i==0)
// 			divs++;
// 	}
// 	if(divs==2)
// 		return 1;
// 	else
// 		return 0;
// }
// void main()
// {
//     int t,n,sum;
//     scanf("%d", &t);
//     while(t--)
//     {
//     	sum = 0;
//     	scanf("%d", &n);
//     	for(int i=2;i<n;i++)
//     	{
//     		if(isprime(i))
//     			sum+=i;
//     	}
//     	printf("%d\n", sum);
//     }
// }

// hackerrank test 2 - problem 2
//------------------------------------------------------------
// #include<stdio.h>
// #include<math.h>
// #include<stdlib.h>
// void main()
// {
// 	int a,b,t;
// 	scanf("%d", &t);
// 	while(t--)
// 	{
// 		scanf("%d%d", &a, &b);
// 		a = a^b;
// 		b = a^b;
// 		a = a^b;
// 		printf("%d %d\n", a, b);
// 	}
// }

// hackerrank test 2 - problem 3
//------------------------------------------------------------
// #include <stdio.h>
// #include <math.h>
// #include <stdlib.h>
// int reverse(int n)
// {
//     int rev = 0;
//     while(n)
//     {
//         int dig = n%10;
//         rev = rev*10+dig;
//         n = n/10;
//     }
//     return rev;
// }
// int main() {
//     int n,max;
//     scanf("%d", &n);
//     int temp_max = pow(10, n)-1;
//     int temp_min = pow(10, n-1);
//     for(int i=temp_max;i>=temp_min;i--)
//     {
//         for (int j=temp_max;j>=temp_min;j--)
//         {
//             max = i*j;
//             if(max==reverse(max))
//             {    
//                 printf("%d\n", max);
//                 exit(0);
//             }
//         }
//     } 
//     return 0;
// }

// hackerrank test 3 - problem 2
//------------------------------------------------------------
// #include<stdio.h>
// #include<math.h>
// #include<stdlib.h>
// void main()
// {
// 	int n;
// 	scanf("%d", &n);
// 	int term = 0;
// 	int diff = 1;
// 	while(n--)
// 	{
// 		term+=diff;
// 		diff++;
// 	}
// 	printf("%d\n", term);
// }

// hackerrank test 3 - problem 3
//------------------------------------------------------------
// #include<stdio.h>
// #include<math.h>
// #include<stdlib.h>
// void main()
// {
// 	int l,r,k,count;
// 	scanf("%d%d%d", &l, &r, &k);
// 	count = 0;
// 	for(int i=l;i<=r;i++)
// 	{
// 		if(i%k==0)
// 			count++;
// 	}
// 	printf("%d\n", count);
// }
#include<stdio.h>
void main()
{
	
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
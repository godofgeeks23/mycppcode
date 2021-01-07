// kiet c course

#include<stdio.h>

// c is a structured programming language

void main()
{
	int a = 10,b = 20;
	float avg;
	scanf("%d%d",&a, &b);
	avg = (a+b)/2.0;
	printf("Avg is: %d ... Bye!\n", avg);
	//compiler reads printf from right to left
	
	// for(int i=1;i<=5;i++)		// in ansi c, can't delcare 'int' inside the loop body!
	// 	printf("%d\n", i);

	a = 10;
	b = 20;
	int t, gcd;
	while(b)
	{
		t = b;
		b = a%b;
		a = t;
	}		
	gcd = a;
	printf("%d\n", gcd);
}

//hackerrank test 1 - problem 1
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

// kiet c course

#include<stdio.h>		// header files

// c is a structured programming language

void main()		// main function
{
	// declaration of variables
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

	char num[20];
	scanf("%s", num);		// take a string as input
}

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
void main() 
{
    int i=5,*j,**k;
    j = &i;
    k = &j;
    printf("%d\n",&i);      -659717668
    printf("%d\n",j);       -659717668
    printf("%d\n",*k);      -659717668
    printf("%d\n",&j);      -659717680
    printf("%d\n",k);       -659717680
    printf("%d\n",&k);      -659717688
    printf("%d\n",j);       -659717668
    printf("%d\n",k);       -659717680
    printf("%d\n",i);       5
    printf("%d\n",*(&i));   5
    printf("%d\n",*j);      5
    printf("%d\n",**k);     5
}

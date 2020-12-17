// kiet c course

#include<stdio.h>

// c is a structured programming language

int main()
{
	int a = 10,b = 20;
	float avg;

	clrscr();

	scanf("%d%d",&a, &b);
	avg = (a+b)/2.0;

	printf("Avg is: %d ... Hope you like it!", avg);
	//comiler reads printf from right to left 

	

	getch();
}
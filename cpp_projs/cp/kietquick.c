#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void main()
{
	int t, n, tmp;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d", &n);
		if(n%11==0)
			tmp = n+2;
		else if(n%4==0)
			tmp = n-2;
		else
			tmp = n*4;
		printf("%d\n", tmp);
	}
}

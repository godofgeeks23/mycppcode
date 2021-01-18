#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
void main()
{
	clrscr();
	int gd=DETECT, gm=DETECT;
	initgraph(&gd, &gm, "C:/TURBOC3/BGI");
//-------------------------------------------------------------------------//
	line(100,100,200,100);
	int num=100;
	char buffer[16] = {0};
	itoa(num,buffer,10);
	outtextxy(100+5,100-10,buffer);
//-------------------------------------------------------------------------//
	getch();
	closegraph();
}
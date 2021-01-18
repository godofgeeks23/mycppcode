#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void main()
{
	clrscr();
	int gd=DETECT, gm=DETECT;
	initgraph(&gd, &gm, "C:/TURBOC3/BGI");
//-------------------------------------------------------------------------//
	line(100,100,200,100);
//-------------------------------------------------------------------------//
	getch();
	closegraph();
}
#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include "mouse.h"
#include<stdlib.h>
void main()
{
	clrscr();
	int gd=DETECT, gm=DETECT;
	initgraph(&gd, &gm, "C:/TURBOC3/BGI");
//-------------------------------------------------------------------------//
	int x,y,click;
	line(100,100,200,100);
	while(1)
	{
		callmouse();
		mouseposi(x,y,click);
		char buffer1[16] = {0};
		itoa(x,buffer1,10);
		char buffer2[16] = {0};
		itoa(y,buffer2,10);
		outtextxy(x+10,y,buffer1);
		outtextxy(x+40,y,buffer2);
		if(kbhit())
		{
			char ch = getch();
			if(ch==27)
			{
				exit(0);
			}
		}
		delay(10);
		cleardevice();
	}
//-------------------------------------------------------------------------//
	getch();
	closegraph();
}
#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<process.h>
#include<mouse.h>
void main()
{
	clrscr();
	int gd=DETECT, gm=DETECT;
	initgraph(&gd, &gm, "C:/TURBOC3/BGI");
//-------------------------------------------------------------------------//
	int x,y,click,x1,y1,x2,y2;
	char ch;
	while(1)
	{
		outtextxy(100,100,"DRAG TO CREATE A RECTANGLE...");
		callmouse();
		mouseposi(x,y,click);
		if(click==1)
		{
			x1 = x;
			y1 = y;
			while(click==1)
			{
				mouseposi(x,y,click);
				x2 = x;
				y2 = y;
				rectangle(x1,y1,x2,y2);
				delay(10);
				setcolor(0);
				rectangle(x1,y1,x2,y2);
				setcolor(15);
				//cleardevice();
			}
			rectangle(x1,y1,x2,y2);
		}
		if(kbhit())
		{
			ch = getch();
			if(ch==27)
			{
				exit(0);
			}
		}
	}
//-------------------------------------------------------------------------//
	getch();
	closegraph();
}
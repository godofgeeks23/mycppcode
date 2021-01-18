#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<process.h>
void main()
{
	clrscr();
	int gd=DETECT, gm=DETECT;
	initgraph(&gd, &gm, "C:/TURBOC3/BGI");
//////////////////////////////////////////////////////////////////////////
	int x=getmaxx()/2,y=getmaxy()/2,r=50,dx,dy;
	char ch;
	while(1)
	{
		circle(x,y,r);
		if(kbhit())
		{
			ch=getch();
			if(ch=='w'|| ch=='W')
			{
				dx=0;
				dy=-5;
			}
			if(ch==27)
			{
				exit(0);
			}
			x=x+dx;
			y=y+dy;
			delay(50);
			cleardevice();
		}
	}
//////////////////////////////////////////////////////////////////////////
	getch();
	closegraph();
}
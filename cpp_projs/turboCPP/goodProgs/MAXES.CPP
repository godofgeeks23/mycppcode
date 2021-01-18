#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<mouse.h>
#include<process.h>
void main()
{
	clrscr();
	int gd=DETECT, gm=DETECT;
	initgraph(&gd, &gm, "C:/TURBOC3/BGI");
//-------------------------------------------------------------------------//
	int x=0,y=0,click=0;
	while(click!=1)
	{
		callmouse();
		mouseposi(x,y,click);
		line(0,y,getmaxx(),y);
		line(x,0,x,getmaxy());
		delay(10);
		cleardevice();
	}
//-------------------------------------------------------------------------//
	closegraph();
}
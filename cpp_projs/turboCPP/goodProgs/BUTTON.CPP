#include<mouse.h>
#include<string.h>
#include<process.h>
int unpress(int x1,int y1,int x2,int y2)
{
	setlinestyle(0,1,1);
	setfillstyle(1,1);
	bar(x1,y1,x2,y2);
	setcolor(WHITE);
	line(x1,y1,x2,y1);
	line(x1,y1,x1,y2);
	setcolor(0);
	line(x1,y2,x2,y2);
	line(x2,y1,x2,y2);
	return 0;
}
void button(int x1,int y1,int x2,int y2,char str[])
{
		int xc,yc,i=0,l=0;
		while(i<strlen(str))
		{
			l+=4;
			i++;
		}
		xc=(x2-x1)/2+x1-l;
		yc=(y2-y1)/2+y1;
		unpress(x1,y1,x2,y2);
		settextstyle(0,0,0);
		setcolor(11);
		outtextxy(xc,yc,str);
}
int press(int x1,int y1,int x2,int y2)
{
	setlinestyle(0,1,1);
	setfillstyle(1,1);
	bar(x1,y1,x2,y2);
	setcolor(0);
	line(x1,y1,x2,y1);
	line(x1,y1,x1,y2);
	setcolor(WHITE);
	line(x1,y2,x2,y2);
	line(x2,y1,x2,y2);
	return 0;
}
int click(int x1,int y1,int x2,int y2,char str[])
{
	int button,x,y;
	int xc,yc,i=0,l=0;
	while(i<strlen(str))
	{
		l+=4;
		i++;
	}
	xc=(x2-x1)/2+x1-l;
	yc=(y2-y1)/2+y1;
	mouseposi(x,y,button);
	if( (x>x1 && x<x2) && (y>y1 && y<y2) && button==1)
	{
		mousehide();
		press(x1,y1,x2,y2);
		setcolor(11);
		settextstyle(0,0,0);
		outtextxy(xc,yc,str);
		callmouse();
		while((button==1))
			mouseposi(x,y,button);
		mousehide();
		unpress(x1,y1,x2,y2);
		callmouse();
		setcolor(11);
		settextstyle(0,0,0);
		outtextxy(xc,yc,str);
		for(i=50;i<500;i=i+50)
		{
			delay(10);
			sound(i+200);
		}
		callmouse();
		nosound();
		setcolor(11);
		settextstyle(0,0,0);
		outtextxy(xc,yc,str);
		return 0;
	}
	else return 1;
}
void main()
{

	int gdriver=DETECT,gmode;
	initgraph(&gdriver,&gmode,"c:/turboc3/bgi");
	cleardevice();
	callmouse();
	button(250,100,400,150,"Insert");
	while(1)
	{
		if(click(250,100,400,150,"Insert")==0)
		{
			outtextxy(100,100,"you clicked!!!");
			delay(500);
			exit(0);
		}
	}
}

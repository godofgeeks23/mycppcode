#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
void main()
{
	clrscr();
	int gd=DETECT, gm=DETECT;
	initgraph(&gd, &gm, "C:/TURBOC3/BGI");
//---------------------------------------------------------------------
	int r=50,l_startx,l_starty,l_endx,l_endy,a=100,b=100,color=3;
	int langle_deg=90+0,cx,cy,sourcePT_x,sourcePT_y,wait=10;
	double cangle, l_theta, pi=3.14;
	cx = getmaxx()/2;
	cy = getmaxy()/2;
	setcolor(color);
	for(int i=0;i<=360;i++)
	{
		langle_deg = 90+i;
		l_theta = (pi/180)*langle_deg;
		cangle = -(((pi/2)-l_theta));
		sourcePT_x = cx+r*cos(cangle);
		sourcePT_y = cy+r*sin(cangle);
		l_startx = sourcePT_x-a*cos(l_theta);
		l_starty = sourcePT_y-a*sin(l_theta);
		l_endx = sourcePT_x+b*cos(l_theta);
		l_endy = sourcePT_y+b*sin(l_theta);
		line(l_startx,l_starty,l_endx,l_endy);
		circle(cx,cy,r);
		delay(wait);
		cleardevice();
	}
//---------------------------------------------------------------------
	closegraph();
}
#include <stdio.h>
#include <graphics.h>
#include <math.h>
#include <conio.h>
#include <dos.h>
void main(void)
{
	int driver, mode, n;
	float angle;
	char string[80];

	driver = DETECT;  /* autotect*/
	mode = 0;
	clrscr();
	initgraph(&driver, &mode, "c:/turboc3/bgi");

	setcolor(BLUE); /*sets the color of the circle */
	circle (300, 250, 150); /* x=300, y=250, r=150 */

	circle (300, 250, 200);
	/* thus, there are now two closed areas bounded by blue */

	setfillstyle (SOLID_FILL, YELLOW);
	floodfill (300, 75, BLUE);
	/* fills area in which x, y are located bounded by BLUE */
	/* note that this is the outer circle */

	while(!(kbhit()))
	{
	   for (n=0; n<=12; n++)
	   {
		 setfillstyle(n, GREEN);
		 /* illustrates various fill styles */
		 floodfill(300, 250, BLUE); /* inner circle */

		 setcolor(MAGENTA);
		 sprintf(string, "Fill Style: %d", n);
		 outtextxy(250, 25, string);
		 sleep(1);

		 setcolor(BLACK); /* erase the text */
		 sprintf(string, "Fill Style: %d", n);
		 outtextxy(250, 25, string);
	   }
	}
	restorecrtmode(); /* restores the screen to the original screen */
}


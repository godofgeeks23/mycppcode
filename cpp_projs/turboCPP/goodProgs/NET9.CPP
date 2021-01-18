#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void outsq(int,int);
void insq(int,int);
void set(int);
int x,y,a=0;

main()
{
int n;
cout<<"enter number of telescopic squares: ";cin>>n;
if(n<=0) cout<<"invalid number...("<<n<<")"<<endl;
else{
int h=128;
y=240+h;
x=(640-2*h)/2;
int gdriver=DETECT,gmode;
initgraph (&gdriver,&gmode,"c:/turboc3/bgi");
moveto(x,y);
outsq(n,h);
closegraph();}
return 6;
}
//end of main

void outsq(int n,int h)
{
 if(n==0) a-=90;
 else{
 setcolor(n);
 set(h); lineto(x,y);getch();
 a+=45;
 insq(n,h);
 a+=45; set(h)  ; lineto(x,y);getch();
 a+=90; set(2*h); lineto(x,y);
 a+=90; set(2*h); lineto(x,y);
 a+=90; set(2*h); lineto(x,y);getch();
 }//end of else
}
//end of drawing the outsider square

void insq(int n,int h)
{
 set(h); lineto(x,y);getch();
 a+=45;
 outsq(n-1,h/2);
 setcolor(n);
 a+=45; set(h)  ; lineto(x,y);getch();
 a+=90; set(2*h); lineto(x,y);
 a+=90; set(2*h); lineto(x,y);
 a+=90; set(2*h); lineto(x,y);getch();
}
//end of drawing the insider square

void set(int h)
{
 a=a%360;
 switch(a)
 {case 0  :{x+=h  ;        break;}
  case 45 :{x+=h/2; y-=h/2;break;}
  case 90 :{        y-=h  ;break;}
  case 135:{x-=h/2; y-=h/2;break;}
  case 180:{x-=h  ;        break;}
  case 225:{x-=h/2; y+=h/2;break;}
  case 270:{	     y+=h ;break;}
  case 315:{x+=h/2; y+=h/2;break;}
 }//end of switch
}//end of setting X & Y

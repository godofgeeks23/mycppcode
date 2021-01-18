#include<conio.h>
#include<stdio.h>
#include<dos.h>
#include<iostream.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<graphics.h>
#include<ctype.h>

#define MX getmaxx()/2
#define MY getmaxy()/2

	void checkcmd(int no);
	int X,Y,B;

	class MS
		{
			private:
				union REGS i,o;
			public:
				int m();
				void showmp();
				void hidemp();
				void restrimp(int x1,int y1,int x2,int y2);
				void getmp(int *b,int *x,int *y);
		};



	int MS::m()
	{
		i.x.ax=0;
		i.x.bx=0;
		int86(0x33,&i,&o);
		return (o.x.ax);
	}

	void MS::showmp()
	{
		i.x.ax=1;
		int86(0x33,&i,&o);
	}

	void MS::hidemp()
	{
		i.x.ax=2;
		int86(0x33,&i,&o);
	}

	void MS::restrimp(int x1,int y1,int x2,int y2)
	{
		i.x.ax=7;
		i.x.cx=x1;
		i.x.dx=x2;
		int86(0x33,&i,&o);
		i.x.ax=8;
		i.x.cx=y1;
		i.x.dx=y2;
		int86(0x33,&i,&o);
	}

	void MS::getmp(int *b,int *x,int *y)
	{
		i.x.ax=3;
		int86(0x33,&i,&o);
		*b=o.x.bx;
		*x=o.x.cx;
		*y=o.x.dx;
	}
	MS m;

	void lbl(int x1,int y1,int x2,int y2,int ln,int cl,int p)
	{
		int d,fr,bk;
		d=3;
		setcolor(0);
		rectangle(x1-1,y1-1,x2+1,y2+1);
		setcolor(ln);
		rectangle(x1,y1,x2,y2);
		rectangle(x1+d,y1+d,x2-d,y2-d);
		line(x2,y1,x2-d,y1+d);
		line(x1,y2,x1+d,y2-d);
		fr=0;
		setfillstyle(1,fr);
		floodfill((x1+x2)/2,(y1+y1+d)/2,ln);
		bk=15;
		setfillstyle(1,bk);
		floodfill((x2+x2-d)/2,(y1+y2)/2,ln);
		setfillstyle(p,cl);
		bar(x1+d+1,y1+d+1,x2-d-1,y2-d-1);
		setcolor(7);
		rectangle(x1-1,y1-1,x2+1,y2+1);
	}

	void form(int x1,int y1,int x2,int y2,int ln,int cl,int pln,char *str)
	{
		int d,fr,bk,cl0;
		d=3;
		cl0=pln;
		setcolor(0);
		rectangle(x1-1,y1-1,x2+1,y2+1);
		setcolor(ln);
		rectangle(x1,y1,x2,y2);
		rectangle(x1+d,y1+d,x2-d,y2-d);
		line(x2,y1,x2-d,y1+d);
		line(x1,y2,x1+d,y2-d);
		fr=15;
		setfillstyle(1,fr);
		floodfill((x1+x2)/2,(y1+y1+d)/2,ln);
		bk=0;
		setfillstyle(1,bk);
		floodfill((x2+x2-d)/2,(y1+y2)/2,ln);
		setfillstyle(1,cl0);
		bar(x1+d+1,y1+d+1,x2-d-1,y2-d-1);
		int d1=23;
		setfillstyle(1,cl);
		bar(x1+d+1,y1+d+1,x2-d-1,y1+d1);
		setcolor(ln);
		rectangle(x1+d+1,y1+d+1,x2-d-1,y1+d1);
		setcolor(14);
		settextjustify(0,0);
		settextstyle(0,0,0);
		outtextxy(x1+13,y1+19,str);
	}

	void textbtn(int x1,int y1,int x2,int y2,int ln,int c1,int p)
	{
		int d,fr,bk;
		d=2;
		setcolor(c1);
		rectangle(x1-1,y1-1,x2+1,y2+1);
		setfillstyle(1,15);
		bar(x1,y1,x2,y2);
		setcolor(ln);
		rectangle(x1,y1,x2,y2);
		rectangle(x1+d,y1+d,x2-d,y2-d);
		line(x2,y1,x2-d,y1+d);
		line(x1,y2,x1+d,y2-d);
		fr=0;
		setfillstyle(1,fr);
		floodfill((x1+x2)/2,(y1+y1+d)/2,ln);
		bk=15;
		setfillstyle(1,bk);
		floodfill((x2+x2-d)/2,(y1+y2)/2,ln);
		setfillstyle(p,c1);
		bar(x1+d+1,y1+d+1,x2-d-1,y2-d-1);
		setcolor(7);
		rectangle(x1-1,y1-1,x2+1,y2+1);
	}
	void cmdbtn(int x1,int y1,int x2,int y2,int ln,int cl)
	{
		int d,fr,bk;
		d=2;       fr=15;     bk=0;
		setcolor(ln);
		rectangle(x1,y1,x2,y2);
		rectangle(x1+d,y1+d,x2-d,y2-d);
		line(x2,y1,x2-d,y1+d);
		line(x1,y2,x1+d,y2-d);
		setfillstyle(1,fr);
		floodfill((x1+x2)/2,(y1+y1+d)/2,ln);
		setfillstyle(1,bk);
		floodfill((x2+x2-d)/2,(y1+y2)/2,ln);
		setfillstyle(1,cl);
		bar(x1+d+1,y1+d+1,x2-d-1,y2-d-1);
	}


	class CMD
	{
		private:
			char *Str;
			int ln,stl,d,x1,fl,fl1,y1,x2,y2,cl,fr,bk,flag,val,d1,fcl,ft,fz;
		public:
			void cmdbtn(int d2,int fcl,int ft,int fz,int X1,int Y1,int X2,int Y2,int brd,int pln,int Stl,char *str);
			int cmdclk(int V1);
	};
	void CMD::cmdbtn(int d2,int Fcl,int Ft,int Fz,int X1,int Y1,int X2,int Y2,int brd,int pln,int Stl,char *str)
	{
		Str=str;   fcl=Fcl;   ft=Ft;    fz=Fz;
		x1=X1;     y1=Y1;     x2=X2;    y2=Y2;
		ln=brd;    cl=pln;    stl=Stl;
		d=d2;       fr=15;     bk=0;
		setcolor(ln);
		rectangle(x1,y1,x2,y2);
		rectangle(x1+d,y1+d,x2-d,y2-d);
		line(x2,y1,x2-d,y1+d);
		line(x1,y2,x1+d,y2-d);
		setfillstyle(1,fr);
		floodfill((x1+x2)/2,(y1+y1+d)/2,ln);
		setfillstyle(1,bk);
		floodfill((x2+x2-d)/2,(y1+y2)/2,ln);
		setfillstyle(stl,cl);
		bar(x1+d+1,y1+d+1,x2-d-1,y2-d-1);
		setcolor(ln);
	       //	rectangle(x1-1,y1-1,x2+1,y2+1);
		d1=5;
		setcolor(fcl);
		settextjustify(1,1);
		settextstyle(ft,0,fz);
		outtextxy((x1+x2)/2,(y1+y2)/2,Str);
	}
	int CMD::cmdclk(int V1)
	{
		val=-1;
		flag=0;
		fl=0;
		fl1=0;
		while(B!=1 && (x1<X&&y1<Y&&x2>X&&y2>Y))
		{
			m.getmp(&B,&X,&Y);
			if(B==1)
			{
				flag=2;
			}
		}
		if(B==1 && (x1<X&&y1<Y&&x2>X&&y2>Y) && flag==2)
		{
			fr=0;
			bk=15;
			//sound(2500);
			delay(10);
			m.hidemp();
			setfillstyle(1,fr);
			floodfill((x1+x2)/2,(y1+y1+d)/2,ln);
			setfillstyle(1,bk);
			floodfill((x2+x2-d)/2,(y1+y2)/2,ln);
			setcolor(cl);
			settextstyle(ft,0,fz);
			settextjustify(1,1);
			outtextxy((x1+x2)/2,(y1+y2)/2,Str);
			setcolor(fcl);
			settextstyle(ft,0,fz);
			settextjustify(1,1);
			outtextxy((x1+x2+d1)/2,(y1+y2+d1)/2,Str);
			m.showmp();
			nosound();
			flag=1;
			fl1=1;
		}
		while(B==1 && flag==1 )
		{
			m.getmp(&B,&X,&Y);
			if(B!=1)
			{
			    flag=0;
			    if(fl1==2)
			    {
				fl=-1;
			    }
			    if(fl1==1)
			    {
				fl=1;
			    }
			}
			if(!(x1<X&&y1<Y&&x2>X&&y2>Y) && fl1==1)
			{
				fr=15;
				bk=0;
				m.hidemp();
				setfillstyle(1,fr);
				floodfill((x1+x2)/2,(y1+y1+d)/2,ln);
				setfillstyle(1,bk);
				floodfill((x2+x2-d)/2,(y1+y2)/2,ln);
				setcolor(cl);
				settextstyle(ft,0,fz);
				settextjustify(1,1);
				outtextxy((x1+x2+d1)/2,(y1+y2+d1)/2,Str);
				setcolor(fcl);
				settextstyle(ft,0,fz);
				settextjustify(1,1);
				outtextxy((x1+x2)/2,(y1+y2)/2,Str);
				m.showmp();
				fl1=2;
			}
			if((x1<X&&y1<Y&&x2>X&&y2>Y) && fl1==2)
			{
				fr=0;
				bk=15;
				m.hidemp();
				setfillstyle(1,fr);
				floodfill((x1+x2)/2,(y1+y1+d)/2,ln);
				setfillstyle(1,bk);
				floodfill((x2+x2-d)/2,(y1+y2)/2,ln);
				setcolor(cl);
				settextstyle(ft,0,fz);
				settextjustify(1,1);
				outtextxy((x1+x2)/2,(y1+y2)/2,Str);
				setcolor(fcl);
				settextjustify(1,1);
				settextstyle(ft,0,fz);
				outtextxy((x1+x2+d1)/2,(y1+y2+d1)/2,Str);
				m.showmp();
				fl1=1;
			}

		}
		if(fl==1)
		{
			fr=15;
			bk=0;
			m.hidemp();
			setfillstyle(1,fr);
			floodfill((x1+x2)/2,(y1+y1+d)/2,ln);
			setfillstyle(1,bk);
			floodfill((x2+x2-d)/2,(y1+y2)/2,ln);
			setcolor(cl);
			settextstyle(ft,0,fz);
			settextjustify(1,1);
			outtextxy((x1+x2+d1)/2,(y1+y2+d1)/2,Str);
			setcolor(fcl);
			settextstyle(ft,0,fz);
			settextjustify(1,1);
			outtextxy((x1+x2)/2,(y1+y2)/2,Str);
			m.showmp();
			val=V1;
		}

		return(val);
	}
	double dig,dig1,digp,digi;
	int flg,ci,cp;
	char str[11];
	void disp(int n)
	{
		//lbl(cx+15,cy+20,2*MX-cx-85,cy+55,4,0,1);
		setcolor(0);
		setfillstyle(1,0);
		bar(170,125,2*MX-150-90,150);
		if(!n)
		{
		gcvt(dig, 9, str);
		//sprintf(str,"%.0lf",dig);
		}
		else if(n==1)
		{
		//gcvt(dig, 9, str);
		sprintf(str,"%.*lf",cp,dig);
		}
		else if(n==2)
		{
		strcpy(str,"DIVIDE ERROR!");
		}
		setcolor(10);
		settextjustify(0,1);
		settextstyle(0,0,2);
		outtextxy(174,140,str);
	}
	int opt,pt;
	void checkcmd(int no)
	{

		if(no>-1 && no<10 && (ci+cp)<10)
		{
			if(pt==0)
			{
			digi=digi*10.0+(double)(no);
			dig=digi+digp;
			disp(0);
			ci++;
			}
			else{
			digp+=(double)(no)*pow10(-cp);
			dig=digi+digp;
			disp(1);
			cp++;
			}
		}
		else if(no>11 && no<16)
		{
			opt=no;         digi=0.0;
			dig1=dig;       digp=0.0;
			dig=0.0	;	ci=0;	cp=1;
			pt=0;
		}
		else if(no<12 && no>9)
		{
			switch(no)
			{
				case 11:{      if(opt)
						{
						switch(opt){
					case 12:{
						if(dig)
						{
						dig=dig1/dig;	break;
						}
						}
					case 13:{
						dig=dig1*dig;	break;
						}
					case 14:{
						dig=dig1-dig;   break;
						}
					case 15:{
						dig=dig1+dig;   break;
						}
						}
						if(!dig)
						{
							disp(2);
						}else
						{
						disp(0);	}
						opt=0;	dig=0.0;  cp=1;
						ci=0;   pt=0;	digp=0.0;
						digi=0.0;  opt=0;
						}
						break; }
				case 10:{
						closegraph();
						exit(1);
					}
			}
		}
		else if(no>15 && no<18)
		{
			switch(no){
				case 16:{
					dig=0.0;	ci=0;	dig1=0.0;
					opt=0;		pt=0;	digp=0.0;
					digi=0.0;    	cp=1;	disp(0);
					break;
					}
				case 17:{
					pt=1;
					break;
					}
				}
		}
	}

	void main()
	{
		int gd=DETECT,gm;
		initgraph(&gd,&gm,"c:/turboc3/bgi");
		CMD n[10],op[5],bt[4];
		int opn[5]={11,12,13,14,15};
		int btn[4]={10,16,17,10};
		int i,j,k,cx,cy;
		flg=1;	digp=0.0;	pt=0;
		ci=0;	opt=0;          digi=0.0;     cp=1;
		cx=150;	cy=100;         dig=0.0;
		m.m();
		form(cx,cy-20,2*MX-cx-70,2*MY-cy,7,1,7," Calc 1.0 ");
		lbl(cx+15,cy+20,2*MX-cx-85,cy+55,4,0,1);
		bt[0].cmdbtn(2,14,2,3,2*MX-cx-95,cy-15,2*MX-cx-74,cy+2,8,4,1,"X");

		n[7].cmdbtn(3,4,0,0,cx+15,cy+70,cx+50,cy+110,2,14,1,"7");
		n[8].cmdbtn(3,4,0,0,cx+60,cy+70,cx+95,cy+110,2,14,1,"8");
		n[9].cmdbtn(3,4,0,0,cx+105,cy+70,cx+140,cy+110,2,14,1,"9");
		op[1].cmdbtn(3,4,0,0,cx+150,cy+70,cx+185,cy+110,2,14,1,"/");
		bt[1].cmdbtn(3,4,0,0,cx+195,cy+70,cx+250,cy+160,2,14,1,"CE");

		n[4].cmdbtn(3,4,0,0,cx+15,cy+120,cx+50,cy+160,2,14,1,"4");
		n[5].cmdbtn(3,4,0,0,cx+60,cy+120,cx+95,cy+160,2,14,1,"5");
		n[6].cmdbtn(3,4,0,0,cx+105,cy+120,cx+140,cy+160,2,14,1,"6");
		op[2].cmdbtn(3,4,0,0,cx+150,cy+120,cx+185,cy+160,2,14,1,"*");

		n[1].cmdbtn(3,4,0,0,cx+15,cy+170,cx+50,cy+210,2,14,1,"1");
		n[2].cmdbtn(3,4,0,0,cx+60,cy+170,cx+95,cy+210,2,14,1,"2");
		n[3].cmdbtn(3,4,0,0,cx+105,cy+170,cx+140,cy+210,2,14,1,"3");
		op[3].cmdbtn(3,4,0,0,cx+150,cy+170,cx+185,cy+210,2,14,1,"-");
		bt[3].cmdbtn(3,4,0,0,cx+195,cy+170,cx+250,cy+260,2,14,1,"CLOSE");

		n[0].cmdbtn(3,4,0,0,cx+15,cy+220,cx+50,cy+260,2,14,1,"0");
		bt[2].cmdbtn(3,4,0,0,cx+60,cy+220,cx+95,cy+260,2,14,1,".");
		op[0].cmdbtn(3,4,0,0,cx+105,cy+220,cx+140,cy+260,2,14,1,"=");
		op[4].cmdbtn(3,4,0,0,cx+150,cy+220,cx+185,cy+260,2,14,1,"+");
		disp(0);
		m.showmp();
		while(1)
		{
			m.getmp(&B,&X,&Y);
			for(i=0;i<4;i++)
			{	checkcmd(bt[i].cmdclk(btn[i]));	}
			for(i=0;i<10;i++)
			{	checkcmd(n[i].cmdclk(i));	}
			for(i=0;i<5;i++)
			{	checkcmd(op[i].cmdclk(opn[i]));	}
		}
	}

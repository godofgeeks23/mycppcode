#include<fstream.h> 				//for file handling
#include<stdio.h>				//for string input/output, and remove() for deleting files
#include<conio.h>				//for getch() and clrscr()
#include<process.h>				//for exit() function
#include<time.h>				//for date and time
#include<string.h>
class emp					//class of employee
{
	int eid;				//employee number
	char ename[15];				//employee name
	public:
	void enter()                            //enter the details of employee
	{
		cout<<endl<<"Enter ID:";
		cin>>eid;
		cout<<"Enter name:";
		gets(ename);
	}
	void show()				//show the complete details of a employee
	{
		cout<<"ID:"<<eid<<"\t\tName:";
		puts(ename);
	}
	int getId()				//returns the ID of employee
	{
		return eid;
	}
	char* getName()				//returns the name of the employee
	{
		return ename;
	}
}e;						//object 'e' of emp class created
class log					//class of a log
{
	char stat[150];
	char date[9];
	char time[9];
	public:
		void setStat(char* temp)	//assign values into the log object l
		{
			strcpy(stat,temp);
			_strdate(date);
			_strtime(time);
		}
		void show()			//display log details
		{
			cout<<endl<<date<<"  "<<time<<"  "<<stat;
		}
}l;
void updateLog(char* stat)			//adds a new log record to the log file
{
	fstream lfile;
	lfile.open("logs.dat",ios::binary|ios::app);
	l.setStat(stat);
	lfile.write((char*)&l,sizeof(l));
	lfile.close();
}
void showLog()					//show the complete log file to the user
{
	fstream lfile;
	lfile.open("logs.dat",ios::binary|ios::in);
	while(lfile.read((char*)&l,sizeof(l)))
	{
		l.show();
	}
	lfile.close();
}
void clrLogs()					//clear the log file
{
	fstream lfile;
	lfile.open("logs.dat",ios::binary|ios::out);
	lfile.close();
}
void startNew()					//start database afresh
{
	fstream file;
	file.open("emp.dat",ios::binary|ios::out);
	char cont;
	while(cont!='n')
	{
		e.enter();
		file.write((char*)&e,sizeof(e));
		cout<<"\nWant to feed more...? (y/n)";
		cin>>cont;
	}
	file.close();
}
void showAll()					//show all the details of a employee
{
	fstream rfile;
	rfile.open("emp.dat",ios::binary|ios::in);
	while(rfile.read((char*)&e,sizeof(e)))
	{
		e.show();
	}
	rfile.close();
}
void append()					//add a record to the database
{
	fstream rfile;
	rfile.open("emp.dat",ios::binary|ios::app);
	char cont;
	while(cont!='n')
	{
		e.enter();
		rfile.write((char*)&e,sizeof(e));
		textcolor(GREEN+BLINK);
		cputs("\nRecord added successfully!");
		textcolor(7);
		updateLog("A record added to the database.");
		cout<<endl<<"Want to enter more ??? (y/n):";
		cin>>cont;
	}
	rfile.close();

}
void delAll()					//delete all the records from the database
{
	fstream rfile;
	rfile.open("emp.dat",ios::binary|ios::out);
	rfile.close();
	textcolor(GREEN+BLINK);
	cputs("\nRecords deleted successfully!");
	textcolor(7);
	updateLog("All records deleted from the database.");
}
void count()					//count the number of records in the database
{
	fstream rfile;
	rfile.open("emp.dat",ios::binary|ios::in);
	int count=0;
	while(rfile.read((char*)&e,sizeof(e)))
	{
		count++;
	}
	cout<<endl<<count<<" records exist in the file emp.dat";
	rfile.close();
}
void delRec()					//delete a specific record from the database
{
	fstream src;
	src.open("emp.dat",ios::binary|ios::in);
	fstream dest;
	dest.open("tempo.dat",ios::binary|ios::out);
	char cont;

		cout<<endl<<"Enter ID of person you want to delete:";
		int eno=0;
		cin>>eno;
		int found=0;
		while(src.read((char*)&e,sizeof(e)))
		{
			if(e.getId()!=eno)
			{
				dest.write((char*)&e,sizeof(e));
			}
			else
			{
				found=1;
			}
		}
		src.close();
		dest.close();
		remove("emp.dat");
		rename("tempo.dat","emp.dat");
		if(found==0)
		{
			textcolor(RED + BLINK);
			cputs("\nRequested record not found!");
			textcolor(7);
		}
		else
		{
			textcolor(GREEN+BLINK);
			cputs("\nRecord deleted successfully!");
			textcolor(7);
			updateLog("A record deleted from the database.");
		}

}
void edit()					//to modify a record
{
	cout<<"The following records exist..."<<endl;	//displa all exixsting records
	showAll();
	int eno,rec=0,pos=0,found=0;
	cout<<"Which ENo. you want to edit?";
	cin>>eno;
	fstream rfile;					//open the existing databse
	rfile.open("emp.dat",ios::binary|ios::in);
	while(rfile.read((char*)&e,sizeof(e)))
	{
		if(e.getId()!=eno)
		{
			rec++;
		}
		else
		{
			found=1;
			break;
		}
	}
	rfile.close();
	pos = rec*sizeof(e);				//record the position of the record
	if(found==1)					//found the record to be edited
	{
		fstream nfile;
		nfile.open("emp.dat",ios::binary|ios::in|ios::out|ios::ate);
		cout<<"Enter the new (modified) record:";
		e.enter();                              //request the new record from user
		nfile.seekp(pos);			//put the ptr at the pos noted before
		nfile.write((char*)&e,sizeof(e));	//write at that place
		nfile.close();
		textcolor(GREEN+BLINK);
		cputs("\nRecords modified successfully!");
		textcolor(7);
		updateLog("A record modified in the database.");
	}
	else
	{
		textcolor(RED+BLINK);
		cputs("\nRecord not found...");
		textcolor(7);
	}
}
void main()
{
	start:
	clrscr();
	cout<<"\n\t\t\tWelcome to the Employee Database Manger v1.0";
	cout<<"\n\nWhat do you want to do?";
	cout<<"\n1.\tDelete all records and start a fresh database.";
	cout<<"\n2.\tDisplay all records.";
	cout<<"\n3.\tAdd a new records.";
	cout<<"\n4.\tDelete all records.";
	cout<<"\n5.\tDelete  a specific record.";
	cout<<"\n6.\tCount total number of records.";
	cout<<"\n7.\tTo view log file";
	cout<<"\n8.\tTo clear logs.";
	cout<<"\n9.\tTo modify a record.";
	cout<<"\n\nEnter 0 to exit...";
	cout<<endl<<"Enter your choice:";
	int choice=0;
	cin>>choice;
	switch(choice)
	{
		case 1: textcolor(RED+BLINK);
			cputs("\nARE YOU SURE ??? (y/n)");
			textcolor(7);
			char sure;
			cin>>sure;
			if(sure=='y')
			{
				startNew();
			}
			break;
		case 2: showAll();	break;
		case 3: append();	break;
		case 4: textcolor(RED+BLINK);
			cputs("\nARE YOU SURE ??? (y/n)");
			textcolor(7);
			cin>>sure;
			if(sure=='y')
			{
				delAll();
			}
			break;
		case 5: textcolor(RED+BLINK);
			cputs("\nARE YOU SURE ??? (y/n)");
			textcolor(7);
			cin>>sure;
			if(sure=='y')
			{
				delRec();
			}
			break;
		case 6: count();	break;
		case 7: showLog();	break;
		case 8: clrLogs();	break;
		case 9: edit();		break;
		case 0: exit(0);	break;
		default: textcolor(RED + BLINK);
			 cputs("\nInvalid Argument...");
			 textcolor(7);
			 getch();
	}
	getch();
	goto start;				//to return to the main menu
}

/*
BLACK        ³  0  ³ Yes ³ Yes
BLUE         ³  1  ³ Yes ³ Yes
GREEN        ³  2  ³ Yes ³ Yes
CYAN         ³  3  ³ Yes ³ Yes
RED          ³  4  ³ Yes ³ Yes
MAGENTA      ³  5  ³ Yes ³ Yes
BROWN        ³  6  ³ Yes ³ Yes
LIGHTGRAY    ³  7  ³ Yes ³ Yes
DARKGRAY     ³  8  ³ No  ³ Yes
LIGHTBLUE    ³  9  ³ No  ³ Yes
LIGHTGREEN   ³ 10  ³ No  ³ Yes
LIGHTCYAN    ³ 11  ³ No  ³ Yes
LIGHTRED     ³ 12  ³ No  ³ Yes
LIGHTMAGENTA ³ 13  ³ No  ³ Yes
YELLOW       ³ 14  ³ No  ³ Yes
WHITE        ³ 15  ³ No  ³ Yes
*/
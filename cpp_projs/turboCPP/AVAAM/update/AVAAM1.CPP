// handles the question database for project...

#include<iostream.h>
#include<stdio.h>
#include<string.h>
#include<process.h>
#include<stdlib.h>
#include "avaam2.cpp"
class question	//the class for a question
{
	int qid;	//id of question...unique for each question
	char text[80];	//the actual text of the question
	char options[4][50];	//the four options
	int answer;	//answer...can be 0 or 1 or 2 or 3 corresponding to the index of the correct option in the options array
	int difficulty;		//0 easy, 1 moderate, 2 difficult
	public:
	void enter()	//to let user enter the complete details of the question
	{
		qid = generateNewQId();	//automatically generate a new id for the question...(this function is in avaam4.cpp). this is included, so that there is no case for user entering a id of his choice...that may already be used for a question
		cout<<endl<<"Enter your question: ";
		gets(text);
		cout<<endl<<"Enter the options of the questions:";
		for(int i=0;i<=3;i++)
		{
			cout<<endl<<i+1<<". ";
			gets(options[i]);
		}
		cout<<endl<<"Insert the correct answer(1/2/3/4): ";
		cin>>answer;
		answer--;	// answer-- is done, as according to user they are 1,2,3,4...but it actually represents the array index of the correct option which starts from 0...i.e. 0,1,2,3
		cout<<endl<<"State the difficulty level of the question(1/2/3): ";
		cin>>difficulty;
		difficulty--;	// difficilty-- is done as done in answer--
		cout<<endl<<"Question acquired successfully...";
	}
	void show()	//to show the complete details of the question
	{
		cout<<endl<<"Question ID:";
		cout<<qid<<":";
		puts(text);
		for(int i=0;i<=3;i++)
		{
			cout<<i+1<<". ";
			puts(options[i]);
		}
		cout<<"Answer: "<<answer+1<<", Difficulty: "<<difficulty+1;
	}
	void showText()	//just display the text of the question in front of the user...
	{
		cout<<endl<<text;
	}
	void showOptions()	//just dispplay the options in front of the user
	{
		for(int i=0;i<=3;i++)
		{
			cout<<endl<<i+1<<". "<<options[i];
		}
	}
	int getDifficulty() //returns the difficulty of the question when called
	{
		return difficulty;
	}
	int getAnswer() // returns the answer (index of the correct option)
	{
		return answer;
	}
	void disableOption(int t)	//used in 50-50...disables the option at index t by replacing their text by "---"...
	{
		strcpy(options[t],"---");
	}
	void optionsWithVotes()	//used in audience poll...allots random percentage to the options, taking care that the correct option gets the highest % and the the disabled ones get 0%
	{
		int votes[4],sum=0;	//votes[] corresponding to options[]
		randomize();
		for(int i=0;i<4;i++)	//do for every option
		{
			if((i!=answer) && (strcmp(options[i],"---")!=0))	//check if the current option is neither disabled nor the answer
			{
				votes[i] = 1+random(24);	//allot random no to it from 1 to 24
				sum = sum+votes[i];
			}
			else if(strcmp(options[i],"---")==0)	//current option is a disabled one...so allot it 0%
			{
				votes[i] = 0;
			}
		}
		votes[answer] = 100-sum;	//allots all the remaining % to correct option
		//now display the votes...
		//cout<<endl<<"According to the audience, the votes are as follows:";
		//cout<<endl<<"Option 1: "<<votes[0];
		//cout<<endl<<"Option 2: "<<votes[1];
		//cout<<endl<<"Option 3: "<<votes[2];
		//cout<<endl<<"Option 4: "<<votes[3];
		for(int l=0;l<=3;l++)
		{
			cout<<endl<<l+1<<". "<<options[l]<<"\t\t\t\t\t"<<votes[l]<<"%";
		}
	}
	int getId()	//returns the id of the question
	{
		return qid;
	}
}ques;
class password
{
	char pswd[15];	//the text in the password
	public:
	password()	//constructor...makes the default password as "avaam"
	{
		strcpy(pswd,"avaam");
	}
	char* getPassword()	//returns the password when called
	{
		return pswd;
	}
}pass;
void addToBase(question ques)	//function to add a question in the database...it automatically determines the file in which it has to append the question by checking the level of the question
{
	if(ques.getDifficulty()==0)		//easy question
	{
		fstream file;
		file.open("easyqbase.dat",ios::binary|ios::app);
		file.write((char*)&ques,sizeof(ques));
		file.close();
	}
	else if(ques.getDifficulty()==1)		//moderate question
	{
		fstream file;
		file.open("modqbase.dat",ios::binary|ios::app);
		file.write((char*)&ques,sizeof(ques));
		file.close();
	}
	else				//difficult question
	{
		fstream file;
		file.open("diffqbase.dat",ios::binary|ios::app);
		file.write((char*)&ques,sizeof(ques));
		file.close();
	}
}
void showAllBase()	//shows all the questions from every database...
{
	fstream afile,bfile,cfile;
	afile.open("easyqbase.dat",ios::binary|ios::in);
	while(afile.read((char*)&ques,sizeof(ques)))
	{
		ques.show();
	}
	afile.close();
	bfile.open("modqbase.dat",ios::binary|ios::in);
	while(bfile.read((char*)&ques,sizeof(ques)))
	{
		ques.show();
	}
	bfile.close();
	cfile.open("diffqbase.dat",ios::binary|ios::in);
	while(cfile.read((char*)&ques,sizeof(ques)))
	{
		ques.show();
	}
	cfile.close();
}
int getEasyQCount()	//returns the number of question in the easyqbase.dat file by counting the no of records in it
{
	fstream afile;
	int counter=0;
	afile.open("easyqbase.dat",ios::binary|ios::in);
	while(afile.read((char*)&ques,sizeof(ques)))
	{
		counter++;
	}
	afile.close();
	return counter;
}
int getModQCount()	//does the above for modqbase.dat
{
	fstream bfile;
	int counter=0;
	bfile.open("modqbase.dat",ios::binary|ios::in);
	while(bfile.read((char*)&ques,sizeof(ques)))
	{
		counter++;
	}
	bfile.close();
	return counter;
}
int getDiffQCount()	//does the same for diffqbase.dat
{
	fstream cfile;
	int counter=0;
	cfile.open("diffqbase.dat",ios::binary|ios::in);
	while(cfile.read((char*)&ques,sizeof(ques)))
	{
		counter++;
	}
	cfile.close();
	return counter;
}
char* enterPassword()	//demands the password from the user while displaying it in a encrypted way
{
	char string[15];
	int place = 0;
	cout<<endl<<"Enter your password: ";
	int length=0;
	char kb;
	for(int i=0;i<15;i++) { string[i] = '\0'; }
	do
	{
		if(kbhit())
		{
			char kb = getch();
			cout<<"*";
			string[place] = kb;
			place++;
			length++;
		}
	}while(length!=5);
	return string;
}
int checkPassword(char* t)	//returns 1 if password is correct, and 0 otherwise...
{
	if(strcmp(t, pass.getPassword())==0)	//password matched...
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void clrHighscore()	//clear the highscor.dat file
{
	fstream afile;
	afile.open("highscor.dat",ios::binary|ios::out);
	afile.close();
}
void delQuestion()	//delete a question from its database...
{
	fstream dest;
	dest.open("tempo.dat",ios::binary|ios::out);
	char cont;
	cout<<endl<<"Enter ID of question you want to delete:";
	int tid;
	cin>>tid;
	int found=0;
	fstream srcA;
	srcA.open("easyqbase.dat", ios::binary|ios::in);
	while(srcA.read((char*)&ques,sizeof(ques)))
	{
		if(ques.getId()!=tid)
		{
			dest.write((char*)&ques,sizeof(ques));
		}
		else
		{
			found=1;
		}
	}
	srcA.close();
	dest.close();
	remove("easyqbase.dat");
	rename("tempo.dat","easyqbase.dat");

	fstream srcB;
	srcB.open("modqbase.dat", ios::binary|ios::in);
	while(srcB.read((char*)&ques,sizeof(ques)))
	{
		if(ques.getId()!=tid)
		{
			dest.write((char*)&ques,sizeof(ques));
		}
		else
		{
			found=1;
		}
	}
	srcB.close();
	dest.close();
	remove("modqbase.dat");
	rename("tempo.dat","modqbase.dat");

	fstream srcC;
	srcC.open("diffqbase.dat", ios::binary|ios::in);
	while(srcC.read((char*)&ques,sizeof(ques)))
	{
		if(ques.getId()!=tid)
		{
			dest.write((char*)&ques,sizeof(ques));
		}
		else
		{
			found=1;
		}
	}
	srcC.close();
	dest.close();
	remove("diffqbase.dat");
	rename("tempo.dat","diffqbase.dat");

	if(found==1)
	{
		cout<<endl<<"Requested record deleted successfully...";
	}
	else
	{
		cout<<endl<<"Requested record not found...";
	}
}
void modQuestion()
{
	int tid,rec=0,pos=0,found=0;
	cout<<"Enter ID of question you want to edit?";
	cin>>tid;

	fstream rfile;					//open the existing databse
	rfile.open("easyqbase.dat",ios::binary|ios::in);
	while(rfile.read((char*)&ques,sizeof(ques)))
	{
		if(ques.getId()!=tid)
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
	pos = rec*sizeof(ques);				//record the position of the record
	if(found==1)					//found the record to be edited
	{
		fstream nfile;
		nfile.open("easyqbase.dat",ios::binary|ios::in|ios::out|ios::ate);
		cout<<"Enter the new (modified) record:";
		ques.enter();                              //request the new record from user
		nfile.seekp(pos);			//put the ptr at the pos noted before
		nfile.write((char*)&ques,sizeof(ques));	//write at that place
		nfile.close();
		cout<<endl<<"Record modified successfully!";
	}
	else // record not found in easyqbase
	{
		fstream sfile;					//open the existing databse
		sfile.open("modqbase.dat",ios::binary|ios::in);
		while(sfile.read((char*)&ques,sizeof(ques)))
		{
			if(ques.getId()!=tid)
			{
				rec++;
			}
			else
			{
				found=1;
				break;
			}
		}
		sfile.close();
		pos = rec*sizeof(ques);				//record the position of the record
		if(found==1)					//found the record to be edited
		{
			fstream ofile;
			ofile.open("modqbase.dat",ios::binary|ios::in|ios::out|ios::ate);
			cout<<"Enter the new (modified) record:";
			ques.enter();                              //request the new record from user
			ofile.seekp(pos);			//put the ptr at the pos noted before
			ofile.write((char*)&ques,sizeof(ques));	//write at that place
			ofile.close();
			cout<<endl<<"Record modified successfully!";
		}
		else // record not found in diffqbase also
		{
			fstream tfile;					//open the existing databse
			tfile.open("diffqbase.dat",ios::binary|ios::in);
			while(tfile.read((char*)&ques,sizeof(ques)))
			{
				if(ques.getId()!=tid)
				{
					rec++;
				}
				else
				{
					found=1;
					break;
				}
			}
			tfile.close();
			pos = rec*sizeof(ques);				//record the position of the record
			if(found==1)					//found the record to be edited
			{
				fstream pfile;
				pfile.open("diffqbase.dat",ios::binary|ios::in|ios::out|ios::ate);
				cout<<"Enter the new (modified) record:";
				ques.enter();                              //request the new record from user
				pfile.seekp(pos);			//put the ptr at the pos noted before
				pfile.write((char*)&ques,sizeof(ques));	//write at that place
				pfile.close();
				cout<<endl<<"Record modified successfully!";
			}
			else
			{
				cout<<endl<<"The requested record does not exists...";
			}
		}
	}
}
void showQbaseMenu()
{
	int choice;
	while(choice!=6)
	{
		clrscr();
		cout<<endl<<endl<<"                     Welcome to the QBaseEditor for KBC v1.0";
		cout<<endl<<endl<<"What do you want to do...???";
		cout<<endl<<"1. Enter questions in the database...";
		cout<<endl<<"2. Delete questions from the database...";
		cout<<endl<<"3. Modify question from the database...";
		cout<<endl<<"4. Show complete database...";
		cout<<endl<<"5. Clear Highscores...";
		cout<<endl<<"6. Quit QBaseEditor...";
		cout<<endl<<endl<<"Enter your choice...";
		cin>>choice;
		switch(choice)
		{
			case 1: cout<<endl<<"Enter 0 to stop adding questions...";
				int temp=1;
				while(temp!=0)
				{
					ques.enter();
					addToBase(ques);
					cout<<endl<<"Add more??? (0/1): ";
					cin>>temp;
				}
				break;
			case 2: delQuestion();
				break;
			case 3: modQuestion();
				break;
			case 4: showAllBase();
				getch();
				break;
			case 5: clrHighscore();
				cout<<"Highscores cleared...";
				getch();
				break;
		}
	}
}
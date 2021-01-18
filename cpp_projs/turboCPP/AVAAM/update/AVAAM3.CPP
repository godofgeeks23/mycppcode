// handles the main program flow of game

#include "avaam1.cpp"
#include "avaam4.cpp"
int no_of_levels = 6;
int startingPrize = 1000;
int askedQuestions[9],askedPtr=-1;
void displayStats();
int checkAns();
void startGame();
void showResults();
class player;
class player
{
	char name[30];
	int level;		//starting from 1...shows the level on which user is currently playing
	int prize;
	int lifelines[2];        //=1 for used...[0]: 50-50, [1]: audience poll
	public:
	void enterDetails()	//enter user details and initializes all values
	{
		level = 1;
		prize = 0;
		cout<<endl<<"Enter your name: ";
		gets(name);
	}
	char* getName()		//returns user name
	{
		return name;
	}
	int getLevel()		//returns the current level of user
	{
		return level;
	}
	void levelUp()		//increases the level of user by one step and accordingly updates the prize money also
	{
		level++;
		if(prize==0)
		{
			prize = startingPrize;	//staring prize money
		}
		else
		{
			prize*=2;	//double the prize on each correct answer
		}
	}
	void levelZero()	//makes the level and prize of user as 0, i.e. user loses
	{
		level=0;
		prize = 0;
	}
	void use5050()		//uses life line 1,i.e. use 50-50 lifeline
	{
		if(lifelines[0]==0)		//50-50 is available to use
		{
			lifelines[0] = 1;
			int count=0,temp=0;
			do
			{
				if(ques.getAnswer()!=temp)//a wrong option is selected
				{
					count++;
					ques.disableOption(temp);
				}
				temp++;
			}while(count<2);
			displayStats();
			cout<<endl<<"Question: ";
			ques.showText();
			ques.showOptions();
			if(checkAns()==1)
			{
				user.levelUp();
				startGame();//continue once again
			}
			else if(checkAns()==0)
			{
				user.levelZero();
				showResults();
			}
		}
		else
		{
			cout<<endl<<"You have exhausted your 50-50 lifeline...";
			getch();
		}
	}
	void useAudiencePoll()		//uses life line 2,i.e. use audience poll
	{
		if(lifelines[1]==0)		//audience poll is available to use
		{
			lifelines[1] = 1;
			displayStats();
			cout<<endl<<"Question: ";
			ques.showText();
			ques.optionsWithVotes();
			if(checkAns()==1)
			{
				levelUp();
				startGame();//continue once again
			}
			else if(checkAns()==0)
			{
				levelZero();
				showResults();
			}
		}
		else
		{
			cout<<endl<<"You have exhausted your audience poll lifeline...";
			getch();
		}
	}
	int allLifeUsed()      //returns 1 if all the lifelines have been exhausted
	{
		if(lifelines[0]==1 && lifelines[1]==1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	int getPrize()		//returns the prize won by the user till the current level
	{
		return prize;
	}
}user;
void displayStats()		//constantly displays the kbc heading, username, current level, prize won and date and time on the user screen
{
	clrscr();
	cout<<endl<<"------------------------------------KBC v1.0------------------------------------";
	cout<<endl<<"Current player: ";
	puts(user.getName());
	cout<<endl<<"Current level: ";
	cout<<user.getLevel()<<" of "<<no_of_levels<<endl;
	cout<<endl<<"Prize Won: ";
	cout<<user.getPrize();
	cout<<endl<<"Enter 1/2/3/4 to answer...or 8/9 to use lifeline...or 0 to quit...";
}
void askQuestion()		//puts a question in front of the user according to his level
{
	cout<<endl<<"Question: ";
	int gen = 0;
	randomize();
	if(user.getLevel()<=(no_of_levels/3))	//ask easy question
	{
		int flag = 1;
		do
		{
			gen = sizeof(ques)*random(getEasyQCount());
			fstream file;
			file.open("easyqbase.dat",ios::binary|ios::in);
			file.seekg(gen);
			file.read((char*)&ques,sizeof(ques));
			file.close();
			for(int i=0;i<=askedPtr;i++)
			{
				if(askedQuestions[i]==ques.getId())
				{
					flag = 0;	//question has been asked before...
					break;
				}
				else
				{
					flag=1;
				}
			}
		}while(flag!=1);
		//now flag = 1...
		askedQuestions[++askedPtr] = ques.getId();
	}
	else if(user.getLevel()>(no_of_levels/3) && user.getLevel()<=((2*no_of_levels)/3))	//ask moderate question
	{
		int flag = 1;
		do
		{
			gen = sizeof(ques)*random(getModQCount());
			fstream file;
			file.open("modqbase.dat",ios::binary|ios::in);
			file.seekg(gen);
			file.read((char*)&ques,sizeof(ques));
			file.close();
			for(int i=0;i<=askedPtr;i++)
			{
				if(askedQuestions[i]==ques.getId())
				{
					flag = 0;	//question has been asked before...
					break;
				}
				else
				{
					flag=1;
				}
			}
		}while(flag!=1);
		//now flag = 1...
		askedQuestions[++askedPtr] = ques.getId();
	}
	else		//ask difficult question
	{
		int flag = 1;
		do
		{
			gen = sizeof(ques)*random(getDiffQCount());
			fstream file;
			file.open("diffqbase.dat",ios::binary|ios::in);
			file.seekg(gen);
			file.read((char*)&ques,sizeof(ques));
			file.close();
			for(int i=0;i<=askedPtr;i++)
			{
				if(askedQuestions[i]==ques.getId())
				{
					flag = 0;	//question has been asked before...
					break;
				}
				else
				{
					flag=1;
				}
			}
		}while(flag!=1);
		//now flag = 1...
		askedQuestions[++askedPtr] = ques.getId();
	}
	//now the question has been loaded in the 'ques' variable...
	ques.showText();
	ques.showOptions();
}
void showResults()
{
	clrscr();
	cout<<endl<<"------------------------------------KBC v1.0------------------------------------";
	cout<<endl<<"Current player: ";
	puts(user.getName());
	if(user.getLevel()==no_of_levels)
	{
		cout<<endl<<"CONGRATS!!! you completed the game...";
	}
	cout<<endl<<"Prize: "<<user.getPrize();
	checkEligible(user.getName(), user.getPrize());	//check if user has got a highscore or not...
	getch();
	exit(0);
}
int checkAns()		//asks for the user input. if user gives a answer, it checks if is correct or not(returns 1 if correct and 0 otherwise). if the user wants to use a lifeline, it calls the function of respective lifeline. if the user wants to quit, it directly calls the showResults() function to user...
{
	int choice=0;
	cout<<endl<<"Enter your choice: ";
	cin>>choice;
	if(choice==1 || choice==2 || choice==3 || choice==4)	//user has given a answer
	{
		--choice;
		if(choice==ques.getAnswer())
		{
			cout<<endl<<"Correct Answer";
			getch();
			return 1;
		}
		else
		{
			cout<<endl<<"Wrong Answer";
			getch();
			return 0;
		}
	}
	else if(choice == 8 || choice == 9)	//user wants to use a lifeline
	{
		if(user.allLifeUsed()==1)
		{
			cout<<endl<<"Your all life lines have been exhausted...";
			getch();
		}
		else		//life lines are remaining
		{
			if(choice==8)
			{
				user.use5050();
			}
			else if(choice==9)
			{
				user.useAudiencePoll();
			}
		}
	}
	else if(choice==0) 			//user wants to quit
	{
		showResults();
	}
	else
	{
		cout<<endl<<"Invalid Input...";
		getch();
	}
}
void startGame()
{
	while(user.getLevel()>0 && user.getLevel()<=no_of_levels)
	{
		displayStats();
		askQuestion();
		if(checkAns()==1)
		{
			user.levelUp();
		}
		else
		{
			user.levelZero();
		}
	}
	showResults();
}
void showHelp()
{
	cout<<endl<<"------------------------------------KBC v1.0------------------------------------";
	cout<<endl<<endl<<"Welcome to the KBC game. This is a game which will give you a chance to prove\nyour intelligence level and win money prizes. It is a healthy and interactive\nquiz which tests your general knowledge.\n\nPlaying instructions: \nA question with its 4 options will be put in front of you. If you know its\nanswer, then input 1/2/3/4 as indicated before the option you think is the\nanswer. If you dont know its answer, you have 2 lifelines available which can be used only once each. To use 50-50, input '8' and to use audience-poll, insert\n'9'. If you want to quit the game, insert '0'.";
}
void welcomeScreen()
{
	clrscr();
	cout<<endl<<"------------------------------------KBC v1.0------------------------------------";
	cout<<endl<<endl<<"What do you want to do?:";
	cout<<endl<<"1.Start new game";
	cout<<endl<<"2.How to Play";
	cout<<endl<<"3.View Highscores";
	cout<<endl<<"4.SuperUser access";
	cout<<endl<<"5.Exit";
	int ch;
	cout<<endl<<endl<<"Enter your choice: ";
	cin>>ch;
	switch(ch)
	{
		case 1: user.enterDetails();
			startGame();
			break;
		case 2: showHelp();
			getch();
			welcomeScreen();
			break;
		case 3: showHighScores();
			getch();
			welcomeScreen();
			break;
		case 4: if(checkPassword(enterPassword())==1)
			{
				showQbaseMenu();
			}
			else
			{
				cout<<endl<<"Wrong password...!";
				getch();
			}
			welcomeScreen();
			break;
		case 5: exit(0);
	}
}
void main()
{
	clrscr();
	for(int i=0;i<no_of_levels;i++)
	{
		askedQuestions[i] = -1;
	}
	welcomeScreen();
	getch();
}
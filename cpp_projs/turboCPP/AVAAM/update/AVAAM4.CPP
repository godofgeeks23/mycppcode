//handles the highscore aspect of the game
#include<fstream.h>
#include<string.h>
class highPlayer
{
	public:
	char name[30];
	int score;
}master;
void checkEligible(char* uname, int uscore)
{
	int eligible = 0;
	fstream afile;
	afile.open("highscor.dat",ios::binary|ios::in);
	while(afile.read((char*)&master,sizeof(master)))
	{
		if(uscore>master.score)
		{
			eligible = 1;
			cout<<endl<<"CONGRATS!!! You got a HighScore!!!";
			break;
		}
	}
	afile.close();
	strcpy(master.name, uname);
	master.score = uscore;
	if(eligible==1)
	{
		fstream file;
		file.open("highscor.dat",ios::binary|ios::app);
		file.write((char*)&master,sizeof(master));
		file.close();
	}
}
void showHighScores()
{
	fstream afile;
	afile.open("highscor.dat",ios::binary|ios::in);
	cout<<endl<<"-----------------------------------HIGHSCORES----------------------------------";
	cout<<endl<<endl<<"\tName\t\t\t\t\t\tPrize won";
	cout<<endl<<"\t----------------------------------------------------------";
	while(afile.read((char*)&master,sizeof(master)))
	{
		cout<<endl<<"\t"<<master.name<<"\t\t\t\t\t\t"<<master.score;
	}
	afile.close();
}
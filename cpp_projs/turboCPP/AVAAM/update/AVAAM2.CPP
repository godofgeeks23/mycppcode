//generates new id for questions and user automatically...

#include<conio.h>
#include<fstream.h>
class id
{
	public:
	int idno;
};
int generateNewQId()
{
	id old,neew;
	fstream file;
	file.open("lastqid.dat",ios::binary|ios::in);	//open file for reading
	file.read((char*)&old,sizeof(old));             //reads the id stored and stores it in old
	neew.idno = old.idno+1;				//creates new id
	file.close();

	fstream xfile;
	xfile.open("lastqid.dat",ios::binary|ios::out);
	xfile.write((char*)&neew,sizeof(neew));
	xfile.close();

	return neew.idno;
}
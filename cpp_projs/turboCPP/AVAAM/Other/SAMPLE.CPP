#include<aviral.h>
void main()
{
	clrscr();
	intList my;
	my.add(2);
	my.add(20);
	my.add(346);
	my.show();
	cout<<endl<<my.valueAt(2);
	my.change(3, 340);
	my.show();
	my.addAt(78,2);
	my.show();
	getch();
}
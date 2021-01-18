#include<iostream.h>
#include<conio.h>
//#include<stdio.h>
//#include<stdlib.h>
//#include<ctype.h>
//#include<string.h>
//#include<graphics.h>
//#include<mouse.h>
struct intNode
{
	int number;
	intNode *next;
};
class intList
{
	intNode *start;
	public:
	intList()
	{
		start = NULL;
	}
	void add(int n)
	{
		if(start==NULL)
		{
			intNode *temp;
			temp = new intNode;
			temp->number = n;

			start = temp;
		}
		else
		{
			intNode *temp,*ptr,*prev;
			temp = new intNode;
			temp->number = n;

			for(ptr=start;ptr!=NULL;prev=ptr,ptr=ptr->next);
			prev->next = temp;
			temp->next = NULL;
			delete ptr;
		}
	}
	void addFirst(int n)
	{
		if(start==NULL)
		{
			intNode *temp;
			temp = new intNode;
			temp->number = n;

			start = temp;
		}
		else
		{
			intNode *temp;
			temp = new intNode;
			temp->number = n;

			temp->next = start;
			start = temp;
		}
	}
	void del()
	{
		intNode *ptr,*prev,*p;
		for(ptr=start;ptr!=NULL;p=prev,prev=ptr,ptr=ptr->next);
		p->next = NULL;
		delete prev;
	}
	void delFirst()
	{
		intNode *ptr;
		ptr = start;
		start = ptr->next;
		delete ptr;
	}
	void delAt(int n)
	{
		int i;
		intNode *ptr,*prev;
		for(ptr=start;i<n-1;prev=ptr,ptr=ptr->next,i++);
		prev->next = ptr->next;
		delete ptr;
	}
	int valueAt(int index)
	{
		intNode *ptr;
		int i=0;
		for(ptr=start;i<index-1;ptr=ptr->next,i++);
		return (ptr->number);
	}
	void show()
	{
		intNode *temp;
		cout<<endl<<"[";
		for(temp=start;temp!=NULL;temp=temp->next)
		{
			cout<<temp->number<<",";
		}
		cout<<"]";
		delete temp;
	}
	void change(int index, int value)
	{
		intNode *ptr;
		int i=0;
		for(ptr=start;i<index-1;ptr=ptr->next,i++);
		ptr->number = value;
	}
	void addAt(int n, int index)
	{
		intNode *temp,*ptr,*prev;
		temp = new intNode;
		temp->number = n;

		int i=0;
		for(ptr=start;i<index-1;prev=ptr,ptr=ptr->next,i++);
		temp->next = ptr;
		prev->next = temp;
	}
	void reverse()
	{}
	void sort()
	{}
};
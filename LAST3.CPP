#include <iostream.h>
#include <process.h>
#include <stdio.h>
#include <conio.h>

struct node

{
	int info;
	node *next;
}*newptr,*ptr,*save,*start,*rear;

node *create_new_node(int);
void insert_end(node *);
void display(node *);
void delnode(void);

void main()

{
	clrscr();
	int inf;
	char ch='y';
	while(ch=='y'||ch=='Y')
	{
		cout<<"\n enter new node:";
		cin>>inf;
		newptr=create_new_node(inf);
		insert_end(newptr);
		cout<<"\n list now becomoes:";
		display(start);
		cout<<"\n want to enter more nodes:";
		cin>>ch;

	}
	ch='y';
	while(ch=='y'||ch=='Y')
	{
		cout<<"\n list now becomes:";
		display(start);
		cout<<"\n want to delete the first node(y/n):";
		cin>>ch;
		if(ch=='y'||ch=='Y') delnode();

	}
	getch();
}

node *create_new_node(int n)
{
	ptr=new node;
	ptr->info=n;
	ptr->next=NULL;
	return ptr;
}

void display(node *np)
{
	while(np!=NULL)
	{
		cout<<np->info<<" ";
		np=np->next;
	}
}

void insert_end(node *np)
{
	if(start==NULL)
	{
		start=np;
		rear=np;
	}

	else
	{
		rear->next=np;
		rear=np;

	}
}

void delnode()
{
if(start==NULL)
{
	cout<<"\n underflow \n";
	system("pause");
	exit(0);
}
save=start;
start=start->next;
delete save;
}
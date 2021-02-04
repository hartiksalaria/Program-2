#include <iostream.h>
#include <process.h>
#include <conio.h>
#include <stdio.h>

struct node
{
	int info;
	node *next;
}*start,*ptr,*top,*newptr,*save;

node *create_new_node(int);
void push(node *);
void display(node *);
void pop();

void main()
{
	clrscr();
	int inf;
	char ch='y';
	while(ch=='y'||ch=='Y')
	{
		cout<<"\n enter information for new node:";
		cin>>inf;

		newptr=create_new_node(inf);
		push(newptr);
		cout<<"\n stack now becomes:";
		display(top);
		cout<<"\n want to enter new node:";
		cin>>ch;
	}

	cout<<"\n now deletion begins";
	ch='y';
	while(ch=='y'||ch=='Y')
	{
		cout<<"\n want to delete the top:";
		cin>>ch;
		if(ch=='y') pop();
		cout<<"\n now the stack is:";
		display(top);
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

void push(node *np)
{
	if(top==NULL)
	{
		top=np;
	}

	else
	{
		save=top;
		top=np;
		np->next=save;
	}
}

void display(node *np)
{
	while(np!=NULL)
	{
	cout<<"\n"<<np->info;
	np=np->next;
	}
}

void pop()
{
	if(top==NULL)
	{
		cout<<"\n underflow";
		exit(0);
	}
	cout<<"\n poped element is:"<<top->info;
	save=top;
	top=top->next;
	delete save;
}
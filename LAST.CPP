#include <iostream.h>
#include <conio.h>
#include <process.h>
 struct node
 {

	int info;
	node *next;

 }*newptr,*ptr,*save,*start;
 node *create_new_node(int);
 void insert_beg(node*);
 void display(node*);

 void main()

 {
	clrscr();
	int inf;
	char ch='y';

	while(ch=='y'||ch=='Y')
	{
		cout<<"\n enter information for node:";
		cin>>inf;
		newptr=create_new_node(inf);
		insert_beg(newptr);
		cout<<"\n list now becomes:";
		display(start);
		cout<<"\n want to enter more nodes:";
		cin>>ch;
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

 void insert_beg(node *np)
 {
	if(start==NULL)
	{
		start=np;

	}

	else
	{
		save=start;
		start=np;
		np->next=save;
	}

 }

 void display(node *np)
 {
	while(np!=NULL)
	{
		cout<<np->info<<" ";
		np=np->next;

	}
 }
#include <iostream.h>
#include <conio.h>

struct node

{
	int info;
	node *next;

}*newptr,*save,*start,*rear,*ptr;

node *create_new_node(int);
void insert_end(node *);
void display(node *);

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
		insert_end(newptr);

		cout<<"\n  node now becomes:";
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
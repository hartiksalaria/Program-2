#include <iostream.h>
#include <process.h>
#include <stdio.h>
#include <conio.h>
void push(int[],int &,int);
void display(int [],int);

int const size=5;
void main()
{
	clrscr();
	int arr[size],item,top=0;
	char ans='y';
	arr[top]=NULL;
	while(ans=='y'||ans=='Y')
	{
		cout<<"\n enter the element at the top:";
		cin>>item;
		push(arr,top,item);
		display(arr,top);
		cout<<"\n want to enter more elements:";
		cin>>ans;
	}
	getch();
}

void push(int ar[],int &top,int item)
{
	if(top==size-1)
	{
		cout<<"\n overflow";
		system("pause");
		exit(0);
	}
	else
	{       top++;
		ar[top]=item;
	}
}

void display(int ar[],int top)

{
	cout<<"\n given stack is:";
	cout<<"\n ->"<<ar[top];
	for(int i=top-1;i>=0;--i)
	cout<<"\n"<<ar[i];
}

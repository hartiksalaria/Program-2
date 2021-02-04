#include<iostream.h>
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
char str[50];
int i,count=1;
cout<<"enter the string";
gets(str);
for(i=0;str[i]!='\0';++i)
{
	if(str[i]==' ')
	count++;
	while(str[i]==' ')
	++i;
}
cout<<"\n total words are:"<<count;
getch();
}
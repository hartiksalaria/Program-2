#include<iostream.h>
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,j,k;
char str[20],rev[20];
cout<<"enter the string:";
gets(str);
for(i=0;str[i]!='\0';++i);
for(j=i-1,k=0;j>=0;++k,--j)
rev[k]=str[j];
rev[0]='\0';
cout<<"\n reversed string is as follows:";
cout<<rev[20];
getch();
}
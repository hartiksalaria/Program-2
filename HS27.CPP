#include<conio.h>
#include<iostream.h>
#include<stdio.h>
void main()
{
clrscr();
char str[50],rev[50];
int i,j,k;
cout<<"enter the string:";
gets(str);
for(i=0;str[i]!='\0';++i);
for(j=0,k=i-1;j>=0;++j,--k)
rev[j]=str[k];
rev[j]='\0';
cout<<"\n reversed string is as follows:";
puts(rev);
getch();
}
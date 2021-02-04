#include<iostream.h>
#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
clrscr();
int i,j;
char str1[10],str2[10],str3[20];
cout<<"enter string 1:";
gets(str1);
cout<<"\n enter string 2:";
gets(str2);
for(i=0;str1[i]!='\0';++i)
str3[i]=str1[i];
for(j=0;str2[j]!='\0';++j)
str3[i+j]=str2[j];
int len=strlen(str3);
cout<<"\n concanated string is as follows:";
cout.write(str3,len);
getch();
}
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
clrscr();
char ch;
cout<<"enter a character:";
cin>>ch;
if(ch>=48&&ch<=57)
cout<<"\n you entered a digit";
else if(ch>=65&&ch<=90)
cout<<"you entered a uppercase character";
else if(ch>=97&&ch<=122)
cout<<"you entered a lowercase character";
else
cout<<"you entered a special character";
getch();
}
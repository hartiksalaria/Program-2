#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
clrscr();
char ch;
double a,b,result;
cout<<" a simple calculator";
cout<<"\n enter the value of a:";
cin>>a;
cout<<"enter the value of b:";
cin>>b;
cout<<"\n choose any operator(+-*/)";
cin>>ch;
if(ch=='+')
result=a+b;
if(ch=='-')
result=a-b;
if(ch=='*')
result=a*b;
if(ch=='/')
result=a/b;
cout<<"\n the result of this is:";
cout<<result;
getch();
}
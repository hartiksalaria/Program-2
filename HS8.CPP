
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
int main()
{
clrscr();
int year;
cout<<"enter the year:";
cin>>year;
if(year%4==0)
cout<<"\n the year is a leap year";
else
cout<<"the year is not a leap year";
getch();
return 0;
}
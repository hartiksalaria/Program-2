#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int x;
float fx;
for(x=-10;x<=10;x=x+4)
{
fx=(x*x+1.5*x+5)/(x-3);
cout<<"\n for x= "<<x<<" fx is"<<fx;
}
getch();
}
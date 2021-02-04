#include<iostream.h>
#include<conio.h>
int main()
{
clrscr();
int a,b,quo,rem;
cout<<"enter first number:";
cin>>a;
cout<<"\n enter second number:";
cin>>b;
quo=a/b;
rem=a%b;
cout<<"\n the quotient of given numbers is:";
cout<<quo;
cout<<"\n the remainder of given two numbers is:";
cout<<rem;
getch();
return 0;
}
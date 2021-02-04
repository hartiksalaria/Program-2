#include<iostream.h>
#include<conio.h>
#include<stdio.h>
int main()
{
 clrscr();
int p,r,t,si,amt;
cout<<"enter value of principal:";
cin>>p;
cout<<"enter value of rate:";
cin>>r;
cout<<"enter value of time:";
cin>>t;
si=p*r*t/100;
cout<<"amount of simple interest is:";
cout<<si;
amt=si+p;
cout<<"the amnount you get";
cout<<amt;
getch();
return 0;
}
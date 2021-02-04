#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,c;
cout<<"enter the value of a:";
cin>>a;
cout<<"\n enter the value of b:";
cin>>b;
cout<<"\n enter the value of c:";
cin>>c;
if(a>b&&a>c)
cout<<"\n the maximum out of"<<a<<","<<b<<"and"<<c<<"is"<<a;
if(b>c&&b>a)
cout<<"\n the maximum out of"<<a<<","<<b<<"and"<<c<<"is"<<b;
if(c>a&&c>b)
cout<<"\n the maximum out of "<<a<<","<<b<<"and"<<c<<"is"<<c;
getch();
}
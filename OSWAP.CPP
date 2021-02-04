#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
void swap(float &,float &);
float a,b;
cout<<"enter two numbers to be swapped:";
cin>>a>>b;
cout<<"\n original values are :";
cout<<"\n a="<<a<<" and b="<<b;
swap(a,b);
cout<<"\n after swaping:";
cout<<"\n value of a="<<a<<" and b="<<b;
getch();
}
void swap(float &x,float &y)
{
int temp;
temp=x;
x=y;
y=temp;
}

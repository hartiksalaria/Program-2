#include<iostream.h>
#include<conio.h>
struct distance
{
int feet;
int inches;
};
distance len1,len2;
void main()
{
clrscr();
void sum(distance l1,distance l2);
cout<<"\n enter lenght 1";
cout<<"\n feet:";
cin>>len1.feet;
cout<<"\n inches:";
cin>>len1.inches;
cout<<"\n enter lenght 2";
cout<<"\n feet:";
cin>>len2.feet;
cout<<"\n inches:";
cin>>len2.inches;
sum(len1,len2);
getch();
}
void sum(distance l1,distance l2)
{
distance l3;
l3.feet=(l1.feet+l2.feet)+(l1.inches+l2.inches)/12;
l3.inches=(l1.inches+l2.inches)%12;
cout<<"\n total lenght in feet is:"<<l3.feet;
cout<<"\n total lenght in inches is:"<<l3.inches;
}
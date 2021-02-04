#include<iostream.h>
#include<conio.h>
#include<process.h>
int main()
{
clrscr();
int num,i;
char ch;
cout<<"enter a number:";
cin>>num;
do
{
i=1;
++i;
cout<<"\n multiples of "<<num<<" * "<<i<<" is "<<num*i;
cout<<"\n want to enter more(y/n):";
cin>>ch;
if(ch=='y')
cout<<"\n again enter a number:";
cin>>num;
} while(i<11);
return 0;
}
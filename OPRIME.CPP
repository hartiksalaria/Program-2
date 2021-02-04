#include<iostream.h>
#include<process.h>
#include<conio.h>
void main()
{
clrscr();
int num,i;
cout<<"enter a number:";
cin>>num;
for(i=1;i<=num/2;i++)
if(num%i==0)
{
cout<<"\n it is not a prime nummber";
exit(0);
}
cout<<"\n it is a prime number";
getch();
}
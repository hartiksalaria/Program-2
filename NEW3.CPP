#include<conio.h>
#include<iostream.h>
int main()
{
clrscr();
double num,k;
cout<<"enter a number:";
cin>>num;
k=num;
do
{
num=num*k;
k--;
}
while(k);
cout<<"\n"<<num;
getch();
return 0;
}
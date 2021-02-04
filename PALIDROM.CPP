#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int num,digit,n,rev=0;
cout<<"enter any number:";
cin>>num;
n=num;
do
{
digit=num%10;
rev=(rev*10)+digit;
num=num/10;
}while(num!=0);
cout<<"\n reverse of "<<n<<" is "<<rev;
if(n==num)
{
cout<<"\n given number is palidrome";
}
else
{
cout<<"\n given number is not a palidrome";
}
getch();
}
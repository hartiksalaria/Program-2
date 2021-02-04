#include<iostream.h>
#include<conio.h>
int main()
{
clrscr();
int num,sum_odd,sum_even,even=0,odd=1;
cout<<"enter the list of numbers(0 to terminate):";
do{
cin>>num;
if(num%2==0)
{
if(num>even)
{
sum_even=num;
}
}
else
{
if(num>odd)
{
sum_odd=num;
}
}
}while(num!=0);
cout<<"\n the largest even number is "<<sum_even;
cout<<"\n the largest odd number is"<<sum_odd;
getch();
return 0;
}
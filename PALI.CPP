#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
char str[40];
int flag=0;
cout<<"enter the main string:";
cin.getline(str,40);
for(int i=0;str[i]!='\0';++i)
for(int j=i,k=0;;--j,++k)
{
if(str[j]==str[k])
flag=1;
}
if(flag=1)
{
cout<<"\n string is palidrome";
}
else
{
cout<<"\n string is not palidrome";
}
getch();
}
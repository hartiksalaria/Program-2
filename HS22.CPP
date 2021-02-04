#include<iostream.h>
#include<string.h>
#include<conio.h>
double main()
{
clrscr();
char str[50];
cout<<"\n enter the string:";
cin.getline(str,50);
int len=strlen(str);
for(int i=0,j=len;i<len/2;++i,--j)
str[i]=str[j];
cout<<"\n reversed string is as follows:";
cout<<"\n"<<str;
getch();
return 0;
}
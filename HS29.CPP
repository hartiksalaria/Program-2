#include<iostream.h>
#include<string.h>
#include<conio.h>
void main()
{
clrscr();
char str[3][30];
char ch;
int i,j,k,len=0;
cout<<"\n enter 3 strings:\n";
for(i=0;i<3;++i)
cin.getline(str[i],30);
cout<<"\n given strings are as follows:";
for(i=0;i<3;++i)
cout<<"\n"<<str[i];
for(i=0;i<3;++i)
{
len=strlen(str[i]);
for(j=0,k=len-1;j<len/2;++j,--k)
{
	ch=str[i][j];
	str[i][j]=str[i][k];
	str[i][k]=ch;
}
}
cout<<"\n reversed string is as follows:";
for(i=0;i<3;++i)
cout<<"\n"<<str[i];
getch();
}
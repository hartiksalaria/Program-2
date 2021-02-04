#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int findpos(char[],char);
char string[80],c;
int y;
cout<<"enter the main string:";
cin.getline(string,80);
cout<<"\n enter the character to be searched:";
cin.get(c);
y=findpos(string,c);
if(y==-1)
{
cout<<"\n character is not in the string";
}
getch();
}
int findpos(char s[],char c)
{
for(int i=0;s[i]!='\0';++i)
{
if(s[i]==c)
{
cout<<"\n the character is in the position"<<i+1;
}
}
return 0;
}
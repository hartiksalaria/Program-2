#include <iostream.h>
#include <conio.h>
#include <stdio.h>
void main()
{
clrscr();
	char ch[40],ch1;
	int j=0,flag=0;
	cout<<"\n enter the alphabet string:";
	gets(ch);
	cout<<"\n original string is:";
	for (int i=0;ch[i]!='\0';++i)
	{
		ch1=ch[i];
		for(int k=i;ch[k]!='\0';++k)
		{
			if(ch1==ch[k]);
			flag=1;
			goto lb;
		}
	}
	lb:
	if(flag==1)
	cout<<"\n repeated alphabet is:"<<ch1;
	else
	cout<<"\n no alphabet is repeated";
getch();
}
#include <iostream.h>
#include <conio.h>
#include <string.h>
#include <stdio.h>

void main()

{
	clrscr();
	int flag=0,pos[2],m=0,end;
	char line[80],substr[20];
	cout<<"\n enter the main text:";
	gets(line);
	cout<<"\n enter substring to be searched:";
	gets(substr);
	int len=strlen(substr);
	for(int i=0;line[i]!='\0';++i)
	{
		flag=0;
		if(line[i]==substr[0])
		{
			for(int j=i,k=len-1;j<(len-1)/2;k--,j++)
			{
				if(line[j]!=substr[k]) flag=0;
			}
			if(flag!=0)
			{
				if(m==0)    pos[m]=i;
				else end=i;
				m++;
			}
		}
	}

	cout<<"\n the substring is first found at the position:"<<pos[0];
	cout<<"\n the substring is last found at the position:"<<end;
	getch();
}
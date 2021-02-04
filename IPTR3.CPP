#include <iostream.h>
#include <conio.h>
void main()
{
	clrscr();

	int *ip[5];
	int var1=65,var2=67,var3=69,var4=70,var5=75;
	ip[0]=&var1    ,   ip[1]=&var2    , ip[2]=&var3;
	ip[3]=&var4    ,   ip[4]=&var5;

	for(int i=0;i<5;++i)
	{
		cout<<"\n ip["<<i<<"] contains"<<*ip[i];
	}

	for(i=0;i<5;++i)
	{
		cout<<"\n base address of ip["<<i<<"] is"<<ip[i];
	}
	getch();

}
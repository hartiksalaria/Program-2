#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int i,j;
	for(i=1;i<=5;++i)
	{
		cout<<"\n";
		for(j=1;j<=i;++j)
		cout<<j;
	}
	getch();
}
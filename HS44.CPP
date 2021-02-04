#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
const int num=5;
void main()
{
	clrscr();
	randomize();
	for(int i=1;i<20;++i)
	{
	int v1=1,v2=5,pick;
	while(v1<v2)
	{
		pick=random(num)+(v2-v1);
		cout<<pick<<":";
		v1++;
	}
	cout<<"\n";
	}
	getch();
}
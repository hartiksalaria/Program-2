#include <iostream.h>
#include <conio.h>
 struct ticket
 {
	char level;
	int price;
 };

 void compute(ticket &t)
 {
	if(t.level=='a')
	t.price+=50;
	else if(t.level=='b')
	t.price+=30;
	else if(t.level=='c')
	t.price+=25;
	cout<<t.level<<"::"<<t.price<<"\n";
 }

 void main()
 {
	clrscr();
	ticket mon_show[]={{'c',250},{'a',300},{'b',350}};
	for(int count=2;count>=0;)
	{
		compute(mon_show[count--]);
	}
	getch();
 }
#include<iostream.h>
class metro
{
    int mno,tripno,passengercount;
public:
	metro(int tmno=1)
	{mno=tmno;tripno=0;passengercount=0;}
	void trip(int pc=20)
	{tripno++;passengercount+=pc;}
	void statusshow()
	{cout<<mno<<":"<<tripno<<":"<<passengercount<<endl;}
	};
void main()
{
metro m(5),t;
m.trip();
t.trip(50);
m.statusshow();
m.trip(30);
t.statusshow();
m.statusshow();
}
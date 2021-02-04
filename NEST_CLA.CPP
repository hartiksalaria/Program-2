#include <iostream.h>
#include <conio.h>
class outer
{
private:
	int a;
	class inner
	{
	private:
		int b;
		int c;
	public:
		void second()
		{
			cout<<b<<" "<<c;
		}
		inner()
		{
			b=10;
			c=20;
		}
	};
public:
	inner ob1;
	outer()
	{
		a=30;
	}
	void prn()
	{
		cout<<a<<"\n";
	}
};
void main()
{
clrscr();
outer::inner ob2;
outer ob3;
ob3.prn();
ob2.second();
getch();
}
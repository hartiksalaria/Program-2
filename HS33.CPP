#include<iostream.h>
#include<conio.h>
class distance
{
private:
	int feet,inches;
public:
	void getdata(int i,int j)
	{
		feet=i;
		inches=j;
	}
	void print()
	{
		cout<<"\n"<<feet<<" feet "<<inches<<" inches ";
	}
distance sum(distance d1,distance d2);
};
distance sum(distance d1,distance d2);
distance d3,lenght1,lenght2;
distance distance::sum(distance d1,distance d2)
{
	d3.inches=d1.inches+d2.inches;
	d3.feet=d1.feet+d2.feet;
	return d3;
}
void main()
{
	clrscr();
	lenght1.getdata(6,3);
	lenght2.getdata(6,7);
	cout<<"lenght 1:";
	lenght1.print();
	cout<<"\n lenght 2:";
	lenght2.print();
	d3=d3.sum(lenght1,lenght2);
	d3.print();
	getch();
}
#include<iostream.h>
#include<conio.h>
void amount(float princ,int time,float rate);
void amount(float princ,int time=2,float rate=0.14)
{
	cout<<"\n principal:"<<princ;
	cout<<"\n time:"<<time<<" years";
	cout<<"\n rate:"<<rate<<"%";
	cout<<"\n amount:"<<(princ*time*rate);
}
void main()
{
clrscr();
cout<<"case 1"<<"\n";
amount(2000,4,0.13);
cout<<"case 2"<<"\n";
amount(2000);
cout<<"case 3"<<"\n";
amount(5000,4);
cout<<"case 4"<<"\n";
amount(3000,0.12);
getch();
}
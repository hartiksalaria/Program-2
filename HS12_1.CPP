#include<iostream.h>
#include<conio.h>
void amount(float princ,int time,float rate)  //#1
{
	cout<<"\n principal:"<<princ;
	cout<<"\n time:"<<time<<" years";
	cout<<"\n rate:"<<rate<<"%";
	cout<<"\n amount is:"<<(princ*time*rate)<<"\n";
}
void amount(float princ,int rate)             //#2
{
	cout<<"\n principal:"<<princ;
	cout<<"\n time:"<<4<<" years";
	cout<<"\n rate:"<<rate<<"%";
	cout<<"\n amount is:"<<(princ*4*rate)<<"\n";
}
void amount(float princ,float time)          //#3
{
	cout<<"\n principal:"<<princ;
	cout<<"\n time:"<<time<<" years";
	cout<<"\n rate:"<<0.17;
	cout<<"\n amount is:"<<(princ*time*0.17)<<"\n";
}
void amount(float time)                      //#4
{
	cout<<"\n principal:2000";
	cout<<"\n time:"<<time<<" years";
	cout<<"\n rate=0.18"<<"%";
	cout<<"\n amount is:"<<(2000*time*0.18)<<"\n";
}
void main()
{
clrscr();
cout<<"case 1";
amount(3000,5,0.34);
cout<<"\n case 2";
amount(5000,4);
cout<<"\n case 3";
amount(2000,2);
cout<<"\n case 4";
amount(6);
getch();
}
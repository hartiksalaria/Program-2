#include<iostream.h>
#include<conio.h>
#include<process.h>
void main()
{
 clrscr();
 void convert(int &d,char &t,char ch);
 int distance;
 char choice,type='F';
 cout<<"\n enter distance in feet:";
 cin>>distance;
 cout<<"\n want to convert distance in feet or inches(F/I):";
 cin>>choice;
 switch(choice)
 {
	case 'F': convert(distance,type,'F');
	break;
	case 'I': convert(distance,type,'I');
	break;
	default: cout<<"\n wrong choice";
	exit(0);
 }
 cout<<"\n distance is "<<distance<<" "<<type;
 getch();
}
void convert(int &d,char &t,char ch)
{
 switch(ch)
 {
	case 'F': if(t=='I')
		  {
			d=d/12;
			t='F';
		  }
	break;
	case 'I': if(t=='F')
		  {
			d=d*12;
			t='I';
		  }
	break;
 }
}
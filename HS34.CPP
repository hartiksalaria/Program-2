#include<iostream.h>
#include<conio.h>
class time
{
private:
	int hrs,min,sec;
public:
	int tot_sec;
	void gettime(int i,int j,int k);
	void convert(char ch,int t);
	void sum(int t1,int t2);
};
void time::gettime(int i,int j,int k)
{
	hrs=i;
	min=j;
	sec=k;
	tot_sec=(hrs*60)+(min*60)+sec;
}
void time::convert(char ch,int t)
{
switch(ch)
	{
	 case 'h': cout<<"\n time is:\n";
		   cout<<t.hrs<<":"<<t.min<<":"<<t.sec;
	 break;
	 case 'p': if(t.hrs>12)
		    {
			t.hrs=t.hrs-12;
			cout<<"\n time is:\n";
			cout<<t.hrs<<":"<<t.min<<":"<<t.sec<<" pm";
		    }
		   else
		   {
			cout<<"\n time is:\n";
			cout<<t.hrs<<":"<<t.min<<":"<<t.sec<<" am";
		   }
	}
}
void time::sum(int t1,int t2)
{
	int h,m,s,sq,mq;
	sq=(t1.sec+t2.sec)/60;
	s=(t1.sec+t2.sec)%60;
	mq=(t1.min+t2.min+sq)/60;
	m=(t1.min+t2.min+sq)%60;
	h=(t1.min+t2.min+mq)%60;
	cout<<"\n total time is:\n";
	cout<<h<<":"<<m<<":"<<s;
}
void prnval(int t)
{
	cout<<"\n total seconds are:"<<t.tot_sec;
}
time tm1,tm2;
void main()
{
char choice;
tm1.gettime(7,48,45);
tm2.gettime(5,34,23);
cout<<"\n you want time is am/pm format or in hrs?(p/h)";
cin>>choice;
tm2.convert(choice,tm2);
tm1.sum(tm1,tm2);
prnval(tm1);
}
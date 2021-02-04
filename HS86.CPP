#include <iostream.h>
#include <process.h>
#include <conio.h>
void main()
{
	clrscr();
	int ar[10][10],n,m,d1sum=0,d2sum=0,i,j,temp;
	cout<<"\n enter rows and columns for the array:";
	cin>>n>>m;
	temp=m-1;
	if(n!=m)
	{
		cout<<"\n diagonal sum cannot be found";
		exit(0);
	}
	cout<<"\n enter the array:\n";
	for(i=0;i<n;++i)
	{
		for(j=0;j<m;++j)
		cin>>ar[i][j];
	}
	for(i=0;i<n;++i)
	{
		for(j=0;j<m;++j)
		{
			if(i==j)
			d1sum+=ar[i][j];

			else if(j==temp)
			d2sum+=ar[i][j];
		}
		temp--;
	}


	cout<<"\n sum of first diagonal is:"<<d1sum;
	cout<<"\n sum of second diagonal is:"<<d2sum;
	getch();
}
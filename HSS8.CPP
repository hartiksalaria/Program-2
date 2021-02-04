#include <iostream.h>
#include <conio.h>
void main()

{
	clrscr();
	int arr[10][10],m,n,i,j,rsum[10],csum[10];
	cout<<"\n enter rows and columns of the array:";
	cin>>m>>n;
	cout<<"\n enter the array: \n";
	for(i=0;i<m;++i)
	{
		rsum[i]=0;
		for(j=0;j<n;++j)
		{
		cin>>arr[i][j];
		rsum[i]+=arr[i][j];
		}

	}

	for(i=0;i<n;++i)
	{
		csum[i]=0;
		for(j=0;j<m;++j)
		{
			csum[i]+=arr[j][i];
		}
	}

	cout<<"\n given array along with row and column sum is:";
	for(i=0;i<m;++i)
	{
		cout<<"\n";
		for(j=0;j<n;++j) cout<<arr[i][j]<<"  ";
		cout<<rsum[i];
	}
	cout<<"\n";
	for(j=0;j<n;++j)
	cout<<csum[j]<<"  ";
	getch();
}
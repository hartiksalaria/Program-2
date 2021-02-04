#include <iostream.h>
#include <conio.h>
void main()
{
	clrscr();
	int arr[10][10],m,n,i,j;
	cout<<"\n enter number of rows and columns:";
	cin>>m>>n;
	cout<<"\n enter the array: \n";
	for(i=0;i<m;++i)
	{
		for(j=0;j<n;++j)
		cin>>arr[i][j];
	}

	cout<<"\n transpose of matrix is:";
	for(i=0;i<n;++i)
	{
		cout<<"\n";
		for(j=0;j<m;++j)
		cout<<arr[j][i]<<"  ";
	}
	getch();
}
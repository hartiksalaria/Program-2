#include <iostream.h>
#include <conio.h>

void rev_arr(int [],int);

void main()

{
	clrscr();
	int arr[10],n;
	cout<<"\n enter size of the array:";
	cin>>n;
	cout<<"\n enter the array:\n";
	for(int i=0;i<n;++i)
	cin>>arr[i];
	rev_arr(arr,n);
	cout<<"\n reversed array is :\n";
	for(i=0;i<n;++i)
	cout<<arr[i]<<" ";
	getch();
}

void rev_arr(int ar[],int size)
{
	int i,j;
	int a[10];
	for(i=0;i<size;++i)
	a[i]=ar[i];
	for(i=size-1,j=0;i>=0;--i,++j)
	ar[j]=a[i];
}
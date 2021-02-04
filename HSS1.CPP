#include <iostream.h>
#include <conio.h>
int lsearch(int [],int,int);
void main()

{
	clrscr();
	int arr[40],N,item,index;
	char ch;

	cout<<"\n enter the size of the array:";
	cin>>N;

	cout<<"\n enter the array(ascending order):";
	for(int i=0;i<N;++i)
	cin>>arr[i];

	do
	{
		cout<<"\n enter the element to inserted:";
		cin>>item;

		index=lsearch(arr,N,item);
		for(i=N;i>index;--i)
		arr[i]=arr[i-1];
		arr[index]=item;
		N+=1;
		cout<<"\n want to insert more items ?";
		cin>>ch;

	}while(ch=='y'||ch=='Y');

	cout<<"\n array after insertion of elements is:";
	for(i=0;i<N;++i)
	cout<<arr[i]<<" ";
	getch();
}

int lsearch(int arr[],int N,int item)

{
	int pos;
	if(arr[0]>item) pos=0;
	if(arr[N]<item) pos=N;
	int i=0;

	do
	{
		if(arr[i]<item && item<arr[i+1]) pos=i+1;
		i++;

	}while(i<=N);
	return pos;
}
#include <iostream.h>
#include <conio.h>
#include <process.h>
int lsearch(int arr[],int size,int item)

{

for(int i=0;i<size;++i)

{
	if(arr[i]==item)   return i;

}

return (-1);
}


void main()

{

	clrscr();

	int arr[40],size,item,index,temp;
	cout<<"\n enter the size of the array:";
	cin>>size;

	cout<<"\n enter the array:";
	for(int i=0;i<size;++i)
	cin>>arr[i];

	cout<<"\n enter the element you want to delete from the array:";
	cin>>item;

	index=lsearch(arr,size,item);

	if(index==-1)

	{

		cout<<"\n element is not in the array";
		exit(0);
	}

	for(i=index;i<size-1;++i)
	arr[i]=arr[i+1];

	cout<<"\n array after deletion of "<<item<< "is:\n";
	for(i=0;i<size-1;++i)
	cout<<arr[i]<<" ";
	getch();

}
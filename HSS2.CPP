#include <iostream.h>
#include <conio.h>
void bsort(int [],int);
void main()

{
	clrscr();

	int arr[50],N;
	cout<<"\n enter the size of the array:";
	cin>>N;

	cout<<"\n enter the array:";
	for(int i=0;i<N;++i)
	cin>>arr[i];

	bsort(arr,N);

	cout<<"\n after sorting array is:";
	for(i=0;i<N;++i)
	cout<<arr[i]<<" ";

	getch();
}

void bsort(int ar[],int size)
{
	int ctr=0,temp;
	for(int i=0;i<size;++i)
	{
		for(int j=0;j<size;++j)
		{
			if(ar[j+1]<ar[j])
			{
				temp=ar[j+1];
				ar[j+1]=ar[j];
				ar[j]=temp;

			}

		}

		cout<<"\n array after iteration "<<++ctr<<" is:";
		for(int k=0;k<size;++k)
		cout<<ar[k]<<" ";


	}





}
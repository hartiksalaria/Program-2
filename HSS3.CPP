#include <iostream.h>
#include <conio.h>
void msort(int [] ,int ,int [] ,int ,int []);
void main()
{
	clrscr();
	int arr1[20],arr2[20],N1,N2,arr3[40],N3;

	cout<<"\n enter the size of first array:";
	cin>>N1;

	cout<<"\n enter first array(in ascending order):";
	for(int i=0;i<N1;++i)
	cin>>arr1[i];

	cout<<"\n enter the size of second array:";
	cin>>N2;

	cout<<"\n enter second array(descending order):";
	for(i=0;i<N2;++i)
	cin>>arr2[i];

	msort(arr1,N1,arr2,N2,arr3);

	cout<<"\n after merging the arrays resultant sorted array is:";
	for(i=0;i<N3;++i)
	cout<<arr3[i]<<" ";

	getch();
}

void msort(int ar1[] ,int n1 ,int ar2[] ,int n2 ,int ar3[])
{
	 int i=0,j=n2,k=0;
	do
	{
		if(ar1[i]<ar2[j])
		{
			ar3[k]=ar1[i];
			i++;
		}
		else
		{
			ar3[k]=ar2[j];
			j--;
		}
	   k++;

	}while(i<n1 && j>0);

	if(j!=0)
	{
		while(j!=0)
		{
			ar3[k]=ar2[j];
			j--;
			k++;
		}
	}
	else
	{
		while(i!=n1)
		{
			ar3[k]=ar1[i];
			i++;
			k++;
		}


	}

}
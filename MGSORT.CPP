#include <iostream.h>
#include <conio.h>

int mgsort(int [],int,int [],int);

void main ()

{
	clrscr();

	int A[20],B[20],C[20],M,N,MN;
	cout<<"\n enter the size of first array:";
	cin>>M;
	cout<<"\n enter the size of second array:";
	cin>>N;
	MN=M+N;
	cout<<"\n enter first array in ascending order:";
	for(int i=0;i<M;++i)
	cin>>A[i];
	cout<<"\n enter second array in decending order:";
	for(i=0;i<N;++i)
	cin>>B[i];
	for(i=0;i<MN;++i)
	C[i]=mgsort(A,M,B,N);
	cout<<"\n after sorting the array  is ";
	for(i=0;i<MN;++i)
	cout<<C[i]<<" ";
	getch();

}

int mgsort(int A[20],M,B[20],N)

{

int temp;
for(int i=0,j=N;j


}












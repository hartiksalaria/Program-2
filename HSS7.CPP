#include <iostream.h>
#include <stdlib.h>
#include <conio.h>
void main()

{
	clrscr();
	int A[10][10],B[10][10],C[10][10],m1,n1,m2,n2,i,j,k;
	cout<<"\n enter number of rows and columns of first array:";
	cin>>m1>>n1;
	cout<<"\n enter number of rows and columns of second array:";
	cin>>m2>>n2;
	if(n1!=m2)
	{
		cout<<"\n matrix multiplication is not possible \n";
		system("pause");
		exit(0);
	}

	for(i=0;i<m1;++i)
	{
		for(j=0;j<n2;++j)
		{
			C[i][j]=0;
			for(k=0;k<m1;++k)
			C[i][j]=A[i][j]*B[k][j];
		}
	}


	cout<<"\n array after multiplication is: \n";
	for(i=0;i<m1;++i)
	{
		cout<<"\n";
		for(j=0;j<n2;++j)
		cout<<C[i][j]<<"  ";
	}
	getch();
}
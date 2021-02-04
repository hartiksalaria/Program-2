#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a[10][10],b[10][10];
int i,j;
int m,n;
cout<<"enter rows and columns for the matrix:";
cin>>m>>n;
cout<<"\n enter matrix:\n";
for(i=0;i<m;++i)
{
 for(j=0;j<n;++j)
 cin>>a[i][j];
}
cout<<"\n transpose of the matrix is:";
for(i=0;i<m;++i)
{
 for(j=0;j<n;++j)
 b[i][j]=a[j][i];
}
for(i=0;i<n;++i)
{
 cout<<"\n";
 for(j=0;j<m;++j)
 cout<<b[i][j]<<" ";
}
getch();
}
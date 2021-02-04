#include<iostream.h>
#include<process.h>
#include<conio.h>
void main()
{
clrscr();
int a[10][10],b[10][10];
int p,q;
int i,j;
cout<<"\n enter rows and columns for matrix-A:";
cin>>p>>q;
cout<<"\n enter matrix-A:\n";
for(i=0;i<p;++i)
{
for(j=0;j<q;++j)
cin>>a[i][j];
}
cout<<"\n transpose of matrix is as follows:";
for(i=0;i<q;++i)
{
for(j=0;j<p;++j)
b[i][j]=a[j][i];
}
for(i=0;i<q;++i)
{
cout<<"\n";
for(j=0;j<p;++j)
cout<<b[i][j]<<" ";
}
getch();
}
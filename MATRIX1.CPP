#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a[5][3],b[5][3],c[5][3];
int i,j;
int p,q;
int k,l;
char ch;
cout<<"\n enter number of rows and columns of the first matrix:";
cin>>i>>j;
cout<<"\n enter rows and columns of the second matrix:";
cin>>p>>q;
if(i==p&&j==q)
{
cout<<"\n matrics and be added";
do
{
cout<<"\n enter first matrix row wise:";
for(k=0;k<i;++k)
{
for(l=0;l<j;++l)
cin>>a[k][l];
}
cout<<"\n enter second matrix row wise:";
for(k=0;k<i;++k)
{
for(l=0;l<j;++l)
cin>>a[k][l];
}
cout<<"\n addition of two matrices are as follows:";
for(k=0;k<i;++k)
{
for(l=0;l<j;++l)
c[k][l]=a[k][l]+b[k][l];
}
for(k=0;k<i;k++)
{
for(l=0;l<j;++l)
cout<<c[k][l];
}
cout<<"\n want to enter more";
cin>>ch;
}while(ch=='y'||ch=='Y');
}
else
{
cout<<"\n matrix cannot be added";
}
getch();
}
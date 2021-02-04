#include<iostream.h>
#include<conio.h>
void main()
{
int a[5][3],b[5][3],c[5][3];
int i,j;
int p,q;
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
for(i=0;i<5;++i)
{
for(j=0;j<3;++j)
cin>>a[i][j];
}
cout<<"\n enter second matrix row wise:";
for(i=0;i<5;i++)
{
for(j=0;j<3;++j)
cin>>a[i][j];
}
cout<<"\n addition of two matrices are as follows:";
for(i=0;i<5;i++)
{
for(j=0;j<3;++j)
c[i][j]=a[i][j]+b[i][j];
}
for(i=0;i<5;i++)
{
for(i=0;i<3;++i)
cout<<c[i][j];
}
}while(ch=='y'||ch=='Y');
}
}
#include<iostream.h>
#include<process.h>
#include<conio.h>
void main()
{
clrscr();
char ch;
int a[5][5],b[5][5],c[5][5],i,j,p,q,m,n;
cout<<"enter the no. of rows and columns of the first matrix";
cin>>p>>q;
cout<<"\n enter the rows and columns of the second matrix";
cin>>m>>n;
if(p!=m||q!=n)
{
cout<<"\n matrix cannot be added";
exit(0);
}
else
{
do
{
cout<<"\n enter first matrix row wise:";
for(i=0;i<m;i++)
{
for(j=0;j<n;++j)
cin>>a[i][j];
}
cout<<"\n enter second matrix row wise:";
for(i=0;i<p;++i)
{
for(j=0;j<q;++j)
cin>>b[i][j];
}
cout<<"\n added matrix is as follows:";
for(i=0;i<m;++i)
{
for(j=0;j<n;++j)
c[i][j]=a[i][j]+b[i][j];
}
for(i=0;i<m;++i)
cout<<"\n";
for(j=0;j<n;++j)
cout<<c[i][j]<<" ";
}while(ch=='y'||ch=='Y');
}
getch();
}






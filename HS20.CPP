#include<iostream.h>
#include<process.h>
#include<conio.h>
void main()
{
clrscr();
int a[10][10],b[10][10],c[10][10];
int p,q,m,n;
int i,j,k;
cout<<"\n enter rows and columns for matrix-A:";
cin>>p>>q;
cout<<"\n enter rows and columns for matrix-B:";
cin>>m>>n;
if(q!=m)
{
cout<<"\n matrix can,t be multiplied";
exit(0);
}
cout<<"\n enter matrix-A:\n";
for(i=0;i<p;++i)
{
for(j=0;j<q;++j)
cin>>a[i][j];
}
cout<<"\n enter matrix-B:\n";
for(i=0;i<m;++i)
{
for(j=0;j<n;++j)
cin>>b[i][j];
}
cout<<"\n multiplied matrix is as follows:";
for(i=0;i<p;++i)
{
cout<<"\n";
c[i][j]=0;
for(j=0;j<n;++j)
{
for(k=0;k<m;++k)
c[i][j]=c[i][j]+a[i][k]*b[k][j];
cout<<c[i][j]<<" ";
}
}
getch();
}
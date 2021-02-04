#include<iostream.h>
#include<process.h>
#include<conio.h>
void main()
{
clrscr();
int m,n;
int p,q;
int i,j,k;
int a[10][10],b[10][10],c[10][10];
cout<<"enter rows and columns for mattrix-A:";
cin>>m>>n;
cout<<"\n enter rows and columns for matrix-B:";
cin>>p>>q;
if(n!=p)
{
cout<<"\n matrix are not compatible for mutiplication";
exit(0);
}
cout<<"\n enter matrix-A\n";
for(i=0;i<m;++i)
{
 for(j=0;j<n;++j)
 cin>>a[i][j];
}
cout<<"\n enter matrix-b\n";
for(i=0;i<p;++i)
{
 for(j=0;j<q;++j)
 cin>>b[i][j];
}
cout<<"\n mutiplied matrix is as follows:\n";
 for(i=0;i<m;++i)
 {
  cout<<"\n";
  for(j=0;j<q;++j)
  {
   c[i][j]=0;
   for(k=0;k<n;++k)
   c[i][j]=c[i][j]+a[i][k]*b[k][j];
   cout<<c[i][j]<<" ";
  }
 }
getch();
}
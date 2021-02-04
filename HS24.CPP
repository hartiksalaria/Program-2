#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a[10][10],i,j,col,row,r[10],c[10];
cout<<"enter rows and columns for the matrix:";
cin>>row>>col;
cout<<"\n enter the matix:\n";
for(i=0;i<row;++i)
{
 for(j=0;j<col;++j)
 cin>>a[i][j];
}
for(i=0;i<row;++i)
{
 for(j=0;j<col;++j)          //  for row sum
 r[i]=r[i]+a[i][j];
}
for(j=0;j<col;++j)
{
 for(i=0;i<row;++i)
 c[j]=a[i][j]+c[j];          //   for column sum
}
for(i=0;i<row;++i)
cout<<"\n row sum for row "<<i+1<<" is "<<r[i];
for(j=0;j<col;++j)
cout<<"\n column sum for column "<<j+1<<" is "<<c[j];
getch();
}
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int search(int [],int,int);
int ar[20],i,n,Search,lsearch;
cout<<"how many elements you want to enter?";
cin>>n;
cout<<"\n enter elements of the array:";
for(i=0;i<n;++i)
cin>>ar[i];
cout<<"\n enter the element you want to enter:";
cin>>Search;
lsearch=search(ar,Search,n);
if(lsearch==-1)
cout<<"\n sorry given element is not found in the array";
else
cout<<"\n given element is found at the position:"<<lsearch+1;
getch();
}
int search(int a[20],int sar,int no)
{
for(int j=0;j<no;++j)
{
if(a[j]==sar)
return j;
break;
}
return -1;
}




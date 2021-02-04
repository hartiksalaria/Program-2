#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
void main()
{
clrscr();
unsigned int seedval;
time_t t;
int i;
seedval=(unsigned)time(&t);
srand(seedval);
for(i=1;i<=5;++i)
cout<<(rand())<<"\n";
getch();
}
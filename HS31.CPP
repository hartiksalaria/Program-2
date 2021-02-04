#include<iostream.h>
#include<conio.h>
#include<stdio.h>
struct student
{
char name[10];
int roll_no;
char grade;
int marks[5];
}learner;
void main()
{
clrscr();
int tot=0,avg;
cout<<"\n enter the name of the student:";
gets(learner.name);
cout<<"\n enter roll no:";
cin>>learner.roll_no;
cout<<"\n enter marks in 5 subjects";
for(int i=0;i<5;++i)
{
cout<<"\n subject "<<i+1<<":";
cin>>learner.marks[i];
tot=tot+learner.marks[i];
}
avg=tot/5;
if(avg<50) learner.grade='f';
else if(avg<70) learner.grade='c';
else if(avg<80) learner.grade='b';
else learner.grade='a';
cout<<"\n student,s result \n";
cout<<"\n";
cout<<"\n student,s name:";
puts(learner.name);
cout<<"\t roll no:"<<learner.roll_no;
cout<<"\n grade:"<<learner.grade;
getch();
}
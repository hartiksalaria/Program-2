#include<dos.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
for(int i=0;i<=350;++i)
{
line(100,200,100+i,200);
delay(20);
}
getch();
closegraph();
}
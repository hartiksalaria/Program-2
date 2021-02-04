#include<conio.h>
#include<dos.h>
#include<graphics.h>
void main()
{
int gdriver=DETECT,gmode;
initgraph(&gdriver,&gmode,"c:\\turboc3\\bgi");
for(int i=0;i<=150;i++)
{
circle(250,250,7+i);
delay(10);
cleardevice();
}
getch();
closegraph();
}
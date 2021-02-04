#include<graphics.h>
#include<dos.h>
#include<conio.h>
int  main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
for(int i=1;i<=400;++i)
{
line(0,400,800,400);
circle(75+i,390,10);
circle(200+i,390,10);
line(50+i,379,225+i,379);
line(50+i,379,50+i,345);
line(225+i,379,225+i,345);
line(50+i,345,95+i,345);
line(95+i,345,120+i,325);
line(120+i,325,150+i,325);
line(150+i,325,200+i,345);
line(200+i,345,225+i,345);
line(95+i,345,225+i,345);
cleardevice();
delay(10);
}
getch();
closegraph();
return 0;
}

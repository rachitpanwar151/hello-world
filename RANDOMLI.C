#include<stdio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
int gd =DETECT,gm;
initgraph(&gd,&gm,"c:\\tc\\bgi");
while(!kbhit())
{
setcolor(rand()%16);
line(rand()%600,rand()%400,rand()%600,rand()%400);
delay(100);
}
getch();
closegraph();

}
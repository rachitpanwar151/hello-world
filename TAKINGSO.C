#include<stdio.h>
#include<conio.h>
add(int,int);
add(int a,int b)
{
int c;
c=a+b;
return (c);
}
void main()
{
int x,y,s;
scanf("%d%d",&x,&y);
s=add(x,y);
printf("%d",s);
getch();
}
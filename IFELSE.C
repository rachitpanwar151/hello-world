#include<stdio.h>
#include<conio.h>
void main()
{
int a=10,b=40,c=30;
if(a>b&&a>c)
printf("a is greater");
else if (b>c&&b>a)
printf("b is greater");
else if(c>a&&c>b)
printf("c is greater");
else
printf("all are equal");
getch();
}
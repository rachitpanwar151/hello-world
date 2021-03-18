#include<stdio.h>
#include<conio.h>
void main()
{
int avg,a[20],i;
int sum=0;
printf("enter value in array");
for(i=0;i<=19;i++)
scanf("%d",&a[i]);
for(i=0;i<=19;i++)
{
printf("%d",a[i]);
}
for(i=0;i<=19;i++)
{
sum=sum+a[i];
}
avg=sum%20;
printf("sum=%d,avg=%d",sum,avg);
getch();
}
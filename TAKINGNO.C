#include<stdio.h>
#include<conio.h>
add()
{
int a,b,c;
printf("enter value");
scanf("%d%d",&a,&b);
c=a+b;
return (c);
}
void main(){
int s=add();
printf("%d",s);
getch();
}
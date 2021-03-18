#include<stdio.h>
#include<conio.h>
long factorial(int);
main()
{
factorial(5);
return(1);
}
long factorial(int n)
{
long fact;
if(n==0||n==1)
return(1);
else
fact=n*factorial(n-1);
return (fact);
}
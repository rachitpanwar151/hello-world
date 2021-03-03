#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
  char *a,*c,*b;
  char *x,*y;
  int d,e,f,g,h,z,r,t;
clrscr();
   printf("Enter your name:");
   gets(c);

    printf("Where you start your journey:");
  gets(a);

  printf("your destination:");
  gets(b);

   printf("Enter your journey date:");
   scanf("%d",&d);

   printf("Enter your journey month:");
   scanf("%d",&e);

   printf("Enter your journey year:");
   scanf("%d",&f);

    printf("Select your train timing:\n");
  printf("1.MORNING\n");
  printf("2.AFTERNOON\n");
  printf("3.EVENING\n");
  printf("4.NIGHT\n");
  printf("Select:");
  scanf("%d",&z);
  switch(z)
  {
  case 1:
  case 2:
  case 3:
  case 4:
  printf("....SELECT TRAIN....\n");
  printf("1.KATGODAM\n");
  printf("2.BHAGMATI EXPRESS\n");
  printf("3.CHAMBBAL EXPRESS\n");
  printf("Select your train:");
  scanf("%d",&r);
  switch(r)
  {
  case 1:
  printf("\tYou select KATGODAM EXPRESS\n");
  break;

  case 2:
  printf("\tYou select BHAGMATI EXPRESS\n");
  break;

  case 3:
  printf("\tYou select CHAMBBAL EXPRESS\n");
  break;
  }
}

 printf("Number of seat you reserved:");
  scanf("%d",&g);
  printf("....SELECT YOUR SEAT TYPE....\n");
  printf("1.3 tire AC\n");
  printf("2.2 tire AC\n");
  printf("3.Normal\n");
  printf("4.Sleeper\n");
  printf("Choose:");
  scanf("%d",&t);
  switch(t)
  {
   case 1:
   printf("You choose 3.tire AC\n");
   break;

   case 2:
   printf("You choose 2.tire AC\n");
   break;

   case 3:
   printf("You choose Normal seat\n");
   break;

   case 4:
   printf("You choose Sleeper block\n");
   break;
  }
  printf("\tYour name is:%s\n",c);
 printf("\tYour trip from:%s,%s\n",a,b);
 printf("\tYour trip date:%d,%d,%d\n",d,e,f);
 printf("\tYour total number of seat is:%d\n",g);
 printf("\tYour train code is:%d\n",rand);
 printf("\t...............THANKYOU FOR YOUR SUPPORT....................");
 getch();
}
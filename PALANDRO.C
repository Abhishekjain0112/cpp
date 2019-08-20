#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,n;
clrscr();
a=0;
printf("ENTER THE NUBER= ");
scanf("%d",&n);
c=n;
while(n!=0)
{
 a=a*10+(n%10);
 n=n/10;
}
 if(a==c)
  printf("\n\t Number Is Plaindrom");
  else
  printf("\n\t Number Is Not Plaindrom");
getch();
}
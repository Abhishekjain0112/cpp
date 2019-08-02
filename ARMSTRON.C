#include<stdio.h>
#include<conio.h>
void main()
{
int a=0,b,c,n;
clrscr();
 printf("Enter the number = ");
 scanf("%d",&n);
 c=n;
 while(n!=0)
 {
  b=n%10;
  a=a+b*b*b;
  n=n/10;
 }
 if(a==c)
 printf("\n\t Number is Armstrong");
 else
 printf("\n\t Number is not Armstrong=%d",a);

 getch();
}

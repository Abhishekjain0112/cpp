#include<stdio.h>
#include<conio.h>

void main()
{

   int a,b,c;
   clrscr();

   printf("Enter Two Number A&B\n");
   scanf("%d%d",&a,&b);
   c=a+b;
   textcolor(4);
   printf("\n\n\t\t Sum of A+B=%d",c);
   getch();
}

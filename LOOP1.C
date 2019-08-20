#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k,a;
clrscr();
for(i=1;i<=5;i++)
 {
    for(j=1;j<=5;j++)
     {
       if(j==2 && i==1 || j==2 && i==2 || j==4&& i==2 || i==2 && j==5 || j==2 && i==4 || j==4 && i==4 || j==4&& i==5)
       {
	 printf("   ");
       }
     //  if(j==2 && i==4 || j==4 && i==4 || j==4&& i==5)// || i==2 && j==5


       else
      printf(" * ");


     }

   printf("\n");
  }

getch();
}
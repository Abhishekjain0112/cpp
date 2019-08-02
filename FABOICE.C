#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,i,n;
clrscr();
a=-1;
b=1;
printf("Number of turms is series=");
scanf("%d",&n);
for(i=0;i<n;i++)
 {
   c=a+b;
   a=b;
   b=c;
   printf("\t%d",c);
 }
getch();
}
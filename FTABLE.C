#include<stdio.h>
#include<conio.h>
void table(int);
int add(int,int);
void main()
{
int a,b,d,i;
clrscr();
printf("ENTER THE NUMBER A=");
scanf("%d",&a);
printf("ENTER THE NUMBER B=");
scanf("%d",&b);

d = add(a,b);
printf("SUM A+B=%d\n",d);

 table(d);

 getch();
}


   void table(int d)
    {
    int i,c;
	for(i=1;i<=10;i++)
	 {
	  c=d*i;
	   printf("%d*%d=%d\n",d,i,c);
	 }
     }

   int add(int a, int b)
   {
    int q;
    q=a+b;
    printf("\nSUM=%d\n",q);
    return q;
   }
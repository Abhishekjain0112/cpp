
#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],b,c,i;
clrscr();
printf("Enter the Array :\n");
for(i=0;i<5;i++)
  {
   scanf("%d",&*(a+i));
  }

  b=a[0];
  c=0;
  for(i=1;i<5;i++)
   {
    if(b<a[i])
       {
	c=b;
	b=a[i];
       }
       if(a[i]>c &&a[i]<b)
      {
       c=a[i];
      }
   }

  printf("\n\t %d Is The Largest Element ",b);
    printf("\n\t %d Is The 2nd Largest Element ",c);




   b=a[0];
  c=a[4];
  for(i=1;i<5;i++)
   {
    if(b>a[i])
       {
	c=b;
	b=a[i];
       }
       if(a[i]<c &&a[i]>b)
      {
       c=a[i];
      }
   }

  printf("\n\t %d Is The smallest Element ",b);
    printf("\n\t %d Is The 2nd smallest Element ",c);



 getch();
}
#include<conio.h>
#include<stdio.h>
void main()
{
int x, min,i,j,n,a[5];
  clrscr();
printf("-------------Selection Sort-----------\n\n");
  printf("Enter Number Of Elements=");
  scanf("%d",&n);
printf("Enter The Elements in Array\n ");
for(i=0;i<n;i++)
{
    printf("->");
    scanf("%d",&a[i]);
}



for(i=0;i<n;i++)
{
min=i;

 for(j=1+i;j<n;j++)
  {
     if(a[j]<a[min])
       min=j;
  }
  x=a[i];
  a[i]=a[min];
  a[min]=x;

}

printf("\nSHOW_DATA\n");
for(i=0;i<n;i++)
{
    printf("  %d",a[i]);
}


getch();

}

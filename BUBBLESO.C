#include<conio.h>
#include<stdio.h>
void main()
{
int x,i,j,n,a[5];
  clrscr();
printf("-------------Bubble Sort-----------\n\n");
  printf("Enter Number Of Elements=");
  scanf("%d",&n);
printf("Enter The Elements in Array\n ");
for(i=1;i<n;i++)
{
    printf("->");
    scanf("%d",&a[i]);
}

for(i=0;i<n;i++)
{
//x=a[i];
 for(j=0;j<n-i;j++)
 {
   if(a[j]>a[j+1])
   {

       x=a[j];
       a[j]=a[j+1];
       a[j+1]=x;

   }
  }
}

printf("\nSHOW_DATA\n");
for(i=0;i<n;i++)
{
    printf("  %d",a[i]);
}


getch();

}

#include<conio.h>
#include<stdio.h>
void main()
{
int x,temp, min,i,j,n,a[5];
  clrscr();
printf("-------------Insertion Sort-----------\n\n");
  printf("Enter Number Of Elements=");
  scanf("%d",&n);
printf("Enter The Elements in Array\n ");
for(i=0;i<n;i++)
{
    printf("->");
    scanf("%d",&a[i]);
}



for(i=1;i<n;i++)
{
temp=a[i];
   j=i-1;

   while(j>=0 &&a[j]>temp )
   {
   a[j+1]=a[j];
   j=j-1;
   }
   a[j+1]=temp;

}

printf("\nSHOW_DATA\n");
for(i=0;i<n;i++)
{
    printf("  %d",a[i]);
}


getch();

}

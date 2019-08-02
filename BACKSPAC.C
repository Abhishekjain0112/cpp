#include<stdio.h>
#include<conio.h>
char str[50];
int count=0;
void main()
{    int i=0;
  clrscr();
  printf("Enter The String\n");
   gets(str);
  // gets();
   for(i=0;str[i]!=NULL;i++)
   {if(str[i]=='0E')
     count++;
    }
    printf(" \n total number of space is used is = %d",count);
    getch();
}
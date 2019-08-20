#include<stdio.h>
#include<conio.h>
void main()
{
char a;
int b,m,h,e,s,so,t,z=500,x,y;
clrscr();
printf("MARKSHEET\n");
printf("ENTER THE NAME=");
scanf("%c",&a);
printf("\n ENTER THE ROLL No.=");
scanf("%d",&b);
printf("\n MARKS OF MATHS=");
scanf("%d",&m);
printf("\n MARKS OF HINDI=");
scanf("%d",&h);
printf("\n MARKS OF SOCIAL=");
scanf("%d",&so);
printf("\n MARKS OF SCIENCE=");
scanf("%d",&s);
printf("\n MARKS OF ENGLISH=");
scanf("%d",&e);

 printf("\n\n NAME=%c",a);
 printf("\n ROLL no.=%d",b);
 printf("\n MARKS \n MATHS=%d",m);
 printf("\n ENGLISH=%d",e);
  printf("\n SOCIAL=%d",so);
  printf("\n SCIENCE=%d",s);
  printf("\n HINDI=%d",h);

   t=e+m+so+s+h;
   printf("\n TOTAL=%d/500",t);

  if(e>33 && m>33 && so>33 && s>33 && h>33)
  {
  printf("RESULT IS PASS ");
   x=(e+m+so+s+h)*100/500;
   printf("percntage =%d %",x);

  }




getch();
}
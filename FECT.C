
#include<conio.h>
#include<stdio.h>

void main()
{
int n;
clrscr();
n=m(3)+abc(4);
n=m(2)+n;
printf( "%d",n);
getch();

}

int m(int x)
{
int temp=3,i;
for(i=1;i<=x;i++)
{
temp=temp+abc(i+2);
}
return temp;

}




int abc(int m)
{
int t=2;
if(m%t!=0)
return m+t;
else
return m+t+3;

}
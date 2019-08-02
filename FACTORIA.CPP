#include<iostream.h>
#include<conio.h>
void main()
{
int c=0,a=1,n,i=1;
clrscr();
cout<<"factorial of a number=";
cin>>n;
  while(i<=n)
  {
  a=a*i;
  c=c+a;
  i=i+1;
  }
cout<<"FACTORIAL="<<a;
cout<<"\nsum ="<<c;
getch();

}
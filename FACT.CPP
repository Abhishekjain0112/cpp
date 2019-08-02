#include<iostream.h>
#include<conio.h>
int fact(int);
void main()
{
 int a,b,f;
 clrscr();
 cout<<"\nEnter  Number =";
 cin>>a;

 f=fact(a);
 cout<<"\n\nFactorial is = "<<f;
 getch();
}
 int fact(int x)
 {
   int i=1,c=1;
   if(x==1 || x==0)
    return (x);
     while(x>1)
     {
      c=c*x;

       x--;
      }
      return (c);

 }
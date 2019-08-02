#include<iostream.h>
#include<conio.h>
//int i,f1=1;
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
    int f1=1;
    if(x==1 || x==0)
       return (f1);

     if (x>1)
     f1=x*fact(x-1);

    return (f1);
 }
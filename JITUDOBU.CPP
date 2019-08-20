
#include<iostream.h>
#include<conio.h>

  class A{
public :
int a;
void get()
{
   cout<<"\n Enter the valyue of A= ";
   cin>>a;
}
 void dis()
 {
 cout<<" Veleue of A = "<<a;
 }

};
 class B{
public:
int b;
void get()
{
   cout<<"\n Enter the valyue of B= ";
   cin>>b;
}
 void dis()
 {
 cout<<" Veleue of B = "<<b;
 }

};
void main()
{ int sum;
   clrscr();
A o1;
B o2;
  o1.get();
  o1.dis();
  o2.get();
  o2.dis();
     sum=o1.a+o2.b;
   cout<<"Sum ="<<sum;
  getch();
}

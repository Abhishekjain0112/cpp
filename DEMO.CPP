#include<conio.h>
#include<iostream.h>
class demo
{ private:
  int a,b,c,d;

  public:
   demo (int a,int b,int c,int d)
   {
  this ->a=a;
   this->b=b;
  this ->c=c;
  this ->d=d;
   }

 void showData()
 {
  cout<<"\nA="<<a<<"\nB="<<b<<"\nC="<<c<<"\nD="<<d;

 }

 public:
 void add(int a,int b,int c=0,int d=0)
 {

  this ->a=a;
   this->b=b;
  this ->c=c;
  this ->d=d;

    cout<<"\n\nResult is ="<<a+b+c+d;
 }


};
 void main()
 {
 clrscr();
   demo obj(10,20,30,40);
   obj.showData();
   obj.add(10,20,40,71);
   obj.showData();
   getch();

 }

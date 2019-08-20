#include<iostream.h>
#include<conio.h>
void swap(int* , int*);
void main()
{
  int a,b,c;
  clrscr();
   cout<<"Enter 2 numbers"<<endl;
   cin>>a>>b;
   cout<<"\n before swap \n"<<"\na="<<a<<"\nb="<<b;
   swap(&a,&b);
   cout<<"\n After swap \n"<<"\na="<<a<<"\nb="<<b;
   getch();
 }
  void  swap(int *a, int *b)
  {
  int temp;
    temp=*a;
    *a=*b;
    *b=temp;


  }
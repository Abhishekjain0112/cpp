#include<iostream.h>
#include<conio.h>
# define MAX 5
int i,n=5;
void input(int[]);
void show(int[]);
void main()
{
  int a[5],b,c;
  clrscr();
  cout<<"\nEnter the valuve in array\n";
   input(a);

  cout<<"\n array is = \n";
     show(a);

   cout<<"\nEnter the number for insertion = ";
   cin>>b;
   cout<<"\n Enter the position";
   cin>>c;

     for(i=n;i>=c;i--)
      a[i+1]=a[i];

      a[c]=b;
      n=n+1;
     show(a);

  getch();
}
   void input(int a[])
   {
       for(i=0;i<n;i++)
    cin>>a[i];
   }

   void show(int a[])
   {
    for(i=0;i<n;i++)
    cout<<"\n"<<*(a+i);

   }
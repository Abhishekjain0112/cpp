#include<iostream.h>
#include<conio.h>
# define MAX 5
int i,n=5;
void input(int[]);
void show(int[]);
int linear(int[] ,int );
void main()
{
  int a[MAX],b,c,key;
  clrscr();
  cout<<"\nEnter the valuve in array\n";
   input(a);

  cout<<"\n array is = \n";
     show(a);
   cout<<"\nEnter The KEY To Find=";
   cin>>key;

  b= linear(a,key);
   if(b==-1)
   cout<<"\n KEY NOT FOUND" ;
   else
   cout<<"KEY FOUND AT ="<<"a["<<b<<"]";

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

     int linear(int a[],int key)
     {
      int i;
	for(i=0;i<MAX;i++)
	{
	  if(a[i]==key)
	   return (i);
	}
	   return (-1);

     }

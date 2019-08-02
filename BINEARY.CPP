#include<iostream.h>
#include<conio.h>
# define MAX 5
int i,n=5;
void input(int[]);
void show(int[]);
int bineary(int[] ,int,int,int );
void main()
{
  int a[MAX],b,c,key,l,u;
  clrscr();
  l=0;
  u=MAX;
  cout<<"\nEnter the valuve in array\n";
   input(a);

  cout<<"\n array is = \n";
     show(a);
   cout<<"\nEnter The KEY To Find=";
   cin>>key;

  b= bineary(a,l,u,key);
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

     int bineary(int a[],int l,int u,int key)
     {
      int mid;

	  while(l<=u)
	  {
	     mid=(l+u)/2;
	     if (a[mid]==key)
	       return (mid);

	     if(a[mid]<key)
	       l=mid+1;

	     if (a[mid]>key)
		u=mid-1;
	  }
	  return(-1);
     }

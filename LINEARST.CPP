#include<conio.h>
#include<iostream.h>
#define MAX 5
void input(int []);
void output(int []);
int linears(int[],int);
void main()
{
 int a[MAX],b,c,key;
   clrscr();
  cout<<"Enter The Array";
  input(a);
  cout<<"The Array Is ";
  output(a);
  cout<<"Enter The Key";
  cin>>key;
   b= linears(a,key);
  if (b==-1)
  cout<<"Element Not Found";
   else
   cout<<"The nmber at a["<<b<<"]";


 getch();
}

  void input(int a[])
  {
    int i;
    for(i=0;i<MAX;i++)
     cin>>a[i];
  }

   void output(int a[])
   {
     int i;
     for(i=0;i<MAX;i++)
     cout<<a[i];
   }

   int linears(int a[],int key)
  {
     int i;
     for(i=0;i<MAX;i++)
     {
	if(a[i]==key)
	    return i;

     }
	 return (-1);


  }


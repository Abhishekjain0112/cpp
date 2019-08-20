#include<iostream.h>
#include<conio.h>

void main()
{
int i,n,k,m,j;
clrscr();

cout<<"Enter the Value Of n :  ";
cin>>n;

for(i=0;i<n;i++)
{
     for(j=0;j<n-i;j++)
	       {
	       cout<<" ";
	       }

      for(k=0;k<=i;k++)
     {
	      if(k==0 || i==0)
	      {
	      m=1;
	      cout<<"1 ";
	      }
	     else
	     {
	     m=m*(i-k+1)/k;
	     cout<<m<<" ";
	     }

      }

     cout<<"\n";
}


getch();


}
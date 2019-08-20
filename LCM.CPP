#include<iostream.h>
#include<conio.h>

void main()
{
int i=2,a,b,m1,m2,lcm=0,t;

clrscr();
  cout<<"\nEnter First Number  :   ";
	  cin>>a;


  cout<<"\nEnter Second Number  :   ";
	  cin>>b;


  if(a>b)
  {
    m1=a;
    m2=b;
  }
   else
  {
  m1=b;
  m2=a;
  }

  if(m1%m2==0)
  {
  lcm=m1;
  }
  else{
  t=m1*m2;
  lcm=t;
       i=m2;
  while(i<=t)
  {
      if(i%m1==0 && i%m2==0)
       {
       lcm=i;
       break;
       }
 //cout<<i;

	 i++;
  }
 }
     cout<<"LCM OF GIVEN NUMBER : "<<lcm;




 getch();
}
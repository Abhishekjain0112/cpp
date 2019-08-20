	#include<iostream.h>
	#include<conio.h>


	void main()
	{
      //	int d=5,m=10,y=4055,c=0,val;

       //	val=(d+m+y+(y/4)+c)%7 ;

       //	cout<<val;

       int count=0,l=56,t=96;
	   while(l<t)
	   {
	   l=l+4;
	   t=t-2;
	   count++;
	   }
		 cout<<"  \t"<<count;

	getch();
	}
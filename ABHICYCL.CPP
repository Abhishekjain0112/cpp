
#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <dos.h>

int main(void)
{
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;
   int t,xmax,x=50,y=40,c,i, ymax;
   clrscr();

   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "c:/turboc3/bgi");
   c=getmaxcolor();

  // cout<<"Abhishek";
   for(i=0,c=0;i<=360;c++,i++){

//  setcolor(7);
   printf("Abhishek");
  cleardevice();
  setcolor(i);
  setbkcolor(c);
  if(c>17)
  c=0;
  line(10,400,630,401);


  setcolor(i);
		    setcolor(7);
  setfillstyle(2,5);
    circle(150+i,370,30);
   fillellipse(150+i,370,30,30);

  circle(40+i,370,30);
   fillellipse(40+i,370,30,30);

    setcolor(i);

  line(40+i,370,100+i,370);
  line(40+i,370,60+i,340);
  line(100+i,370,120+i,340);
line(120+i,340,60+i,340);

  line(60+i,340,60+i,335);
  line(55+i,335,60+i,335);
  line(150+i,370,100+i,320);

  line(100+i,320,90+i,320);

  delay(1);
  }
   printf("Abhishek");

   getch();
   closegraph();
   return 0;
}


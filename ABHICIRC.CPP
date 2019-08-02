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
	printf("Abhishek");
      setcolor(7);
      circle(100,190,70);
      setfillstyle(7,5);
      floodfill(100,190,7);
	 setcolor(7);
     for(i=0;i<96;i++)
     {
     setcolor(9);
      circle(500,200,i);
       i=i+10;
      }

   getch();
   closegraph();
   return 0;
}


#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
int main(void)
{
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;
   int xmax, ymax;
   clrscr();
   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "c:/turboc3/bgi");
	  outtextxy(100, 100, "jiya");
	 setcolor(5);
      circle(200,300,70);
      setfillstyle(SOLID_FILL,8);
      setcolor(10);
      circle(180,280,7);
      setcolor(10);
      circle(220,280,7);
      setcolor(6) ;
      arc(200,300,2000,-10,50);


   getch();
   closegraph();
   return 0;
}


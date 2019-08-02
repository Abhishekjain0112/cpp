//Smily
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
   setcolor(3);
	 setcolor(5);
      circle(500,300,70);
      setfillstyle(SOLID_FILL,8);
      setcolor(10);
      circle(480,280,7);
      setcolor(10);
      circle(520,280,7);
      setcolor(6) ;
      arc(500,300,2000,-10,50);

 outtextxy(400, 400, "Abhishek");

   getch();
   closegraph();
   return 0;
}


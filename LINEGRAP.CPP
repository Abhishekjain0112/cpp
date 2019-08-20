//Line
#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main(void)
{
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;
  // int xmax, ymax;
   clrscr();

   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "c:/turboc3/bgi");
   setcolor(1);//blue
   line(200,200,500,200);

   setcolor(2);//green
   line(200,250,500,250);

   setcolor(3);//lightblue
   line(200,300,500,300);

setcolor(4);//red
   line(200,350,500,350);

setcolor(5);//purple
   line(200,400,500,400);



   getch();
   closegraph();
   return 0;

   }
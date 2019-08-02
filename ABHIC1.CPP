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
     setcolor(9);
      circle(200,200,70);
   getch();
   closegraph();
   return 0;
}


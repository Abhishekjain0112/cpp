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
   line(200,200,100,100);

   setcolor(10);
//   floodfill(4,4,4);
    fill_patterns(5,6,5,4);
      setcolor(9);
      circle(200,200,30);

	 setcolor(5);
      circle(200,200,20);

	 setcolor(10);
      circle(200,200,40);




	 setcolor(5);
      circle(500,300,70);

      setfillstyle(SOLID_FILL,8);
      setcolor(10);
      circle(480,280,7);
      setcolor(10);
      circle(520,280,7);



      setcolor(6) ;
      arc(500,300,2000,-10,50);




   putpixel(50,50,100);



	   setcolor(5);

   arc(300,300,120,86,60);











   // settextstyle(TRIPLEX,0,5);

   outtextxy(400, 400, "This is a test.");



   getch();
   closegraph();
   return 0;
}


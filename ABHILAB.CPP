// cycle and ellipse


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
   initgraph(&gdriver, &gmode, "c:/tc/bgi");
   c=getmaxcolor();
   for(i=0,c=0;i<=360;c++,i++){

//  setcolor(7);

  cleardevice();
  setcolor(i);
  setbkcolor(c);
  if(c>17)
  c=0;
  line(10,400,630,401);


  setcolor(i);
		    setcolor(7);
 //   floodfill(150+i,370,5);

 // circle(40+i,370,30);
  setfillstyle(7,4);

 //   for(t=0;t<30;t++){
    circle(150+i,370,30);
   fillellipse(150+i,370,30,30);
 //  floodfill(150+i,370,7);

  circle(40+i,370,30);
   fillellipse(40+i,370,30,30);

    setcolor(i);
  //		     setcolor(9);


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


  //line(40,370,100,370);



      /*


  // setcolor(3);
 //  line(200,200,100,100);

 //  setcolor(10);
//   floodfill(4,4,4);
   // fill_patterns(5,6,5,4);

      setcolor(7);
      circle(100,190,50);
      setfillstyle(7,5);
      floodfill(100,190,7);
	 setcolor(7);


     for(i=0;i<46;i++)
     {setcolor(9);
      circle(200,200,i);
      }




    //  setcolor(8);
  //    floodfill(550,250,8);
      setfillstyle(2,3);
     // fillellipse(350,200,50,25);
       circle(550,250,50);


      setcolor(4);
      circle(200,200,42);

	*/


   getch();
   closegraph();
   return 0;
}


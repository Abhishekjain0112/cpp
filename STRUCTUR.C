#include<stdio.h>
#include<conio.h>
#include<string.h>
struct employee
 {
  int number;
  char name[50];
  int esal;

 };
    void printemployee(struct employee *obj[]); //function declaration
   int i;     //globel
  void main()
  {
   struct employee obj[3];      //object
   clrscr();

   for(i=1;i<3;i++)
   {
   printf("Enter details %d \n",i);
   printf("\n ENTER Number = ");
   scanf("%d",&obj[i].number);
   printf("\n Enter name = ");
   gets(obj[i].name);
   gets(obj[i].name);
   printf("\n Enter Salary=");
   scanf("%d",&obj[i].esal);
   }
   printemployee(&obj);       //Calling of funtion
   getch();
  }

   void printemployee(struct employee *obj[3])    // function defination
   {
   for(i=1;i<3;i++)
   {
   printf("\n\n Details->");
   printf("\nNumber is=%d",obj[i]->number);
   printf("\nName is=%s",obj[i]->name);
   printf("\n Salary=%d",obj[i]->esal);
  }

 }
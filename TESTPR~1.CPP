#include <stdio.h>

#include <string.h>

#include <stdlib.h>
#include <conio.h>

void myfunc(char** param){

//++param;
*param="abhi";
printf("%s", **param);

}

void  main(){
     clrscr();
char* string = (char*)malloc(64);

strcpy(string, "hello_World");

myfunc(&string);

myfunc(&string);

printf("%s", string);

// ignore memory leak for sake of quiz

//return 0;
 getch();
}
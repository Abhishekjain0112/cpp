#include<conio.h>
#include<iostream.h>
#include<string.h>
void main()
{
char c[10];
int l;
clrscr();
int length(char[]);
cout<<"\nENTER THE STRING=" ;
cin>>c;
cout<<"\n"<<c;
l=length(c);
cout<<"\n"<<l;
cout<<"\n\n "<<strlen(c)<<"\n"<<strupr(c);
getch();
}
int length(char b[])
{
int i,p;
for(i=0,p=0;b[i]!='\0';i++)
 p++;
return (p);
}
#include<iostream.h>
#include<conio.h>
int fab(int);
void main()
{
int n,c,i=1;
clrscr();

 cout<<"Enter the n=";
 cin>>n;
 for (c=0;c<=n;c++)
 {
 cout<<"\t"<<fab(i);
 i++;
 }

 getch();
}
  int fab(int n)
  {
    if(n==1)
    return 1;
    else if(n==0)
    return 0;

    else
    return (fab(n-1)+fab(n-2));
  }
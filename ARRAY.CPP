#include<iostream.h>
#include<conio.h>
# define MAX 5
void main()            // linear search of array
{
int a[MAX],key,res;
clrscr();
void setvalue(int[]);
void display(int[]);
int linearsearch(int[],int);

  setvalue(a);
  display(a);
  cout<<"\nENTER THE KEY=";
  cin>>key;
  res = linearsearch(a,key);
  if (res==-1)
  cout<<"\nElement Not Found";
  else
  cout<<key<<"\nfound"<<res;
  getch();
}
 int linearsearch(int b[],int key)
  {
  int i;
  for(i=0;i<MAX;i++)
    {
    if(b[i]==key)
    return(i);
    }
    return(-1);
  }
   void setvalue(int b[])
   {
   int i;
    for (i=0;i<MAX;i++)
    {
     cout<<"\nENTER THE NUMBER=";
     cin>>b[i];
    }
   }
    void display(int b[])
     {
      int i;
      for(i=0;i<MAX;i++)
      cout<<"\n"<<b[i];
     }

#include<iostream.h>
#include<conio.h>

void main()
{
int i,j,k,l,n,m;

clrscr();
    cout<<"Enter the value of n";
    cin>>n;

for(i=1;i<=n;i++)
{

  for(j=1;j<=i;j++)
  {
   cout<<j;
  }

for(k=i;k<n;k++)
{
 cout<<" ";
}
for(l=n;l>i;l--)
  {
    cout<<" ";
  }

for(m=i;m>=1;m--)
{
    cout<<m;
}

 cout<<"\n";
}
getch();
}
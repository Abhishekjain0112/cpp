#include <iostream>
#include<string.h>
using namespace std;

void printmat(int mat[10][10],int n)
{
    int i,j;
    cout<<"\n";
    for(i=0;i<n;i++)
        {for(j=0;j<n;j++)
        {
             cout<<mat[i][j]<<"       ";
        }
        cout<<"\n";
        }
}

void chakravyuh(int mat[10][10],int n)
{
    int c=1,i,j,man,even,odd,round,maxround,powerpoint,pp,sqr;
     sqr=n*n;

    if(n%2==0)
    {
        maxround=n/2;

    }else {  maxround=(n/2)+1;   }

cout<<"roun = "<<maxround;
for(round=0;round<maxround;round++)
    {
          i=round;

     if(c==sqr)
          mat[maxround-1][maxround-1]=c;

      cout<<"\nround :"<<round+1<<" ";

        for(j=round;j<n-1-round;j++)
        {

           cout<<"\n\t"<<c;
        mat[i][j]=c;
        c++;

        if(c>sqr)break;
        }
           cout<<"\n :next loop  ";


            for(i=round;i<n-1-round;i++)
        {
                     cout<<"\n\t"<<c;

        mat[i][j]=c;
        c++;
  if(c>sqr)break;

        }


           cout<<"\n :next loop  ";
            for(j=i;j>round;j--)
        {       cout<<"\n\t"<<c;

        mat[i][j]=c;
            c++;if(c>sqr)break;
        }


           cout<<"\n :next loop  ";
        for(i=i;i>round;i--)
          {              cout<<"\n\t"<<c;
              mat[i][j]=c;
              c++;if(c>sqr)break;
          }


           cout<<"\n :next loop  ";


     }
printmat(mat,n);
    }


int main()
{

   int q;
   int mat[10][10];
    cout<<"Welcome to chakrviuyu : ";
    cout<<"Enter The  Number  n :" ;
    cin>>q;

//printmat(mat,q);
   chakravyuh(mat,q);

}

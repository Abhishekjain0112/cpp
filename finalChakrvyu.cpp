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
             cout<<mat[i][j]<<"          ";
        }
        cout<<"\n";
        }
}

void chakravyuh(int mat[10][10],int n)
{
    int c=1,i,j,round,maxround,powerPointCountIndex=0,sqr;
     sqr=n*n;

    int point[20];

    point[powerPointCountIndex++]=0;

    point[powerPointCountIndex++]=0;



    if(n%2==0)
    {
        maxround=n/2;

    }else {  maxround=(n/2)+1;   }

//cout<<"roun = "<<maxround;
for(round=0;round<maxround;round++)
    {
          i=round;

     if(c==sqr)
          mat[maxround-1][maxround-1]=c;

    //  cout<<"\nround :"<<round+1<<" ";

        for(j=round;j<n-1-round;j++)
        {
if(c%11==0){  point[powerPointCountIndex++]=i; point[powerPointCountIndex++]=j;        }


         //  cout<<"\n\t"<<c;
        mat[i][j]=c;
        c++;

        if(c>sqr)break;
        }
           //cout<<"\n :next loop  ";


            for(i=round;i<n-1-round;i++)
        {
if(c%11==0){  point[powerPointCountIndex++]=i; point[powerPointCountIndex++]=j;        }

                  //   cout<<"\n\t"<<c;

        mat[i][j]=c;
        c++;
  if(c>sqr)break;

        }


        //   cout<<"\n :next loop  ";
            for(j=i;j>round;j--)
        {
if(c%11==0){/*cout<<"\n i and j :" <<i<<" "<<j;*/  point[powerPointCountIndex++]=i; point[powerPointCountIndex++]=j;        }

        mat[i][j]=c;
            c++;if(c>sqr)break;
        }


          // cout<<"\n :next loop  ";
        for(i=i;i>round;i--)
          {//              cout<<"\n\t"<<c;
  if(c%11==0){//cout<<"\n i and j :" <<i<<" "<<j;
   point[powerPointCountIndex++]=i; point[powerPointCountIndex++]=j;        }

              mat[i][j]=c;
              c++;if(c>sqr)break;
          }


       //    cout<<"\n :next loop  ";


     }
printmat(mat,n);

  cout<<" Total Power Point : "<<maxround<<"\n";


  for(i=0;i<maxround*2;)
{
     cout<<" ("<<point[i++]<<",";
     cout<<point[i++]<<")\n";
    }


/*
for(i=0;i<maxround*2;i++){
    cout<<"\n i :"<<i<<" value : "<<point[i];
    i++;
    cout<<"\n i :"<<j<<" value : "<<point[i];

}*/

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

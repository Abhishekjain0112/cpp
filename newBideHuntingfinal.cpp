

#include <iostream>
#include<string.h>
using namespace std;


int mat[100][100]={
{1,0,1 ,1, 0, 1, 1, 1, 1}
,{0, 0, 0, 1, 0, 1, 1, 0, 1}
};



/*
int mat[100][100]={
 {1,0,1 ,1, 1, 1, 1, 1, 1}
,{0, 0, 1, 1, 1, 1, 1, 1, 0}
,{0, 0, 1, 1, 1, 1, 1, 1, 1}

};

*/

int val[100][100];
int m=2,n=9;

int getQuality(int x,int y);
void viewMatrix();

void setValue()
{
 //  cout<<"set Value";
    int i,j,k,z,count1;

     for(i=0;i<m;i++)
     {
         count1=0;

         for(j=0;j<n;j++)
         {
             if(i==0 && j==0)
                 continue;


            if(mat[i][j]==1)
            {


             count1=0;

          count1=count1+getQuality(i,j+1);
          count1=count1+getQuality(i,j-1);
          count1=count1+getQuality(i+1,j);
          count1=count1+getQuality(i-1,j);
          count1=count1+getQuality(i-1,j-1);
          count1=count1+getQuality(i+1,j+1);
          count1=count1+getQuality(i-1,j+1);
          count1=count1+getQuality(i+1,j-1);

          val[i][j]=count1;
            }

         }
     }
}

int getQuality(int x,int y)
{
    int count2=0;
    int p,q;

  // cout<<"\n    getQuality 2";

     p=x; q=y;
      if(x>=0 && y>=0 && y<n && x<m)
         {
             if(mat[x][y]==1)
                count2++;
         }
    return count2;
}



void viewinputMatrix()
{
    cout<<"\n  View input Matrix ";
    cout<<"\n";
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<mat[i][j];
        }
            cout<<"\n";
    }

}







void viewMatrix()
{
     cout<<"\n    View Quality Matrix ";
    cout<<"\n";
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<val[i][j];
        }
            cout<<"\n";
    }

}


int findHighest(int p,int q,int maxqul)
{
    // cout<<"\n    View Quality Matrix ";
    cout<<"\n :";
    int i,j,max1=0;

    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
               if(val[i][j]>=maxqul)
                    continue;


           if( max1<val[i][j])
           {
               max1=val[i][j];
          }
        }
            //cout<<"\n";
    }
    cout<<max1;
    return max1;

}

//char p[100][100];












/*
int changMatrix(int p,int q,int delqual)
{
    int i,j;

    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
           if( val[i][j]==delqual)
           {

              val[i][j]=0;

           }

           }
        }
}
*/


int getShortestpath(int p,int q,int qual)
{
    int i,j,mindistance=q,distance=0,mini,minj;
  int maxquality;

    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
           if( val[i][j]==qual)
           {
               if(i>j)
               {
                  distance=i;
               }
               else{
                distance=j;
               }
              // cout<<" \t distance :"<<distance<<"  min :"<<mindistance;

         if(mindistance>=distance)
            {
                if(mindistance==distance)
                {
                     cout<<"\n  Polygany is not allow  for"<<mindistance<<"\n";
                     //cout<<"\n"<<"minimum distance : "<<mindistance;
                     maxquality=findHighest(p,q,qual);

                     getShortestpath(p,q,maxquality);

                    return 0;


                }
                mindistance=distance;
                mini=i;
                minj=j;


            }
        }



        }

    }
cout<<"\n"<<"minimum distance : "<<mindistance <<"   i = "<<mini<<"  j ="<<minj;

return mindistance;

}



int main()
{
    int num,maxquality;
    cout<<"Enter the number of row: ";
     cout<<"Enter the number of col: ";

    setValue();
   viewinputMatrix();
    viewMatrix();
  maxquality= findHighest(m,n,9);

getShortestpath(m,n,maxquality);

    return 0;
}

#include <iostream>
#include<string.h>
using namespace std;

//int[2][2] getBishopArray(char chessBord[][8],char chessSet[] ,int n );
//void getBishopArray(char chessBord[][8],char chessSet[] ,int n );



int setMoves(char chessBoard[][8],int bishopArray[][2]);
void setDirection(char chessBoard[][8],int bx,int by,int setno);

void getBishopArray(char chessBord[][8],int bishopArray[][2],char chessSet[] ,int n );

void ShowBord(char chessBord[][8]);
void showSet(char chessSet[],int n);
void makeBoard(char chessBord[][8],char inputString[],int length);


int  main(){
//char chessSet[74]="rnbqkbnr/pppppppp/8/8/8/8/PPPPPPPP/RNBQKBNR w";
//char chessSet[74]="rnbqkbnr/pppppppp/8/8/4P3/8/PPPP1PPP/RNBQKBNR b";
//char chessSet[74]="3k4/8/8/2P1P3/3B4/2R1R3/8/4K3 w";

//char chessSet[74]="3k4/8/8/8/3B4/8/8/4K3 w";

//char chessSet[74]="3k4/7b/8/8/3B4/8/8/1B2K3 b";
char chessSet[74]="3k4/8/8/8/3B4/8/8/1B2K3 w";

int bishopArray[][2]={-1,-1,-1,-1};
//int n=66;
int length=strlen(chessSet);
cout<<"\n length = "<<length;
showSet(chessSet,length);
char chessBord[8][8];
// makeBoard()
makeBoard(chessBord,chessSet,length);
ShowBord(chessBord);
getBishopArray(chessBord,bishopArray,chessSet,length);



cout<<endl<<"\t\t";
int i,j;
    for(i=0;i<2;i++)
    for(j=0;j<2;j++){cout<<bishopArray[i][j]<<" ";}

cout<<endl;


setMoves(chessBord,bishopArray);
cout<<endl;
cout<<endl;
ShowBord(chessBord);






return 0;
}


void makeBoard(char chessBord[][8] ,char inputString[],int length) {

  int i=0,j=0,k=0,l,m;
  char position,r,s;
  for(k=0;k<length-2;k++)
   {
     position=inputString[k];

         if(position=='/')
          {
              i++;
              j=0;
              continue;
          }
       else if((position>'a' && position<'z' ) ||(position>'A')&&(position<'Z'))
       {
        chessBord[i][j]=position;
           j++;
       }

     else if(position>'0' && position<='9')
       {

         for(r='0';r<position;r++)
          {
            chessBord[i][j]=' ';
            j++;
          }



       }


   }

   cout<<"\n";
}




void showSet(char chessSet[] ,int n )
{
    cout<<endl;
int i,j;
for(i=0;i<n;i++)
{
    cout<<" "<<chessSet[i];
}

cout<<"\n Chance of    : "<<chessSet[n-1];

}


void ShowBord(char chessBord[][8])
{
    cout<<"\n";
    int i,j;
    for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
        {
            cout<<" "<<chessBord[i][j];
        }
            cout<<endl;
    }

}


void getBishopArray(char chessBord[][8],int bishopArray[][2],char chessSet[] ,int n){
    int i,j,k,l=0,m=0;
  cout<<endl;
  //cout<<"\n Chance of    : "<<chessSet[n-1];
   if(chessSet[n-1]=='w')
     {
         //chance of white

         for(i=0;i<8;i++)
         {
             for(j=0;j<8;j++){

                if(chessBord[i][j]=='B')
                {
                    bishopArray[l][m++]=i;
                    bishopArray[l][m]=j;
                    l++;
                    m=0;
                }

             }
         }

     }
    else if(chessSet[n-1]=='b'){
         for(i=0;i<8;i++)
         {
             for(j=0;j<8;j++){

                if(chessBord[i][j]=='b')
                {
                    bishopArray[l][m++]=i;
                    bishopArray[l][m]=j;
                    l++;
                    m=0;
                }

             }
         }
    }

else cout<<"\n!!!!!!!!!Bishops position set !!!!!!!!!!\n";



 }




 void setPositions(char chessBoard[][8],int bishopArray[][2])
{
    int i=0,j=0,k,p,q,bi,bj;

   while(1)
 {
       if(bishopArray[i][j]==-1 || i>1)break;


        bi=bishopArray[i][j++];
        bj=bishopArray[i][j];
       j=0;
       i++;




 }


}


int setMoves(char chessBoard[][8],int bishopArray[][2]){


int i,j,k,bx,by,co=1;
char ch,ch2;
//bishop count
int bishops=0;
if(bishopArray[0][0]!=-1 && bishopArray[0][1]!=-1) bishops++;
if(bishopArray[1][0]!=-1 && bishopArray[1][1]!=-1) bishops++;

if(bishops==0){
    cout<<"Their is no bishop in the chess board";
    return -1;
}


  cout<<"\n\t ----Output----- ";

cout<<"\n[";
 for(i=1;i<=bishops;i++)
 {
    bx=bishopArray[i-1][0];
    by=bishopArray[i-1][1];
   setDirection(chessBoard,bx,by,i);
//cout<<"\n\n";
   for(k=0;k<8;k++)
   {
       for(j=0;j<8;j++){
        if(chessBoard[k][j]==i+'0'){

             if(co==0)cout<<",";

        ch=by+'a';
        ch2=j+'a';
            cout<<ch<<8-bx<<ch2<<8-k;
         co=0; }


       }
   }


 }cout<<"]";









return 1;


}

void setDirection(char chessBoard[][8],int bx,int by,int setno){

int i,j,k,x,y;
char s='0'+setno;


      //for left up dignoal

      x=bx;      y=by;
  x--;y--;
       while(x>-1 && y>-1){

          if(chessBoard[x][y]==' ')
             chessBoard[x][y]=s;
          else break;   x--;y--; }


          // top right
 x=bx; y=by;
 x--;y++;
       while(x>-1 && y<8){

          if(chessBoard[x][y]==' ')
             chessBoard[x][y]=s;
          else break;  x--;y++; }



          //bottom left


 x=bx; y=by;
//cout<<"\n\t\t\t\t bx="<<x<<"  y="<<y;
x++;y--;
      while(x<8 && y>-1){

//          cout<<"\n\t x="<<x<<"  y="<<y;

          if(chessBoard[x][y]==' ')
             chessBoard[x][y]=s;
          else break;

          x++;y--;
          }

              //bottom Right

 x=bx; y=by; x++;y++;

       while(x<8 && y<8){

          if(chessBoard[x][y]==' ')
             chessBoard[x][y]=s;
          else break;   x++;y++;}



}








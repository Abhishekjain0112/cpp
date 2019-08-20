void main()
{
int i,j,k;
clrscr();
for(i=70;i>=65;i--)
 {
    for(j=i;j>=65;j--)
    {
       printf("%c",j);
    }
    printf("\n");
    for(k=70;k>=i;k--)
    {
    printf(" ");
    }


  //  printf("\n");
 }
    getch();

}
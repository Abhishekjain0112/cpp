void main()
{
int i,j,k,l;
clrscr();
for(i=71;i>=65;i--)
 {   for(l=65;l<=i;l++)
     {
      printf("%c",l);

     }
     for(k=70;k>=i;k--)
    {
    printf("  ");
    }

    for(j=i;j>=65;j--)
    {
       if(j==71 && i==71);
      else
       printf("%c",j);
    }
    printf("\n");


  //  printf("\n");
 }
    getch();

}
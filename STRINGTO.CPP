#include<iostream.h>
#include<conio.h>
 #include<conio.h>
 #include<String.h>
 void main()
 {
 char ch[100];
 int i,j,k;
 clrscr();
 cout<<"Enter the String :\n"   ;
 cin>>ch;
// cin>>i;
// cout<<ch;
// cout<<strlen(ch);
// out<<"\n"<<i;

 for(i=0;ch[i]!='\0';i++)
 {
    if(ch[i]>='a' && ch[i]<='z')
    {
      ch[i]=(ch[i]-32);
    }
    else
    {
      ch[i]=(ch[i]+32);

    }

 }
    cout<<ch;
 //gets(ch);
 //puts(ch);



 getch();

 }
#include<iostream.h>
#include<conio.h>

struct tax{
float sal,cptlgain,age,pf,ppf,insu,taxfix,elss,d80,g80;
char gender[5];
};
void main()
{
 struct tax  s;
 clrscr();
 cout<<"\n\t Salary       =";
 cin>>s.sal;

 cout<<"\n\t Capital Gain =";
 cin>>s.cptlgain;

 cout<<"\n\t Age          =";
 cin>>s.age;

 cout<<"\n\t Gender       =";
 cin>>s.gender;

 cout<<"\n\t PF           =";
 cin>>s.pf;

 cout<<"\n\t PPF          =";
 cin>>s.ppf;


 cout<<"\n\t Insurance    =";
 cin>>s.insu;

 cout<<"\n\tTax Saving fix deposit =";
 cin>>s.taxfix;
 cout<<"\n\t ELSS        =";
 cin>>s.elss;

 cout<<"\n\t 80 D(Medical) =";
 cin>>s.d80;
 cout<<"\n\t 80 G(charity) =";
 cin>>s.g80;


 getch();
}
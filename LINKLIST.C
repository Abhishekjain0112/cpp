#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
};
struct node *first=NULL;
struct node *last=NULL;

struct node* creatnode()
{
return((struct node*)malloc(sizeof(struct node*)));
}
void insertion(int p)
{
struct node *temp=creatnode();
temp->data=p;
temp->next=NULL;
if(first==NULL)
{
first=temp;
last=temp;
}
else{
last->next=temp;
last=temp;
}
}

void show()
{
struct node *temp1;
temp1=first;
while(temp1!=NULL)
{
printf("\t %d",temp1->data);
temp1=temp1->next;
}
}



void main()
{
clrscr();
insertion(10);
insertion(20);
insertion(30);
insertion(40);
insertion(50);
insertion(70);
show();
getch();

}






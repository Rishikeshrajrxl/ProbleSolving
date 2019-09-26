# include<stdio.h>
# include<conio.h>
# include<iostream.h>
# include<stdlib.h>
struct node
{
int data;
struct node *next;
};
struct node*start=NULL;
void insert();
void display();
int item;

void main()
{
 clrscr();
 int choise;
 do{
 cout<<"\n1. insert\n2.display\n3.exit"<<endl;
 cout<<"\nenter your choise"<<endl;
 cin>>choise;
 switch(choise)
 {
 case 1:
 insert();
 break;
 case 2:
 display();
 break;
 case 3:
 exit(0);
 break;
 default:
 cout<<"invalid"<<endl;
 }
 }while(1);
 getch();
}
void insert()
{
 struct node*ptr;
 cout<<"enter the data"  <<endl;
 cin>>item;
 if(start==NULL)
 {
 start=(struct node*)malloc(sizeof(struct node*));
 start->data=item ;
 start->next=NULL;
 }
 else
 {
 start=ptr;
 start=(struct node*)malloc(sizeof(struct node*));
 start->data=item;
 start->next=ptr;
 }
}
void display()
{
struct node*ptr=start;
int i=1;
if(ptr==NULL)
{
 cout<<"list is empty"<<endl;
}
else{
cout<<"S.no \t data \t adress" <<endl;
while(ptr!=NULL)
{
 cout<<i<<"\t"<<ptr->data<<"\t"<<ptr->next<<endl;
 ptr=ptr->next;
 i++ ;
}
}
}


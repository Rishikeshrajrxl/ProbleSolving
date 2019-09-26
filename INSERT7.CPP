	//program for insertion of node in singly linked list

# include<iostream.h>
# include<conio.h>
# include<stdlib.h>
struct node
{                                //declaration of node
int data;
struct node*next;
}*ptr,*head,*tail,*temp;         //pointer to node

void insert_beg();
void insert_pos();
void insert_end();               //function declaration
void display();
int item;

int main()                       //main starts here
{int ch;
clrscr();
do{
cout<<"1.insert at end\n2.insert_beg\n3.insert_pos\n4.display\n5.exit"<<endl;
cout<<"enter yout choise"<<endl;
cin >>ch;
  switch(ch)
  {
  case 1:
  insert_end();
  break;
  case 2:
  insert_beg();
  break;
  case 3:
  insert_pos();
  break;
  case 4:
  display();
  break;
  case 5:
  exit(0);
  break;
  }
}while(ch!=0);
getch();
return 0;                      //main ends here
}
			       //definition of insert_end function
void insert_end()
{clrscr();
ptr=(struct node*)malloc(sizeof(struct node));
cout<<"enter the item"<<endl;
cin>>item;
ptr->data=item;
ptr->next=NULL;
if(head==NULL)
 {
 head=ptr;
 tail=ptr;
 }
 else
 {
 tail->next=ptr;
 tail=ptr;
 }
}

void insert_beg()
{
clrscr();
ptr=(struct node*)malloc(sizeof(struct node));
cout<<"enter the item"<<endl;
cin>>item;
ptr->data=item;
if(head==NULL)
 {
  head=ptr;
  tail=ptr;
  ptr->next=NULL;
 }
else
 {
  ptr->next=head;
  head=ptr;
 }
}

void insert_pos()
{
clrscr();
int i,loc;
ptr=(struct node*)malloc(sizeof(struct node));
cout<<"enter the item"<<endl;
cin>>item;
ptr->data=item;
cout<<"enter the location"<<endl;
cin>>loc;
temp=head;
for(i=1;i<loc-1;i++)
 {
  temp=temp->next;
  ptr->next=temp->next;
  temp->next=ptr;
 }
}


void display()                   //definition of display function
{ clrscr();
int i=1;
temp=head;
cout<<"S.No\tdata\tlink"<<endl;
while(temp!=NULL)
 {
 cout<<i<<"\t"<<temp->data<<"\t"<<temp->next<<endl;
 temp=temp->next;
 i++;
 }
cout<<"****************************************************" <<endl;
}


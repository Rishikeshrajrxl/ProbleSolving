# include<iostream.h>
# include<conio.h>
# include<stdlib.h>

void push();
void pop();
void display();

int top=0
,ele,n;
int *stack=new int[n];
void main()
{  int ch;

clrscr();
cout<<"enter the size of stack"<<endl;
cin>>n;


do{
cout<<"1.push\n2.pop\n3.display\n4.exit"<<endl;
cout<<"enter your choise"<<endl;
cin>>ch;
   switch(ch)
   {
   case 1:
   push();
   break;
   case 2:
   pop();
   break;
   case 3:
   display();
   break;
   case 4:
   exit(0);
   break;
   }
}while(1);
delete []stack;
getch();
}

void push()
{
clrscr();
cout<<"enter the element"<<endl;
cin>>ele;
if (top==(n-1))
  {
  cout<<"overflow"<<endl;
  }
else
  {
   top++;
   stack[top]=ele;
  }
}

void pop()
{
if(top==-1)
 {
 cout<<"underflow"<<endl;
 }
else
 {
 ele=stack[top];
 top--;
 }
}

void display()
{
clrscr();
int i;
if(top!=-1)
{
  for(i=top;i>=0;i--)
  {
  cout<<"\t\t"<<stack[i]<<endl;
  }
}
else
cout<<"stack is empty"<<endl;
}

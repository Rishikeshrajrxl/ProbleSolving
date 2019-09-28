# include<iostream.h>
# include<conio.h>
void main()


{
clrscr();
long arr[5];
int i,n;
long count=0;
cout<<"enter the element"<<endl;
cin>>n;
for(i=0;i<n;i++) {
cin>> arr[i] ;
}
for(i=0;i<n;i++)  {

count=count+arr[i];
}
cout<<count;
getch();
}
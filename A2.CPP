 # include<iostream.h>
 # include<conio.h>

 int a[50];

 void main()
 {
 clrscr();
 int i,num,loc,n;
 cout<<"enter the size of arry"<<endl;
 cin>>n;
 cout<<"enter the element of arrya"<<endl;
 for(i=0;i<n;i++)
 cin>>a[i];
 cout<<"your array"<<endl;
 for(i=0;i<n;i++)
 cout<<a[i]<<"\t";
 cout<<"\nenter the element to insert"<<endl;
 cin>>num;
 cout<<"\nenter the location "<<endl;
 cin>>loc;
 loc=loc-1;
 int b=0;
 for(i=n;i>loc;i--)
 {
  a[n-b]=a[n-1-b];
  b++;
 }
 a[loc]=num;
 cout<<"\nafter insertion"<<endl;
 for(i=0;i<=n;i++)
 cout<<a[i]<<"\t";





 getch();
 }



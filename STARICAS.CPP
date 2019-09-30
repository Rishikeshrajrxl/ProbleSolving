# include<iostream.h>
# include<conio.h>

main()
{
clrscr();
int i,n,j,star=1;
cout<< "enter the value of n"<<endl;
cin>>n;
for(i=1;i<=n;i++)
{
   if(i==4)
   {
     for(j=1;j<=n;j++)
     cout<<"#";
   }
   else
   {
     for(j=1;j<=(n-i);j++)
     cout<<" ";
     for(j=0;j<star;j++)
     cout<<"#";
   }
  star++;
  cout<<"\n";
}

getch();
return 0;
}
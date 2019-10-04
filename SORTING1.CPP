# include<iostream.h>
# include<conio.h>

int main()
{
clrscr();
int a[10],i,j,n;
cout<<"enter the size of array"<<endl;
cin>>n;
cout<<"enter the elements"<<endl;
for(i=0;i<n;i++)
{
cin>>a[i];
}
cout<<"your array"<<endl;
for(i=0;i<n;i++)
{
cout<<a[i]<<" ";
}
cout<<"after sorting"<<endl;

for(i=0;i<n;i++)
{
  for(j=0;j<n;j++)
  {
    if(a[j]>a[j+1])
    {
    int temp=0;
    temp=a[j];
    a[j]=a[j+1];
    a[j+1]=temp;

    }
  }
}
for(i=0;i<n;i++)
{
cout<<a[i]<<" ";
}
int count=0;
   int compare=a[n-1];
for(i=0;i<n;i++)
{
 if(compare==a[i])
 count++;
}
cout<<"\n"<<count<<endl;



getch();
return 0;
}
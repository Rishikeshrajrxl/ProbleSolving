#include<iostream>
using namespace std;

int main()
{
    int  n;
    cin>>n;
    int  rev=0;
    int rem;
    int count=0;
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        count++;
        n=n/10;
    }
    int arr[1000];
    int i=0;

    while(rev>0)
    {
        rem=rev%10;
        arr[i]=rem;
        i++;
        rev=rev/10;
    }

    int start,end;
    int prev_sum=0,curr_sum=0;
     i=0;int j;
    int prev_num=arr[0];

    for(int k=0;k<count;k++)
    {
        if(arr[k]>=prev_num)
        {
           curr_sum+=arr[k];
            prev_num=arr[k];
            j=k;
        }
        else if(arr[k]<prev_num)
        {
            if(curr_sum>prev_sum)
            {
                start=i;
                end=j;
                prev_sum=curr_sum;   
            }
                curr_sum=arr[k];
                i=k;j=k;
                prev_num=arr[k];
        }
    }
    if(curr_sum>prev_sum)
    {
        prev_sum=curr_sum;
        start=i;
        end=j;
    }
    cout<<prev_sum<<":"<<start+1<<"-"<<end+1<<endl;
    
    return 0;
}
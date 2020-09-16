#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        int arr[15];

        int rem;
        int i=0;
        int rev=0;
        while(n>0)
        {
            rem=n%10;
            rev=rev*10+rem;
            n=n/10;
        }
        while(rev>0)
        {
            rem=rev%10;
            if(rem>1)
            {
               arr[i]=rem-2;
               i++;
            }
            rev=rev/10;
           
        }
        for(int j=0;j<i;j++)
        {
            cout<<arr[j];
        }
        cout<<endl;
    }
    return 0;
}
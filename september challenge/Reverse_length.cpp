#include<bits/stdc++.h>
using namespace std;
int main()
{
        int n;
        cin>>n;

        int rem;
        int rev=0;
        int count=0;
        while(n>0)
        {
            rem=n%10;
            count++;
            rev=rev*10+rem;
            n=n/10;
        }
        int rev2=0;
        int flag=1;
        while(rev>0)
        {
            rem=rev%10;
            rev2=rev2*10+rem;
            if(rev2%count!=0)
            {
                flag=0;
                break;
            }
            rev=rev/10;
            count--;
        }
        if(flag==1)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;

    return 0;
}
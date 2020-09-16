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

        int rem;
        rem=n%7;

        if(rem==0 ||rem==1)
            cout<<83<<endl;
        else if(rem==2 || rem==6)
            cout<<83<<" "<<83<<endl;
        else if(rem==3||rem==5)
            cout<<83<<" "<<83<<" "<<69<<endl;
        else if(rem==4)
            cout<<83<<" "<<83<<" "<<69<<" "<<67<<endl;
        
    }
    return 0;
}
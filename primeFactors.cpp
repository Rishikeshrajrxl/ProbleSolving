

// program to print all the prime factor of the given number.
# include<iostream>
using namespace std;

void prime_factor(int n)
{
    while(n%2==0)
    {
        cout<<"2"<<", ";
        n=n/2;
    }
    for(int i=3;i<n;i+=2)
    {
        if(n%i==0)
        {
            cout<<i<<", ";
            n=n/i;
        }   
    }
    if(n>2)
        cout<<n<<endl;
}
int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    prime_factor(n);
    return 0;
}

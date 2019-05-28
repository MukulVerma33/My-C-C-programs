#include <bits/stdc++.h>

using namespace std;

void count(long long int n)
{
    long long int k=10;
    int max=0,t=0;
    while(n!=0)
    {
    //    cout<<"remainder is -> "<<n%k<<endl;
        if(n%k==1)
        t=t+1;
    //    cout<<"t is ->"<<t<<endl;
        if(n%k==0)
        {
            if(max<=t)
            max=t;
            t=0;
        }
        n=n/10;
        if(max<t)
        max=t;
    }
    cout<<max;
}
void tobin(int n)
{
    long long int bin=0,k=1;
    while(n!=1)
    {
        bin=bin+k*(n%2);
        n=n/2;
        k=k*10;
    }
    if(n==1)
    bin=bin+k;
    cout<<bin<<endl;
    count(bin);
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    tobin(n);
    return 0;
}

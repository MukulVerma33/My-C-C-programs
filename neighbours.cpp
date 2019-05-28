#include <math.h>
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
using namespace std;
void swap(int &a, int &b)
{
    int temp=a;
    a=b;
    b=temp;
}
void sort(int *a,int n,int *a1,int n1)
{
    int b[n+1],b1[n1+1];
    for(int i=0;i<=n1;i++)
    b1[i]=a1[i];

    for(int i=0;i<=n1;i++)
    {
        for(int j=i;j<=n1;j++)
        {
            if(a1[j]>a1[i])
            swap(a1[j],a1[i]);
        }
    }
    int sum1=0,i=0;
    while(sum1>=0 && i<=n1 && a1[i]>0)
    {
        sum1=sum1+a1[i];
        i++;
    }
    for(int i=0;i<=n1;i++)
    {
        for(int j=i;j<=n1;j++)
        {
            if(b1[j]<b1[i])
            swap(b1[j],b1[i]);
        }
    }
     for(int i=0;i<=n;i++)
    b[i]=a[i];

    for(int i=0;i<=n;i++)
    {
        for(int j=i;j<=n;j++)
        {
            if(a[j]>a[i])
            swap(a[j],a[i]);
        }
    }
    int sum=0;
    i=0;
    while(sum>=0 && i<=n && a[i]>0)
    {
        sum=sum+a[i];
        i++;
    }
    for(int i=0;i<=n;i++)
    {
        for(int j=i;j<=n;j++)
        {
            if(b[j]<b[i])
            swap(b[j],b[i]);
        }
    }
    if(sum1<sum){
    for(i=0;i<=n;i++)
    {
        if(b[i]>0)
        cout<<b[i];
    }
    cout<<endl;}
    else if(sum1>sum)
    {
            for(i=0;i<=n1;i++)
    {
        if(b1[i]>0)
        cout<<b1[i];
    }
    cout<<endl;
    }
    else{
        for(i=0;i<=n1;i++){
        if(b[i]<b1[i] && b[i]>0 && b1[i]>0)
        {
        for(i=0;i<=n;i++)
        {
        if(b[i]>0)
        cout<<b[i];
        }
		cout<<endl;
        break;
        }
        else if(b[i]>b1[i] && b[i]>0 && b1[i]>0)
        {
             for(i=0;i<=n1;i++)
        {
        if(b1[i]>0)
        cout<<b1[i];
        }
        cout<<endl;
            break;
        }
        }
        if(b1[i]<0 || b[i]<0)
        {
            for(i=0;i<=n1;i++)
        {
        if(b1[i]>0)
        cout<<b1[i];
        }
        cout<<endl;
        }
    }
}

int main(int argc, char *a[])
{
    int t,n,sum,one,two,print;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        int k=0,r=0;
        if(n%2==0)
        print=n/2;
        else print=n/2-1;
        int a[n],one[10],two[10];
        for(int j=0;j<n;j++)
        {
            cin>>a[j];
            if(j%2==0)
            {one[k]=a[j];k++;}
            else {two[r]=a[j];r++;}
        }
    sort(one,n/2,two,print-1);
}
}


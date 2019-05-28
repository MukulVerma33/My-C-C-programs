#include<iostream>
using namespace std;
int main()
{ int i,a[5],j,k;
cout<<"enter values: ";
for(i=0;i<5;i++)
{ 
cin>>a[i];
}
for(i=1;i<5;i++)
{ 
k=a[i];
j=i-1;
while(k>a[j])
{ a[j+1]=a[j];
j--;
if(j<0)
a[j]=k+1;
}
a[j+1]=k;
}
for(i=0;i<5;i++)
{ cout<<a[i]<<"\n";
}
}

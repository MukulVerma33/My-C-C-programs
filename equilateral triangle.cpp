#include<iostream> 
#include<string.h>
using namespace std;
void swap(int &a,int &b)
{
	int t;
	t=a;
	a=b;
	b=t;
}

int main()
{
	int i,j,k,n;
	n=10;
	for(i=0;i<n;i+=2)
	{for(k=n-2;k>=i;k--){
		cout<<".";}
	for(j=0;j<=i;j++)
	{
	cout<<"x ";
	}
	cout<<endl;
	}
	
}

#include<iostream> 
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
	int a[100],i,j;
	for(i=1;i<=100;i++)
	{
		a[i]=i;
	}
	for(i=2;i<=100;i++)
	{
		for(j=i+1;j<=100;j++)
		{if(a[i]!=0){
			if(a[j]%a[i]==0)
			a[j]=0;}
		}
	}
	for(i=1;i<100;i++)
	{
		if(a[i]!=0)
		cout<<a[i]<<endl;
	}
}

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
	int n,i,j;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"ordered list\n";
	for(i=0;i<n;i++)
	{	
		for(j=0;j<n-i-1;j++)
{
		if(a[j]>a[j+1])
		{
			swap(a[j],a[j+1]);
		}
	}}
		for(i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
}

#include<iostream>
using namespace std;
void odd_count(int *a,int n)
{
	int c;
	for(int i=0;i<n;i++)
	{
		if(a[i]==0)
		c++;
	}
	if(c%2!=0)
	cout<<"0"<<endl;
	for(int i=0;i<n;i++)
	{
			c=0;
		for(int j=i+1;j<n;j++)
		{
			if(a[j]==a[i]&&a[j]!=0)
			{
				c++;
				a[j]=0;
			}
		}
			if(c%2==0&&a[i]!=0)
			cout<<a[i]<<endl;
	}
}
void sort(int *a,int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[j]<a[i])
			swap(a[i],a[j]);
		}
	}
}
void odd_count2(int *a,int n)
{
	sort(a,n);
	int j=0;
	for(int i=0;i<n;i++)
	{
		int c=0;
		while(a[i]==a[j])
		{
			c++;
			j++;
		}
		if(c%2!=0)
		cout<<a[i]<<endl;
	}
}
int main()
{
	int a[14]={5,4,0,1,3,2,0,5,9,0,1,4,5,4};
	odd_count2(a,14);
	/*sort(a,14);
	for(int i=0;i<14;i++)
	cout<<a[i]<<endl;*/
}


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
	int a[4][4]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15},i,j;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			cout<<a[i][j]<<"\t";
		}
		cout<<endl;
	}
	for(i=0;i<4;i++)
	{
		for(j=i;j<4;j++)
		{
			swap(a[i][j],a[j][i]);
		}
	}
	cout<<endl<<"transpose"<<endl;
		for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			cout<<a[i][j]<<"\t";
		}
		cout<<endl;
	}

}

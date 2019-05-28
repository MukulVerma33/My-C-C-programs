#include<iostream> 
#include<string.h>
using namespace std;
int main()
{
	int d,i,j,k,n,t=-1,a[100][100],b[100],c[100];
	cin>>n;
	////////////////////////////////////
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		cin>>a[i][j];
	}
	
	///////////////////////////////////
	
		for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]==0)
			{
				t++;
				b[t]=i;
				c[t]=j;
			}
		}
	}
	//t--;
			while(t>=0){
				for(i=0;i<n;i++) a[i][c[t]]=0;
			for(i=0;i<n;i++) 	a[b[t]][i]=0;
				t--;
			}
		for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		cout<<a[i][j]<<" ";cout<<endl;
	}
}

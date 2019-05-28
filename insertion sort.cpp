#include<iostream>
using namespace std;
int* Isort(int* B,int n)
{
	int i,j,k,temp;
/*	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(B[i]<B[j])
			{
				temp=B[j];
				k=j;
				//for(k=j;k>i;k--)
				//{
					B[k]=B[k-1];
					k--;
				//}
				B[i]=temp;
			}
		}
	}*/
for(i=1;i<n;i++)
{ 
k=B[i];
j=i-1;
	while(k>B[j])
		{ 
		B[j+1]=B[j];
		j--;
			if(j<0)
			B[j]=k+1;
		}
	B[j+1]=k;
	}
	return B;
 } 
int main()
{
	int n,i;
	cout<<"enter the number of elements"<<endl;
	cin>>n;
	int A[n];
	for(i=0;i<n;i++)
	cin>>A[i];
	Isort(A,n);
	cout<<endl;
	for(i=0;i<n;i++)
	cout<<A[i]<<endl;
	
	
}

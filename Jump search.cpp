#include<iostream> 
#include<math.h> 
using namespace std;
void jump_search(int *a,int n)
{
	int find,num,i=0,k=sqrt(n),bound;
	cout<<"Enter the number you want to find:- ";
	cin>>num;
	while(a[k]<num)
	{
		if(k+sqrt(n)>n-1)
		k=n-sqrt(n)-1;
		k=k+sqrt(n);
	}
	for(i=k;i>=k-sqrt(n);i--)
	{
		if(a[i]==num)
		cout<<"The index is :- "<<i;
	}
/*	while(find!=num)
	{
		if(a[k]>=num)
		{
			bound=k-3;
			for(i=bound+1;i<=k;i++)
			{
				if(a[i]==num)
				{
				find=a[i];
				cout<<"The index is "<<i<<endl;}
			}
		}
		else
		{
			if(k+3>=n-1)
			k=n-4;
			k=k+3;
		}
	}*/
}
int main()
{
	int a[14]={1,2,3,4,5,6,7,8,9,10,11,12,13,14};
	jump_search(a,14);
}


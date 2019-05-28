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
int conv(char x)
{
	int a;
	a = (int)x;
	a=a-48;
	return a; 
}
int len(string x)
{
	int a=0;
	while(x[a]!='\0')
	{
		a++;
	}
return a;	
}
int mul(int n)
{
	int a=1,i;
	for(i=0;i<n-1;i++)
	{
		a=a*10;
	}
	return a;
}

int main()
{
	int i,t=0,x;
	string c;
	cin>>c;
	int n=len(c);
	for(i=n;i>0;i--)
	{
		x=conv(c[n-i]);
		
		t=t+(x*mul(i));
	}
	cout<<t;
}

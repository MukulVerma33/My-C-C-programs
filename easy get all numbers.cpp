#include <iostream>
using namespace std;
int main()
{
	char a[4];
	int i,j,k,l;
	for(i=0;i<4;i++)
	{
		a[0]=i+48;
		for(j=0;j<4;j++)
		{
			a[1]=j+48;
			for(k=0;k<4;k++)
			{
				a[2]=k+48;
				for(l=0;l<4;l++)
				{
					a[3]=l+48;
					cout<<a<<", ";
				}
			}
		}
	}
}

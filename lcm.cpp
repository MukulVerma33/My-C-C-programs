#include <iostream>
using namespace std;
void lcm(int a,int b)
{
	int i=2,lcm=1;
	while(a!=1||b!=1)
	{
		if(a%i!=0&&b%i!=0)
			i++;
		if(a%i==0&&b%i==0)
		{
			lcm=lcm*i;
			a=a/i;
			b=b/i;
		}
		else if(a%i==0)
		{
			lcm=lcm*i;
			a=a/i;
		}
		else if(b%i==0)
		{
			lcm=lcm*i;
			b=b/i;
		}		
	}
	cout<<lcm;
}
void lcm2(int a,int b)
{
	int lcm=1;
	while(lcm%a!=0||lcm%b!=0)
	lcm++;
	cout<<lcm;
}
void hcf(int a,int b)
{
	int hcf;
	if(a>b)
	hcf=b;
	else hcf=a;
	while(a%hcf!=0||b%hcf!=0)
	hcf--;
	cout<<hcf;
}
int main()
{
hcf(15,32);
}

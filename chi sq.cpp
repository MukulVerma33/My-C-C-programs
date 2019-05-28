#include<iostream>
#include<math.h>
using namespace std;
void repdel(int *a,int &n)
{
	int i,j,count=0;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n-count;j++)
		{
		if(a[i]==a[j])
		{
			for(int k=j;k<n;k++)
			{a[k]=a[k+1];
			}
			count++;
		}}
	}
	n=n-count;
	//cout<<"n    "<<count<<endl;
}
int main()
{
	int group[10][10],i,j,an=11,c=37,m=100,x=48,x1,a[10]={0,0,0,0,0,0,0,0,0,0},b[10]={0,0,0,0,0,0,0,0,0,0};//one=0,two=0,three=0,four=0,five=0,six=0,seven=0,eight=0,nine=0,ten=0,one1=0,two1=0,three1=0,four1=0,five1=0,six1=0,seven1=0,eight1=0,nine1=0,ten1=0,
	for(i=0;i<100;i++)
	{
		x1=(an*x+c)%m;
		x=x1;
		cout<<x1<<"  ";
		if(0<=x1&&x1<10)
		{
			group[0][a[0]]=x1;
			a[0]++;
			b[0]++;
			repdel(group[0],a[0]);
		}
		else if(9<x1&&x1<20)
		{
			group[0][a[1]]=x1;
			a[1]++;
			b[1]++;
			repdel(group[1],a[1]);
		}	
		else	if(19<x1&&x1<30)
		{
			group[0][a[2]]=x1;
			a[2]++;
			b[2]++;
			repdel(group[2],a[2]);
		}
		else	if(29<x1&&x1<40)
		{
			group[0][a[3]]=x1;
			a[3]++;
			b[3]++;
			repdel(group[3],a[3]);
		}
		else	if(39<x1&&x1<50)
		{
			group[0][a[4]]=x1;
			a[4]++;
			b[4]++;
			repdel(group[4],a[4]);
		}
		else	if(49<x1&&x1<60)
		{
			group[0][a[5]]=x1;
			a[5]++;
			b[5]++;
			repdel(group[5],a[5]);
		}
		else	if(59<x1&&x1<70)
		{
			group[0][a[6]]=x1;
			a[6]++;
			b[6]++;
			repdel(group[6],a[6]);
		}
		else	if(69<x1&&x1<80)
		{
			group[0][a[7]]=x1;
			a[7]++;
			b[7]++;
			repdel(group[7],a[7]);
		}
		else	if(79<x1&&x1<90)
		{
			group[0][a[8]]=x1;
			a[8]++;
			b[8]++;
			repdel(group[8],a[8]);
		}
		else	if(89<x1&&x1<100)
		{
			group[0][a[9]]=x1;
			a[9]++;
			b[9]++;
			repdel(group[9],a[9]);
		}
	}
	cout<<endl;
	for(int i=0;i<10;i++)
	cout<<a[i]<<"    "<<b[i]<<endl;
	for(int i=0;i<10;i++)
	{
		for(j=0;j<a[i];j++)
		cout<<group[i][j]<<"  ";
		cout<<endl;
	}
	/*int sum=0;
	for(int i=0;i<10;i++)
	sum=sum+pow(10-b[i],2);
	cout<<sum/10;*/
	/*int a[8]={1,2,3,5,4,3,4,3},n=8;
	repdel(a,n);
	for(int i=0;i<6;i++)
	cout<<a[i]<<endl;*/
}

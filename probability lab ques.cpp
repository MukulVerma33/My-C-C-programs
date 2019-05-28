#include<iostream>
#include<math.h>
using namespace std;
void sort(float *store)
{
	int i,j;
	for(i=0;i<750;i++)
	{
		for(j=i+1;j<750;j++)
		{
			if(store[i]>store[j])
			swap(store[i],store[j]);
		}
	}
}
void randno(int &x,int a,int c,float *s)
{
	int x1,m=100,mean=0,median=0,stand=0;
	float q1,q3,iq,lower,upper,store[750];
	for(int i=0;i<750;i++)
	{
		x1=(a*x+c)%m;
		mean=mean+x1;
		store[i]=x1;
		s[i]=s[i]+x1;
		x=x1;
		cout<<x1<<"\t";
	}
	mean=mean/750;
	cout<<"The mean is :- "<<mean<<endl;
	sort(store);
	cout<<"The median is :- "<<store[375]<<endl;
	q1=store[187];
	q3=store[549];
	iq=q3-q1;
	lower=q1-(1.5*iq);
	upper=q3+(1.5*iq);
	cout<<"the upper is :- "<<upper<<endl;
	cout<<"the lower is :- "<<lower<<endl;
	for(int i=0;i<750;i++)
	{
	stand=stand+pow((store[i]-mean),2);
	if(store[i]<lower||store[i]>upper)
	cout<<store[i]<<endl;
	}
	cout<<"The standard deviation is :- "<<pow(stand/750,0.5)<<endl;
	cout<<endl;
}
int main()
{
	int x=1,i,a[6]={11,12,13,14,15,16},c[6]={37,38,39,40,41,42},stand=0;
	float s[750];
	for(i=0;i<750;i++)
	s[i]=0;	
	for(i=0;i<6;i++)
	{
	cout<<"The data for subject s"<<i+1<<" is :-"<<endl;
	randno(x,a[i],c[i],s);
	}
	cout<<"The mean of marks of students is:- ";
	int sum=0;
	for(i=0;i<750;i++)
	sum=sum+s[i];
	cout<<sum/750<<endl;
	sort(s);
	cout<<"The median is :-"<<s[375]<<endl;
	for(i=0;i<750;i++)
	stand=stand+pow(s[i]-sum/750,2);
	cout<<"The standard deviation is :- "<<pow(stand/750,0.5)<<endl;
	
	
}

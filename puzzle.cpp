#include<iostream> 
#include<string.h>
#include"dos.h"
/*getkey()
{
	union REGSi,o;
	while(!kbhit())
		;
		i.h.ah=0;
		int86(22,&i,&o);
		return(o.h.ah);
}*/
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
	int i,j;
	string z,a[4][4]={"1","4","15","7","8","10","2","11","14","3","6","13","12","9","5"," "};
	string *k=&a[3][3];
		while(z!="x")
	{
		cout<<"the array is"<<endl;
		for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			cout<<a[i][j]<<"\t";
		}
		cout<<endl;
	}
		cin>>z;
		if(z=="w")
		{swap(*k,*(k-4));
		k=(k-4);}
		if(z=="a")
		{swap(*k,*(k-1));
		k=(k-1);}
		if(z=="d")
		{swap(*k,*(k+1));
		k=(k+1);}
		if(z=="s")
		{swap(*k,*(k+4));
		k=(k+4);}	
	}
	 
}

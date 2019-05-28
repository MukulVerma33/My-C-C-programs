#include<iostream>
using namespace std;
int m=100;
void create()
{
	int *a=new int[m];
	if(!*a)
	cout<<"Error";
	int *top=new int;
	if(!top)
	cout<<"error";
	top=0;
}
void push()
{
	
}
int main()
{
	create();
}

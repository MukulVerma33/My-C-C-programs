#include<iostream>
using namespace std;
int top=0;
int max=10;
int IsEmpty()
{
	if(top==0)
	return 1;
	else return 0;
}
int push(int *S,int value)
{
	if(top<max)
	{
	top++;
	S[top]=value;}
	else
	cout<<"Stack full";
}
int pop(int *S)
{
	if(IsEmpty())
	cout<<"error"<<endl;
	else
	{
	cout<<S[top];
	top--;
	}
}

void print(int *S,int size)
{
	for(int i=top;i>0;i--)
	cout<<S[i]<<endl;
}
int main()
{
	int n=5;
	int A[100];
	push(A,100);
	push(A,200);
	push(A,300);
	push(A,400);
	push(A,500);
	cout<<top<<endl;
	print(A,n);
	pop(A);
	cout<<endl<<endl;
	print(A,n);
	
  }  


#include<iostream>
using namespace std;
int m=3;
struct Dstack
{
	int size;
	int *s;
	int top;
};
struct Dstack *create()//struct Dstack *A)
{
	Dstack *A=new(struct Dstack);
	if(!A)
	cout<<"Error";
	A->size=m;
	A->s=new int[m];
	if(!A->s)
	cout<<"Error";
	A->top=0;
	return A;
}
int push(struct Dstack *A,int value)
{
	if(A->top==A->size)
	{
		cout<<"Stack full"<<endl;
		return 1;
	}
	else
	{
		A->top++;
		A->s[A->top]=value;
	}
}
int pop(struct Dstack *A)
{
	if(A->top>0)
	{
		A->top--;
		cout<<"The popped element is "<<A->s[A->top+1]<<endl;
	}
	else	
	{
		cout<<"Stack empty";	
		return 1;
	}
}
void del(struct Dstack *A)
{
	if(A)
	{
		if(A->s)
		delete A->s;
		delete A;
	}
}
void print(struct Dstack *A)
{
	for(int i=A->top;i>0;i--)
	cout<<A->s[i]<<endl;
}
int main()
{
	struct Dstack *D;
	D=create();//D);
	push(D,10);
	push(D,20);
	push(D,30);
	push(D,40);
	push(D,50);
	print(D);
	pop(D);
	print(D);
	del(D);
	print(D);
}
